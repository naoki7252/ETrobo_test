#include "state_manager.h"


StateManager::StateManager(WheelsControl* wheels_control, Luminous* luminous) : wheels_control_(wheels_control), luminous_(luminous) {
}

void StateManager::TestRun() {
  Rgb val = luminous_->rgb_;

  sprintf(str, "R: %d, G: %d, B: %d\n ", val.r, val.g, val.b);
  syslog(LOG_NOTICE, str);

  /*
  int8_t power = 50;
  loopCount += 1;
  if (loopCount < 300) {
    wheels_control_->GoStraight(power);
  } 
  else if(loopCount >= 300 && loopCount < 600){
    //wheels_control_->GoBackStraight(power);
  }
  else if(loopCount >= 600 && loopCount < 900){
    wheels_control_->TurnLeft();
  }
  else {
    wheels_control_->Stop();
  }*/
}

