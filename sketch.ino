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
    data2 = Serial.readStringUntil('\n');
    Serial.println(addTwoNum);
  }
  
  value = analogRead(ANALOG_PIN);
  Serial.println(value);
}

String addTwoNum(String data1, String data2){
  int add;
  add = data1.toInt() + data2.toInt();
  return add;
}