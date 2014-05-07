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
#ifndef MPU_h
#define MPU_h

#include <Wire.h>
#include <MPU6050.h>
#include <I2Cdev.h>

class MPU
{
public:
MPU();
void init();
void getAxlData(int buff[]);
void getGyroData(float buff[]);
void getMagData(int buff[]);
private:

};

#endif
