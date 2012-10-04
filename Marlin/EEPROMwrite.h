#ifndef EEPROM_H
#define EEPROM_H

#include "Marlin.h"
#include "planner.h"
#include "temperature.h"
//#include <EEPROM.h>

extern int plaPreheatHotendTemp;
extern int plaPreheatHPBTemp;
extern int plaPreheatFanSpeed;

extern int absPreheatHotendTemp;
extern int absPreheatHPBTemp;
extern int absPreheatFanSpeed;



template <class T> int EEPROM_writeAnything(int &ee, const T& value);

template <class T> int EEPROM_readAnything(int &ee, T& value);
//======================================================================================




#define EEPROM_OFFSET 100


// IMPORTANT:  Whenever there are changes made to the variables stored in EEPROM
// in the functions below, also increment the version number. This makes sure that
// the default values are used whenever there is a change to the data, to prevent
// wrong data being written to the variables.
// ALSO:  always make sure the variables in the Store and retrieve sections are in the same order.
#define EEPROM_VERSION "V07"

void EEPROM_StoreSettings();

void EEPROM_printSettings();

void EEPROM_RetrieveSettings(bool def=false);

#endif


