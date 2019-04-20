int volumePin = A0;

void setup() {
  pinMode(volumePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(volumePin));
  delay(10000);  
}
