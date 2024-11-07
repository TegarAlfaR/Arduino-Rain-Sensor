#define rainSensorPin A1
#define buzzerPin 7

void setup() {
    Serial.begin(2400);
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    int rainSensor = analogRead(rainSensorPin);
    Serial.print("Rain Sensor : ");
    Serial.println(rainSensor);

    if (rainSensor < 700) {
        digitalWrite(buzzerPin, HIGH);
        Serial.println("Buzzer Active");
    } else {
        digitalWrite(buzzerPin, LOW);
        Serial.println("Buzzer Inactive");
    }
}
