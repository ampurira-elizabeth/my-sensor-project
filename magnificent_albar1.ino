const int trigpin=10;
const int echopin=9;
 int red=2;


long duration,distance;

  void setup(){
   pinMode(trigpin,OUTPUT);
   pinMode(echopin,INPUT);
     
    Serial.begin(9600);
   
    
    pinMode(red,OUTPUT);
     
}
void loop(){
  digitalWrite(trigpin,HIGH);
    delay(10);
  digitalWrite(trigpin,LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=(duration/58.2);
    
    Serial.println(distance);
    delay(100);
  
    if(distance <50){
    digitalWrite(red,HIGH);
  } else{
  digitalWrite(red,LOW);
  }
  
  
}
