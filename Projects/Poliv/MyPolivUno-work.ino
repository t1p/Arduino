const int moistureAO = 0;
int AO = 0;
int tmp = 0;
int buzzPin = 12;
int LED = 13;
int ralay = 6; //пин реле

void setup() {
  Serial.begin(9600);
  pinMode(moistureAO, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(ralay,HIGH);//настройка реле
}

void loop() {
  tmp = analogRead(moistureAO );
  if (tmp != AO) {
    AO = tmp;
    Serial.println(AO); 
  }
  delay (1000);
  if (analogRead(0) > 400) {
    digitalWrite(buzzPin, HIGH);
    digitalWrite(LED, HIGH);
    digitalWrite(ralay, HIGH);
    delay(1000);   
    digitalWrite(buzzPin, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(ralay, LOW);
  }
  else {
    digitalWrite(buzzPin, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(ralay, LOW);
  }
}
