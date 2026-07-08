const int buzzer = 2;
const int irSensor = 3;
const int pirSensor = 4;
const int led = 9;

const int colorP1 = A0;
const int colorP2 = A1;
const int colorP3 = A2;
const int colorP4 = A3;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(irSensor, INPUT);
  pinMode(pirSensor, INPUT);

  digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);

  Serial.begin(9600);
}

void loop()
{
  int ir = digitalRead(irSensor);
  int pir = digitalRead(pirSensor);

  // Change LOW to HIGH if your IR sensor works opposite
  bool thief = (ir == LOW) || (pir == HIGH);

  if(thief)
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

    Serial.println("*****");
    Serial.println("BEWARE OF THE THIEF!");
    Serial.println("*****");

    int p1 = analogRead(colorP1);
    int p2 = analogRead(colorP2);
    int p3 = analogRead(colorP3);
    int p4 = analogRead(colorP4);

    if(p1 > p2 && p1 > p3)
      Serial.println("Colour : RED");

    else if(p2 > p1 && p2 > p3)
      Serial.println("Colour : GREEN");

    else if(p3 > p1 && p3 > p2)
      Serial.println("Colour : BLUE");

    else
      Serial.println("Colour : UNKNOWN");
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}