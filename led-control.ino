void setup() {
  Serial.begin(19200);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

}

void loop() {
  
  if(Serial.available() > 0) {
    char data = Serial.read();
    if(!data) Serial.end();

    if(data == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
    }

    if(data == '2') {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }

}
