//The board: Arduino Nano ATmega328P (old bootloader)

//Pin Setup 
const int SoilPin1 = A1;
const int SoilPin2 = A2;

//Variables
const int LBMoist; //Stands for Lower-Bound Moisture
const int UBMoist; //Stands for Upper-Bound Moisture
bool isDry = false;
bool isWet = false; 

void setup() {
  Serial.begin(9600);


}

void loop() {
  int Moist1 = analogRead(SoilPin1);
  int Moist2 = analogRead(SoilPin2);
  int AVRGMoist = ((Moist1+Moist2) * 0.5);
  
  if (AVRGMoist <= LBMoist){
    isDry = true;
  }
  else if (AVRGMoist >= UBMoist){
    isWet = true;
  }
}
