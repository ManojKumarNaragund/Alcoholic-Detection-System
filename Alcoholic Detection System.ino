#define sensorDigital 2
#define LED 3
#define buzzer 4
#define motorPin 9
#define sensorAnalog A1
 
void setup() {
  pinMode(sensorDigital, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = analogRead(sensorAnalog);
 
  Serial.print("Analog value : ");
  Serial.print(analog);
  Serial.print("t");
  Serial.print("Digital value :");
  Serial.println(digital);
 
  if (digital != 0) {
digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
   digitalWrite(motorPin, HIGH);
    
  } else {

digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);    digitalWrite(motorPin, LOW);
  }
}