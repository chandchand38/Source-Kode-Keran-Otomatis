const int pinTrig = 4;
const int pinEcho = 3;
const int kran = 2;
int jarak;

void setup() {
 Serial.begin(9600);
 pinMode(pinTrig, OUTPUT);
 pinMode(pinEcho, INPUT);
 pinMode(kran,OUTPUT);
 digitalWrite(kran,LOW);
}
void loop() {
 
digitalWrite(pinTrig, LOW);
delayMicroseconds(10);
digitalWrite(pinTrig, HIGH);
float durasi = pulseIn(pinEcho, HIGH);
jarak =(durasi *0.034)/2;
Serial.println (jarak );

if (jarak < 18) {
  digitalWrite(kran,HIGH);
}
else {
  digitalWrite(kran,LOW);
}
delay(300);
}
