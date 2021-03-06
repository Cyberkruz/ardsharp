/**
 * Author: Matt Kruskamp (http://www.cyberkruz.com)
 * Copyright (c) 2012
 * This software is released under the MIT license.
 */
 
/*
  Initialize
    command byte: 100
    pin byte: NA
    values: NA
      
  Pin Mode
    command byte: 101
    pin byte: pin #
    values:
      INPUT: 0
      OUTPUT: 1
      INPUT_PULLUP: 2
      
  Digital Write
    command byte: 102
    pin byte: pin #
    values:
      LOW: 0
      HIGH: 255
  
  Digital Read
    command byte: 103
    pin byte: pin #
    returns:
      0: LOW
      255: HIGH
      
  Analog Write
    command byte: 105
    pin byte: pin #
    values:
      int from 0 to 255
      
  Analog Read
    command byte: 106
    pin byte: pin #
    returns:
      int from 0 to 255
*/
