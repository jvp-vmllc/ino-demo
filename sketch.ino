#define ANALOG_PIN A0
int value;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  value = analogRead(ANALOG_ PIN);
  Serial.println(value);
}
