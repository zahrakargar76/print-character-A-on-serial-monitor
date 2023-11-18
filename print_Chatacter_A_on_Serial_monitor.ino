void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char thisChar = (char)Serial.read();
    if (thisChar == 'A') {
      Serial.println("Character A");
    } else {
      Serial.println("A not found")
    }
  }
}
