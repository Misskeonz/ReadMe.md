#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"

class Character {
private:
    LinkedList dialogue;
    void readFile(const string &);

public:
    void start();
    void displayDialogue();
    void Itinerary();
    void ThanksforYourHospitality();
    void ToChangetheWinds();
    void UndertheSameShade();
    void NinkenbytheShore();
    void SpecialCare();
    void ATripforTwoinRitou();
    void StartSpreadintheNews();
    void SmallScaleChanges();

};
#endif
