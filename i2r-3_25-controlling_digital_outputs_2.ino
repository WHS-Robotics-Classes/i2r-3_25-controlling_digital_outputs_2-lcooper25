void setup() {


pinMode(10, OUTPUT);
pinMode(3, OUTPUT);

digitalWrite(10, HIGH);
delay(500);
digitalWrite(10, LOW);
delay(500);
digitalWrite(10, HIGH);
delay(500);
digitalWrite(10, LOW);
delay(500);

delay (1000);

digitalWrite(3, HIGH);
delay(250);
digitalWrite(3, LOW);
delay(1000);
digitalWrite(3, HIGH);
delay(250);
digitalWrite(3, LOW);
delay(1000);
digitalWrite(3, HIGH);
delay(250);
digitalWrite(3, LOW);
delay(1000);

delay (2000);
}


void loop() 
{
digitalWrite(3, HIGH);
digitalWrite(10, HIGH);
delay(500);
digitalWrite(3, LOW);
digitalWrite(10, LOW);
delay(200);
}
