#include <Arduino_LSM9DS1.h>

void setup() {
  Serial.begin(9600);
  if (!IMU.begin()) { //LSM6DS3센서 시작
    Serial.println("LSM6DS3센서 오류!");
    while (1);
  }
}

float accel_x, accel_y, accel_z;
float gyro_x, gyro_y, gyro_z;
float mag_x, mag_y, mag_z;

void loop() {
//  가속도센서
  Serial.print("AA11-AA12,");
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(accel_x, accel_y, accel_z);
    Serial.print(accel_x);
    Serial.print(",");
    Serial.print(accel_y);
    Serial.print(",");
    Serial.print(accel_z);
    Serial.print(",");
  }

   //자이로센서
  if (IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(gyro_x, gyro_y, gyro_z);
    Serial.print(gyro_x);
    Serial.print(",");
    Serial.print(gyro_y);
    Serial.print(",");
    Serial.print(gyro_z);
    Serial.print(",");
  }

   //지자계센서
  if (IMU.magneticFieldAvailable()) {
    IMU.readMagneticField(mag_x, mag_y, mag_z);
    Serial.print(mag_x);
    Serial.print(",");
    Serial.print(mag_y);
    Serial.print(",");
    Serial.println(mag_z);
  }

  delay(2000);
}
