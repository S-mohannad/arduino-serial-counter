int x=0;
void setup(){
Serial.begin(9600);
Serial.println("hello everyone...");
}
void loop(){
Serial.println(x);
x=x+1;
delay(1300);
}