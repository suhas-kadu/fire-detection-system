int redLED=5;
int greenLED=6;
int buzzer=7;
int sensorPin=A0;
int sensor_val=0;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(19200);
}

void loop()
{

sensor_val=analogRead(sensorPin);
digitalWrite(greenLED, LOW);

if (sensor_val>700){
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);
      digitalWrite(buzzer, HIGH);
      Serial.println("ALERT!!!");
    }
else{
      digitalWrite(redLED, LOW);
      digitalWrite(buzzer, LOW);
      digitalWrite(greenLED, HIGH);
     Serial.println("SAFE");
     }

}