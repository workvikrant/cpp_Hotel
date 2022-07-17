//declare all the member functions without the body
//all the member functions and prototypes for member functions
//jo bhi use hoga uski file add kr de
//example void setNumStories( int Num);

#ifndef CPP_HOTEL_HOTEL_H // include guards (if not defined)
#define CPP_HOTEL_HOTEL_H

#include <string>
using namespace std;

void userInfo();

class hotel
{
public:
    hotel(string Name, int Age, string Address, string Country, string reasonToStay, bool withFamily );    //constructor

    string getName() const;
    int getAge() const;
    string getAddress() const;
    string getCountry() const;
    string getreasonToStay() const;
    bool getwithFamily() const;
    void printDetails() const;

private:
    string Name;
    int Age;
    string Address ;
    string Country;
    string reasonToStay;
    bool withFamily ;

};


#endif //CPP_HOTEL_HOTEL_H
