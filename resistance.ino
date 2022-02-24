void setup () {
    Serial.begin (9600);
}

void loop () {
    int Value = analogRead (A0);
    float voltage = Value*(5.0/1024.0);
    float current = voltage / 1000;
    float VRx = 5 - voltage ;
    float Rx = VRx / current ;
    Rx = (5 - voltage) / current ;
    Serial.print ("Resistance:");
    Serial.print (Rx);
    Serial.println ("Ohms");
    delay (1000);
}
