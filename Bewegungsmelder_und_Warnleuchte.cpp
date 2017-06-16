int bewegung = 5;
int bewegungsstatus = 0;
int led = 13;

void setup()
{
    pinMode (bewegung, INPUT);
    pinMode (led, OUTPUT);
}

void loop()
{
    bewegungsstatus=digitalRead(bewegung);
    if (bewegungsstatus == HIGH)
    {
        digitalWrite(led, LOW);
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
    }
    else
    {
        digitalWrite(led, LOW);
        delay(1000);
    }
}
