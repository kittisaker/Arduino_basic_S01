//int incomingByte = 0;
char incomingByte = 0;
#define LED 13

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void lab1(){
  if(Serial.available() > 0){
    incomingByte = Serial.read();
    Serial.print("I received : ");  Serial.println(incomingByte, DEC);
  }
}

void lab2(){
  if(Serial.available() > 0){
    incomingByte = Serial.read();
    Serial.print("I received : ");  Serial.println(incomingByte);
    if(incomingByte == 'a'){
      digitalWrite(LED, HIGH);
    }else{
      digitalWrite(LED, LOW);
    }
  }
}

void loop() {
//  lab1();
  lab2();
}
