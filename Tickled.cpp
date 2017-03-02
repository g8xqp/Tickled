#include <dmc_Tickled.h>

void Tickled::InitPin(){
  pinMode(p,OUTPUT);
}
void Tickled::SetPin(){
  digitalWrite(p,s);
}
void Tickled::Init(int pin){
  p=pin;
  InitPin();
}
void Tickled::Init(){
  p=TICKLED;;
  InitPin();
}
void Tickled::LEDon(){
  s=true;
  SetPin();
}
void Tickled::LEDoff(){
  s=false;
  SetPin();
}
void Tickled::LEDtoggle(){
  if(s){
    LEDoff();
  } else {
    LEDon();
  }
}
