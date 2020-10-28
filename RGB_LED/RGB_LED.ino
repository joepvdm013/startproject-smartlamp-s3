
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}


int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
{
#define delayTime 10 

redValue = 255; 
greenValue = 0;
blueValue = 0;



for(int i = 0; i < 255; i += 1) // fades out red to green full when i=255
{
redValue -= 1;
greenValue += 1;
analogWrite(RED, redValue);
analogWrite(GREEN, greenValue);
delay(delayTime);
}

redValue = 0;
greenValue = 255;
blueValue = 0;

for(int i = 0; i < 255; i += 1) // fades out green to blue full when i=255
{
greenValue -= 1;
blueValue += 1;
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
delay(delayTime);
}

redValue = 0;
greenValue = 0;
blueValue = 255;

for(int i = 0; i < 255; i += 1) // fades out blue to red full when i=255
{

blueValue -= 1;
redValue += 1;
analogWrite(BLUE, blueValue);
analogWrite(RED, redValue);
delay(delayTime);
}
}
