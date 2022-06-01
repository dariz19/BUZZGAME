//Buzzer game :)

int RedLed = 8; // If coil Wand touches the wire maze The Led turn on
int GreenLed = 10; // If Coil Wand touches the End of wire maze Turns on
int Lose = 2; //Wire maze
int Win = 5; //Finish Line
int buzzer = 6;


void setup() {
  pinMode (RedLed, OUTPUT);
  pinMode (GreenLed, OUTPUT);
  pinMode (buzzer, OUTPUT);
  pinMode (Lose, INPUT);
  pinMode (Win, INPUT);
}

void loop() {
  if (digitalRead(Lose)==HIGH){
    LoseBuz();
    digitalWrite(RedLed,HIGH);
    delay(1000); // delay is 1 sec
    digitalWrite(RedLed,LOW);
  }
  else if (digitalRead(Win)==HIGH){
    WinBuz();
    digitalWrite(GreenLed,HIGH);
    delay(1000); // delay is 1 sec
    digitalWrite(GreenLed,LOW);
  }
  else //turn off all led and buzzer 
  {
    digitalWrite(RedLed,LOW);
    digitalWrite(buzzer,LOW);
    digitalWrite(GreenLed,LOW);
  }
}

// I used Void to seperate the code of buzzer
// Buzzer win and Lose Sound

void LoseBuz(){
  digitalWrite(buzzer, HIGH);
}
void WinBuz(){
  digitalWrite(buzzer,HIGH);
  delay(250); // delay is 1/4 of a sec
  digitalWrite(buzzer,LOW);
  delay(250); // delay is 1/4 of a sec
}
