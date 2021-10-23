#define POT 5
char LED_pin[] = {2, 3, 4, 5};
char SW_pin[] = {9, 10, 11, 12};

void setup() {
  Serial.begin(9600);
  for(int i=0; i<4; i++){
    pinMode(LED_pin[i], OUTPUT);
  }
  for(int i=0; i<4; i++){
    pinMode(SW_pin[i], INPUT_PULLUP);
  }
}

void lab1(){
  int adc = analogRead(POT);
  analogWrite(LED_pin[0], adc/4);
}

void lab2(){
  int adc = analogRead(POT);
  Serial.print("Analog Read value : "); Serial.println(adc);
  adc = map(adc, 0, 1023, 0, 255);
  Serial.print("   map value to : "); Serial.println(adc);
  analogWrite(LED_pin[1], adc);
  analogWrite(LED_pin[3], 255-adc);
  delay(1000);
}

void loop() {
  //lab1();
  lab2();
}
