#include <NightRider.h>

int ledpins[]={PA4,PA5,PA6,PA7,PC4,PC5,PB0,PB1};

NightRider nightrider(ledpins);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  nightrider.Run2();

}
