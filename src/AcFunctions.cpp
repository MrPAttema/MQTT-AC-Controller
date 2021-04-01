#include "AcFunctions.h"

void ACOnOff() {
    if (!isOn) {
        Serial.println("AC On");
        isOn = true;
    } else {
        Serial.println("AC Off");
        isOn = false;
    }
}

void acSwingFunction() {
    isSwing = !isSwing;
    return true;
}

void acFanSpeed() {
    fanSpeed = ++fanSpeed % 4;
    return true;
}

void changeACmode() {
    isCool = !isCool;
    return false;
}