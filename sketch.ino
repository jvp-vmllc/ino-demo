#define ANALOG_PIN_0 A0
#define ANALOG_PIN_1 A1

int value_0;
int value_1;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  value_0 = analogRead(ANALOG_PIN_0);
  Serial.println(value_0);

  value_1 = analogRead(ANALOG_PIN_1);
  Serial.println(value_1);
}