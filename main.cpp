const int tempSensorPin = A0; 
const int lightSensorPin = A1;
const int ledRedPin = 9; 
const int ledBluePin = 10;
const int solarLedPin = 11;
const int mainLedPin = 12;

const int tempThreshold = 30;
const int lightThreshold = 500;

void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledBluePin, OUTPUT);
  pinMode(solarLedPin, OUTPUT);
  pinMode(mainLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int tempValue = analogRead(tempSensorPin);
  float voltage = (tempValue / 1023.0) * 5.0;
  float temperature = (voltage - 0.5) * 100.0;


  int lightValue = analogRead(lightSensorPin);

 
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print(" °C, Luz: ");
  Serial.println(lightValue);


  if (temperature >= tempThreshold) {
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledBluePin, LOW); 
  } else {
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledBluePin, HIGH);
  }


  if (lightValue >= lightThreshold) {
  
    digitalWrite(solarLedPin, HIGH);
    digitalWrite(mainLedPin, LOW);
    Serial.println("Usando energia solar.");
  } else {

    digitalWrite(solarLedPin, LOW);
    digitalWrite(mainLedPin, HIGH);
    Serial.println("Usando energia convencional.");
  }

  delay(1000);
}