#include <NightRider.h>
NightRider::NightRider(int ledpins[])
{
  for(int i=0;i<8;i++)
  {
    pinMode(ledpins[i],OUTPUT);
    _ledpins[i]=ledpins[i];
  }
}
void NightRider::Run1()
{
  for(int i=0;i<8;i++)
  {
    digitalWrite(_ledpins[i],HIGH);
    digitalWrite(_ledpins[i+1],HIGH);
    digitalWrite(_ledpins[i+2],HIGH);
    delay(_delay);
    digitalWrite(_ledpins[i],LOW);
    digitalWrite(_ledpins[i+1],LOW);
  }
  for(int i=7;i>=0;i--)
  {
    digitalWrite(_ledpins[i],HIGH);
    digitalWrite(_ledpins[i-1],HIGH);
    digitalWrite(_ledpins[i-2],HIGH);
    delay(_delay);
    digitalWrite(_ledpins[i],LOW);
    digitalWrite(_ledpins[i-1],LOW);
  }
}
void NightRider::Run2()
{
    for(int i=0;i<4;i++)
    {
    digitalWrite(_ledpins[i],HIGH);
    digitalWrite(_ledpins[i+1],HIGH);
    digitalWrite(_ledpins[7-i],HIGH);
    digitalWrite(_ledpins[6-i],HIGH);
    delay(_delay);
    digitalWrite(_ledpins[i],LOW);
    digitalWrite(_ledpins[7-i],LOW);
    }
    for(int i=3;i>=0;i--)
    {
    digitalWrite(_ledpins[i],HIGH);
    digitalWrite(_ledpins[i-1],HIGH);
    digitalWrite(_ledpins[7-i],HIGH);
    digitalWrite(_ledpins[8-i],HIGH);
    delay(_delay);
    digitalWrite(_ledpins[i],LOW);
    digitalWrite(_ledpins[7-i],LOW);
    }
}
