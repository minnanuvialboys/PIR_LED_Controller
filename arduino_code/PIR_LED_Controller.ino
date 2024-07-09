int ledPin = 13;                
int inputPin = 10;               
int val = 0;                    

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(inputPin, INPUT);     

  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inputPin);  
  if (val == HIGH) {            
    digitalWrite(ledPin, HIGH);  
      Serial.println("Motion detected!");
      
    }
   else {
    digitalWrite(ledPin, LOW); 
      Serial.println("No Motion detected !");
     
    }
  delay(800);
}
