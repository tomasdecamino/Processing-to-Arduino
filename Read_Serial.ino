// @author Tomas de Camino Beck

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  char inChar;
  if (Serial.available()) {
    inChar = (char)Serial.read();
    if (inChar == '0') {
      digitalWrite(13,LOW);
    }
    else{
      digitalWrite(13,HIGH);
    }

  }

}
