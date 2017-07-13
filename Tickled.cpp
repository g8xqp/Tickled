#include <dmc_Tickled.h>

void Tickled::InitPin(int x){
  pinMode(p=x,OUTPUT);
}
void Tickled::SetPin(bool x){
  digitalWrite(p,s=x);
}
void Tickled::Init(int x){
  InitPin(x);
}
void Tickled::Init(){
  InitPin(TICKLED);
}
void Tickled::LEDon(){
  SetPin(true);
}
void Tickled::LEDoff(){
  SetPin(false);
}
void Tickled::LEDtoggle(){
  SetPin(!s)
}
