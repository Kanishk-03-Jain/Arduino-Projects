// C++ code
//
int green = 5;
int blue = 4;
int red = 3;
int button = 2;
void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(green, HIGH);
  
}

void loop()
{
  if(digitalRead(button) == HIGH){
    digitalWrite(green, LOW);
  	digitalWrite(blue, HIGH);
    delay(500);
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    delay(500);
    digitalWrite(red, LOW);
  }else{
    digitalWrite(green, HIGH);
  }

}
