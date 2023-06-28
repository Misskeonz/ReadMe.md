#include "Character.h"
#include <string>
#include <iostream>
#include <unistd.h>
using namespace std;

// Read and display dialogue file
void Character::readFile(const string &filename)
{
    ifstream file(filename , ios::in);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            dialogue.addNode(line);
            cout << line << endl;
            sleep(2);
        }
        file.close();
    }
    else
        cout << "Unable to open the dialogue file. Exiting..." << endl;
}

//Start of the storyline
void Character::start() {

    cout << "Welcome to the Thoma Hangout Story!" << std::endl;
    readFile("Behind_His_Back.txt");

    // Display character story options
    cout << "1. I agree. Let them do them, and you do you." << endl;
    cout << "2. Sorry, I can't say I agree." << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            readFile("Behind_His_Back_Branch1.txt");
            Itinerary();
            break;
        case 2:
            readFile("Behind_His_Back_Branch2.txt");
            ToChangetheWinds();
            break;
        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }
}

void Character::Itinerary()
{
    cout << "\nThoma would like to do something for you to thank you for your help during the Vision Hunt Decree...\n" << endl;

    readFile("Itinerary.txt");

    cout << "1: Let's stay indoors." << endl;
    cout << "2: Let's head out." << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            readFile("Itinerary_Branch1.txt");
            ThanksforYourHospitality();
            break;

        case 2:
            readFile("Itinerary_Branch2.txt");
            cout << endl;
            cout << "1: I wanna see these cats and dogs!" << endl;
            cout << "2: Let's hit the town." << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch(choice)
            {
              case 1:
                  readFile("Itinerary_Branch2_Branch1.txt");
                  UndertheSameShade();
                  break;

              case 2:
                  readFile("Itinerary_Branch2_Branch2.txt");
                  ATripforTwoinRitou();
                  break;

              default:
                  cout << "Invalid choice. Exiting..." << std::endl;
                  return;
            }

            break;

        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }

}

void Character::ToChangetheWinds()
{
  readFile("ToChangetheWinds.txt");
  readFile("AFriend.txt");
  readFile("AComebacksAlwaysontheCards.txt");
}

void Character::ThanksforYourHospitality()
{
  readFile("ThanksforYourHospitality.txt");

  // Display character story options
    cout << "1. We need to get out there and spread the word." << endl;
    cout << "2.  Let's keep it within the Yashiro Commission." << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            readFile("ThanksforYOurHospitality_Branch1.txt");
            StartSpreadintheNews();
            break;
        case 2:
            readFile("ThanksforYOurHospitality_Branch2.txt");
            SmallScaleChanges();
            break;
        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }
}

void Character::UndertheSameShade()
{
  readFile("UndertheSameShade.txt");
  readFile("Hungry.txt");

    cout << "1. Why don't we go and see it together?" << endl;
    cout << "2. Perhaps you should give it some time to calm down." << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            readFile("Hungry_Branch1.txt");
            NinkenbytheShore();
            break;
        case 2:
            readFile("Hungry_Branch2.txt");
            SpecialCare();
            break;
        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }
}

void Character::NinkenbytheShore()
{
  readFile("NinkenbytheShore.txt");
  readFile("ThoseWhoCanNeverReturn.txt");
}

void Character::SpecialCare()
{
  readFile("SpecialCare.txt");
    cout << "1. Why don't we go and see it together?" << endl;
    cout << "2. Perhaps you should give it some time to calm down." << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            readFile("SpecialCare_Branch1.txt");
            break;
        case 2:
            readFile("SpecialCare_Branch2.txt");
            break;
        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }

}

void Character::ATripforTwoinRitou()
{
  readFile("ATripforTwoinRitou.txt");

  // Display character story options
    cout << "1. I wonder how Kurisu's doing?" << endl;
    cout << "2. We spent quite an eventful time here.\n" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            readFile("ATripforTwoinRitou_Branch1.txt");

            // Display character story options
            cout << "1. Tastes pretty good." << endl;
            cout << "2.  Your cooking is better.\n" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    readFile("ATripforTwoinRitou_Branch1_Branch1.txt");
                    break;
                case 2:
                    readFile("ATripforTwoinRitou_Branch1_Branch2.txt");
                    break;
                default:
                    cout << "Invalid choice. Exiting..." << std::endl;
                    return;
             }
            break;

        case 2:
            readFile("ATripforTwoinRitou_Branch2.txt");

            cout << "1. Tastes pretty good." << endl;
            cout << "2.  Your cooking is better.\n" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    readFile("ATripforTwoinRitou_Branch1_Branch1.txt");
                    break;
                case 2:
                    readFile("ATripforTwoinRitou_Branch1_Branch2.txt");
                    break;
                default:
                    cout << "Invalid choice. Exiting..." << std::endl;
                    return;
             }
            break;

        default:
            cout << "Invalid choice. Exiting..." << std::endl;
            return;
    }
}

void Character::StartSpreadintheNews()
{
  readFile("StartSpreadintheNews.txt");
  readFile("HousekeepingCourseBegin.txt");
}

void Character::SmallScaleChanges()
{
  readFile("SmallScaleChanges.txt");
}
