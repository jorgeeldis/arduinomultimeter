#define ChargePin 3
#define PulseInPin 11

double capacitance, inductance, pulse, frequency;

void setup(){
    Serial.begin(9600);
    pinMode(PulseInPin, INPUT);
    pinMode(ChargePin, OUTPUT);
    delay(200);
} 

void loop(){
    digitalWrite(ChargePin, HIGH);
    delay(5); 
    digitalWrite(ChargePin,LOW);
    delayMicroseconds(100);
    pulse = pulseIn(PulseInPin,HIGH,5000);

    if(pulse > 0.1)
    {
        capacitance = 1.E-6;
        frequency = 1.E6/(2*pulse);
        inductance = 1.0/ (capacitance*(frequency*frequency)*4.0*(3.14159*3.14159));
        inductance = inductance*1E6;
        Serial.print("Inductance uH:");
        Serial.println( inductance );
        delay(10);
    }
    delay(1000);
}
