#define ANALOG_PIN A0
int value;
String data;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() { 
  if (Serial.available () > 0){
    data = Serial.readStringUntil('\n');
    Serial.println(data);
  }
  
  value = analogRead(ANALOG_PIN);
  Serial.println(value);
}
