//Eerste POC met een RGB led met arduino

//define van poorten
#define BLUE 3
#define GREEN 5
#define RED 6

//setup wordt eenmaal uitgevoerd
void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

//Variablen aangemaakt voor de values van de RGB
int redValue;
int greenValue;
int blueValue;

// loopt wordt continu afgespeeld
void loop()
{
#define delayTime 10 //tijd tussen het overgaan van values

//rode value wordt volledig aangezet
redValue = 255; 
greenValue = 0;
blueValue = 0;



for(int i = 0; i < 255; i += 1) // for loop waarbij de rode value naar 0 gaat (leeg) en de groene value naar 255(vol). Hierdoor creeër je een soort overloop van rood naar groen
{
redValue -= 1;
greenValue += 1;
analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
delay(delayTime);
}

//groene value wordt volledig aangezet
redValue = 0;
greenValue = 255;
blueValue = 0;

for(int i = 0; i < 255; i += 1) // for loop waarbij de groene value naar 0 gaat (leeg) en de blauwe value naar 255(vol). Hierdoor creeër je een soort overloop van groen naar blauw
{
greenValue -= 1;
blueValue += 1;
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
delay(delayTime);
}

//blauwe value wordt volledig aangezet
redValue = 0;
greenValue = 0;
blueValue = 255;

for(int i = 0; i < 255; i += 1) // for loop waarbij de blauwe value naar 0 gaat (leeg) en de rode value naar 255(vol). Hierdoor creeër je een soort overloop van blauw naar red.
{

blueValue -= 1;
redValue += 1;
analogWrite(BLUE, blueValue);
analogWrite(RED, redValue);
delay(delayTime);
}
}
