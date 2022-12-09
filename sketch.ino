#define ANALOG_PIN_0 A0
#define ANALOG_PIN_1 A1

int value_0;
int value_1;

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
    Serial.println(addTwoNum(data1, data2));
  }

  value_0 = analogRead(ANALOG_PIN_0);
  Serial.println(value_0);

  value_1 = analogRead(ANALOG_PIN_1);
  Serial.println(value_1);

  if (value_0 == 1023){
    Serial.println("Exceeds the maximumm allowable bit A0");
  }  

  if (value_1 == 1023){
    Serial.println("Exceeds the maximumm allowable for A1");
  }

}

String addTwoNum(String data1, String data2){
  int add;
  add = data1.toInt() + data2.toInt();
  return add;
}