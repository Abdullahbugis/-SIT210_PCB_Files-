

int blueLed = A1;
int yellowLed = A2;
int greenLed = A3;


void setup()
{
   pinMode(yellowLed, OUTPUT);
   pinMode(greenLed, OUTPUT);
   pinMode(blueLed, OUTPUT);
   Particle.function("ledlight",ledlight);
}
void loop()
{
}

bool ledlight(String ledlight) 
{
    
    bool status = false;
    
    if (ledlight == "Blue") 
    {
        digitalWrite(blueLed, HIGH);
        digitalWrite(yellowLed, LOW);
        digitalWrite(greenLed, LOW);

        status = true;
    }
    else if (ledlight =="Yellow") 
    {
        
        digitalWrite(blueLed, LOW);
        digitalWrite(yellowLed, HIGH);
        digitalWrite(greenLed, LOW);
        
        status = true;
    }
    else if (ledlight == "Green") 
    {
        
        digitalWrite(blueLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(greenLed, HIGH);        
        
        status = true;
    }
    else
    {
        
        return -1;
    }
}