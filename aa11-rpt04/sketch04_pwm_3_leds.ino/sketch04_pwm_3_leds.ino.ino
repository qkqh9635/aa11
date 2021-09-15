// pwm_3_leds.ino
int pwm1 = 0;
int pwm2 = 0;
int pwm3 = 0;

int ledR = 3;
int ledG = 5;
int ledB = 6;





// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

pwm1 = random(0,255);
pwm2 = random(0,255);
pwm3 = random(0,255);
pwmLed(ledR , pwm1);
pwmLed(ledG , pwm2);
pwmLed(ledB , pwm3);






 Serial.print("AA11,LED_R: ");
 Serial.print(pwm1);
 Serial.print(" LED_G: ");
 Serial.print(pwm2);
 Serial.print(" LED_B: ");
 Serial.println(pwm3);
 delay(10);
   
}

void pwmLed(int led, int pwmValue) {
  analogWrite(led,pwmValue);
  delay(10);
}
