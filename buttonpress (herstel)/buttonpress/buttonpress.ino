//Button Press POC
// Een aan en uit knop waarmee een led aan of uit gaat.

int ButtonValue = 0;

//pin 3: input button
//pin 2: output led
int Button = 3;
int LED = 2;


//setup wordt maar een keer uitgevoerd
void setup() {

//definieren van de input en output
  pinMode (Button, INPUT);
  pinMode (LED, OUTPUT);
  

}
//in de loop wordt alles continu herhaald

void loop() {
  //button value verandert op naar de value van de button.
  ButtonValue = digitalRead(Button);

  if(ButtonValue != 0){
    digitalWrite(LED, HIGH);//aan    
  }

  else{
    digitalWrite(LED, LOW);   
  }
  
}
