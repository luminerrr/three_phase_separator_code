void setUpValve(Servo numValve, int pin){
  numValve.attach(pin);
  Serial.println("pin attached");
  
  //Close Valve for Safety Reason
  numValve.write(0);
}

void OpenValveShutdownPump(Servo numValve, int pin){
  //Shutdown Pump, KODING DISINI
  
  //Fully Opened CV?, Ganti angkanya lek ga sesuai
  //Pokok Control valve harus terbuka penuh
  numValve.write(0);
}
