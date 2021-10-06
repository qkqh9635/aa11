//
// AA00, TMP36 + CdS sensors
//

#define TMP36_INPUT 0
// 

void setup() {
  Serial.begin(9600);
}

void loop() {
   //getting the voltage reading from the temperature sensor
  int value = analogRead(TMP36_INPUT);
  Serial.print("value = ");
  Serial.println(value);
//  Serial.print(" : ");
 
   // converting that reading to voltage
//   float voltage = value * 5.0 * 1000;  // in mV
//   voltage /= 1023.0; 
   
   // print out the voltage
//   Serial.print(voltage); 
//   Serial.print(" mV, ");
   
   // now print out the temperature
//   float temperatureC = (voltage - 500) / 10 ;  
//   Serial.print(temperatureC); 
//   Serial.println(" degrees C");

  delay(1000);
}

//Voltage to Lux
double luminosity (int RawADC0){
  double Vout=RawADC0*5.0/1023.0;  // 5/1023 (Vin = 5 V)
  double lux=(2500/Vout-500)/10;  
  // lux = 500 / Rldr, Vout = Ildr*Rldr = (5/(10 + Rldr))*Rldr
  return lux;
}
