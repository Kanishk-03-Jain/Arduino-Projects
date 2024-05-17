int LED=13;
int LDR=A0; 
int val=0;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(LDR);
  Serial.println(val);
  if(val < 450)
  {
    
    digitalWrite(LED,HIGH);
  } 
  else
  {
    digitalWrite(LED,LOW);
  }
}
  
  

  
