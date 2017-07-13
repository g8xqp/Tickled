#ifndef Tickled_h
#define Tickled_h
#include "Arduino.h"

#include <Arduino.h>
#define TICKLED 13
class Tickled{
  private:
    bool s;
    int p;
    void InitPin(int x);
    void SetPin(bool x);
  public:
    void Init(int x);
    void Init();
    void LEDon();
    void LEDoff();
    void LEDtoggle();
  Tickled(){}
  ~Tickled(){}
};
#endif
