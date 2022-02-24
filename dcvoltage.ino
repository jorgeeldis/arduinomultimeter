void setup () {
    // initialize serial communication:
    Serial.begin (9600);
}

void loop () {
    // read the input on analog pin 0:
    int Value = analogRead (A0);
    // Convert the analog reading to a voltage:
    float voltage = Value*(5.0/1024.0)*10;
    // print out the values:
    Serial.print ("Voltage: ");
    Serial.print (voltage);
    Serial.println ("V");
    delay (1000);
}
   
