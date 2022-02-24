const int analogIn = A0 ;
double mVA = 185;
double Value = 0;
double ACSoffset = 2500;
double Voltage = 0;
double Amps = 0;

void setup (){
    Serial.begin (9600);
} 

void loop (){
    Value = analogRead (analogIn);
    Voltage = (Value/1024.0)*5000;
    Amps = ((Voltage-ACSoffset)/mVA);
    Serial.print ("Amps = ");
    Serial.println (Amps ,2); 
    delay (1000);
}
