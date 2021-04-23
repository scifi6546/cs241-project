// Voltage to be maintained by load
float VOLTAGE_LOAD = 2.0;
// Minimum time to wait for circuit to switch relay
const int DELAY_TIME=1;
void setup() {
  pinMode(2,OUTPUT);
  digitalWrite(2, LOW);
  Serial.begin(9600);
}
int state=0;
void loop() {
  // put your main code here, to run repeatedly:
  float voltage = analogRead(A0)/1024.0*5.0;
  if(voltage>VOLTAGE_LOAD){
    digitalWrite(2,HIGH);
  }else{
     digitalWrite(2,LOW);
  }
  Serial.println(voltage);

  delay(DELAY_TIME);
  
}
