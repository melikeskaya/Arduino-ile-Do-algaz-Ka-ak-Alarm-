#define sensor_pin A0
#define buzzer_pin 13
#define preheat_time 5000
#define threshold 400

int sensorValue=0;

void setup()
{
  pinMode(buzzer_pin, OUTPUT);
  digitalWrite(buzzer_pin, HIGH);
  Serial.begin(9600);
  Serial.println("Sensor isiniyor.");
  delay(preheat_time);
}

void loop()
{
  digitalWrite(buzzer_pin, HIGH);
  int sensorValue=analogRead(sensor_pin);
  Serial.println(sensorValue);
  delay(1);
  if(sensorValue>=threshold)
  {
    digitalWrite(buzzer_pin,LOW);
    delay(1000);
    digitalWrite(buzzer_pin,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(buzzer_pin,HIGH);
  }
  }
