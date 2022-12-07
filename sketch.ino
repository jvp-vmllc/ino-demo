#define ANALOG_PIN A0
int value;
String data1;
String data2;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() { 
  if (Serial.available () > 0){
    data1 = Serial.readStringUntil(',');
    data1 = Serial.readStringUntil('\n');
    Serial.println(data1);
    Serial.println(data2);
  }
  
  value = analogRead(ANALOG_PIN);
  Serial.println(value);
}
