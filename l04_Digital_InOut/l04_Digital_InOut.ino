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
  if(digitalRead(SW_pin[0]) == LOW){
    digitalWrite(LED_pin[0], HIGH);
    Serial.print(SW_pin[0]);  Serial.println(" = LOW");
    Serial.println("LED pin 2 : On");
    Serial.println();
    while(digitalRead(SW_pin[0]) == LOW);
  }else{
    digitalWrite(LED_pin[0], LOW);
  }

  if(digitalRead(SW_pin[1]) == LOW){
    digitalWrite(LED_pin[1], HIGH);
    Serial.print(SW_pin[1]);  Serial.println(" = LOW");
    Serial.println("LED pin 3 : On");
    Serial.println();
    while(digitalRead(SW_pin[1]) == LOW);
  }else{
    digitalWrite(LED_pin[1], LOW);
  }

  if(digitalRead(SW_pin[2]) == LOW){
    digitalWrite(LED_pin[2], HIGH);
    Serial.print(SW_pin[2]);  Serial.println(" = LOW");
    Serial.println("LED pin 4 : On");
    Serial.println();
    while(digitalRead(SW_pin[2]) == LOW);
  }else{
    digitalWrite(LED_pin[2], LOW);
  }

  if(digitalRead(SW_pin[3]) == LOW){
    digitalWrite(LED_pin[3], HIGH);
    Serial.print(SW_pin[3]);  Serial.println(" = LOW");
    Serial.println("LED pin 5 : On");
    Serial.println();
    while(digitalRead(SW_pin[3]) == LOW);
  }else{
    digitalWrite(LED_pin[3], LOW);
  }
  
}

void loop() {
  lab1();
}
