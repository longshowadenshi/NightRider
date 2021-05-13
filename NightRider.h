#ifndef NightRider_H
#define NightRider_H
#include <Arduino.h>

class NightRider
{
  private:
  int ledpins[8];
  int _ledpins[8];
  int _delay=50;
  public:
  NightRider(int ledpins[]);
  void Run1();
  void Run2();
};
#endif
