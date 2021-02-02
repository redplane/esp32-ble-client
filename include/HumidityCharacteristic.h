#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <Arduino.h>

#ifndef HUMIDITY_CHARACTERISTIC_H
#define HUMIDITY_CHARACTERISTIC_H

class HumidityCharacteristic : public BLECharacteristicCallbacks {

    void onWrite(BLECharacteristic *characteristic) {
        Serial.println("Property written");
    }
};

#endif