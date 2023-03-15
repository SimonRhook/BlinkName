

int ledPin = D7; 
int button = D1;
int ledState = LOW;
const int dashgap = 150;
const int dotgap = 50;
const int gap = 300;
unsigned long currentMillis;
unsigned long staticMillis;


    




void setup() {

 
    pinMode(ledPin, OUTPUT);
    pinMode( button, INPUT_PULLUP);
}

void dash() {
    
    currentMillis = millis();
    staticMillis = currentMillis;
    ledState = HIGH;
    digitalWrite(ledPin, ledState);
    while (currentMillis <= (staticMillis + dashgap)) {
    
        currentMillis = millis();

    
        
    } 
    ledState = LOW;
        digitalWrite(ledPin, ledState);
    delay(dashgap);
    
}

void dot() {
    currentMillis = millis();
    staticMillis = currentMillis;
    ledState = HIGH;
    digitalWrite(ledPin, ledState);
    while (currentMillis <= (staticMillis + dotgap)) {
    
        currentMillis = millis();

    
        
    } 
    ledState = LOW;
    digitalWrite(ledPin, ledState);
    delay(dashgap);
    
}
void loop() {

    
while (digitalRead(button) == LOW) {    

 /*   //S . . .
      
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    delay(gap);
      
    //I . .
      
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    delay(gap);
    //M - -
      
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    delay(gap);
    //O - - - 
     
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    delay(gap);
      
    //N - .
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    delay(1000);
    
    */
  
  
  //R .-.
      
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    delay(gap);
      
    //H ....
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dot(); else break;  
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    delay(gap);
    //O - - -
      
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    delay(gap);
    //O - - - 
     
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    delay(gap);
      
    //K -.-
    if (digitalRead(button) == LOW) dash(); else break;
    if (digitalRead(button) == LOW) dot(); else break;
    if (digitalRead(button) == LOW) dash(); else break;
    delay(1000);
  
}
}
