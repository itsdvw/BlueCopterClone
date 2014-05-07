/*
  Created by Basel Al-Rudainy, 6 april 2013.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
*/

#include "MPU.h"
#include <Arduino.h>
#include <MPU6050.h>


int16_t ax, ay, az;
int16_t gx, gy, gz;
MPU6050 mpug;


MPU::MPU()
{
}

void MPU::init() {
  mpug.initialize();
#ifdef DEBUG
  //Serial.println(mpu6050.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");
#endif
}


void MPU::getAxlData(int buff[]) {
  //mpu6050.getAcceleration(&ax, &ay, &az);
  buff[0] = ax;
  buff[1] = ay;
  buff[2] = az;
}

void MPU::getGyroData(float buff[]) {
  //mpu6050.getRotation(&gx, &gy, &gz);
  buff[0] = gx;
  buff[1] = gy;
  buff[2] = gz;
}

void MPU::getMagData(int buff[]) {

  buff[0] = 0; //(buffer[0]<<8) | buffer[1];
  buff[2] = 0; //(buffer[2]<<8) | buffer[3];
  buff[1] = 0; //(buffer[4]<<8) | buffer[5];
}
