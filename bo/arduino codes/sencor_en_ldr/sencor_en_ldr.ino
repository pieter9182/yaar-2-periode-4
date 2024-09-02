uint8_t relay = 5;
uint8_t sensor = A0;

void setup() {
  Serial.begin(115200);
  pinMode(relay, OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
  int Value = analogRead(sensor);  // Use int instead of boolq2
  Serial.println(Value);
  delay(1000);
 if (Value >= 660) {
    digitalWrite(relay, HIGH);  // Turn the relay on
  } else {
    digitalWrite(relay, LOW);   // Turn the relay off
  }
}
