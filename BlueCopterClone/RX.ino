
void rxInit(){
  if (Usb.Init() == -1) {
    #ifdef DEBUG
    Serial.print(F("\r\nOSC did not start"));
    #endif
    while (1); //halt
  }
  #ifdef DEBUG
  Serial.print(F("\r\nXBOX USB Library Started"));
  #endif
}
/*
ISR(PCINT0_vect) 
{ 
  for(byte i=0;i<4;i++){
    byte rxtemp=digitalRead(pgm_read_byte(&rxPins[i]));
    if((rxState[i] == 0) & (rxtemp==1)){
      rxPrev[i]=micros();
      rxState[i]=1;
    }//if
    else if((rxState[i] == 1) & (rxtemp==0)){
      rxVal[i]=micros()-rxPrev[i];
      rxState[i]=0;
    }//elseif
  }//for
}//ISR
*/

