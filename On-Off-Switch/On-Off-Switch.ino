const int button = 10;
const int led = 3;
bool ledon = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == 0)
  {
    if(ledon == false)
    {
      digitalWrite(led, 1);
      ledon = true;
      delay(500);
    }
    else
    {
      digitalWrite(led, 0);
      ledon = false;
      delay(500);
    }
  }
}
