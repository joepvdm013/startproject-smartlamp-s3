//pin 3: input button
//pin 2: output led
int ButtonValue = 0;

int Button = 3;
int LED = 2;



void setup() {

  pinMode (Button, INPUT);
  pinMode (LED, OUTPUT);
  

}

void loop() {
  
  ButtonValue = digitalRead(Button);

  if(ButtonValue != 0){
    digitalWrite(LED, HIGH);
    
  }

  else{
    digitalWrite(LED, LOW);   
  }
  
}
