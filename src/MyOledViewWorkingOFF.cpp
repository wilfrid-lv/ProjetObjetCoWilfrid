/**
    Gestion d'une VUE pour le OLed : Base pour les écrans de travail
    @file MyOledViewWorkingOFF.cpp
    @author Alain Dubé
            Wilfrid Le Valégant
    @version 1.1 20/11/20 
*/
#include <Arduino.h>
#include "MyOledViewWorkingOFF.h"

using namespace std;

void MyOledViewWorkingOFF::display( Adafruit_SSD1306 *adafruit) {
    Serial.println("MyOledViewWorkingOFF");
    adafruit->setTextColor(WHITE);

    adafruit->clearDisplay();
    adafruit->setTextSize(2);
    adafruit->setCursor(0, 0);
    adafruit->print(getTag("nomDuSysteme").c_str());

    adafruit->setTextSize(1);
    adafruit->setCursor(0, 20);
    adafruit->print("Id: ");
    adafruit->print(getTag("idDuSysteme").c_str());

    adafruit->setTextSize(1);
    adafruit->setCursor(70, 20);
    adafruit->print("Ready");

    // adafruit->setTextSize(1);
    // adafruit->setCursor(60, 40);
    // adafruit->print(getTag("strTempFour").c_str());
    
    //  adafruit->setCursor(60, 50);
    //  adafruit->print(getTag("ipDuSysteme").c_str());
    
    adafruit->display();
    }