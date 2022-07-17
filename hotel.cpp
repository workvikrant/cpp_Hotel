//includes the whole class
// example void house::setNumStories( int Num)
//this tells the function that it is not a global function but a function of the class of hotel as in this case
//

#include "hotel.h"
#include <iostream>
using namespace std;


hotel::hotel(string Name, int Age, string Address, string Country, string reasonToStay, bool withFamily )//constructor
{
    this->Name=std::move(Name);
    this->Age=Age;
    this->Address=std::move(Address);
    this->Country=std::move(Country);
    this->reasonToStay=std::move(reasonToStay);
    this->withFamily=withFamily;
}

string hotel::getName() const
{
    return Name;
}
int hotel::getAge() const
{
    return Age;
}
string hotel::getAddress() const
{
    return Address;
}
string hotel::getCountry() const
{
    return Country;
}
string hotel::getreasonToStay() const
{
    return reasonToStay;
}
bool hotel::getwithFamily() const
{
    return withFamily;
}
void hotel::printDetails() const
{
    cout<<"Hello Mr."<<Name<< endl;
}




void userInfo()
{

    string name;
    int age;
    string address ;
    string country;
    string reasonToStay;
    bool withFamily;
    cout<<"Enter your name = "<<endl;
    cin>>name;
    cout<<"Enter your age = "<<endl;
    cin>>age;
    cout<<"Enter your address = "<<endl;
    cin>>address;
    cout<<"Enter your country = "<<endl;
    cin>>country;
    cout<<"Enter your reason to stay = "<<endl;
    cin>>reasonToStay;
    cout<<"Enter your with family = "<<endl;
    cin>>withFamily;

    hotel guest(name,age,address,country,reasonToStay,withFamily);

    cout<<"Hello Mr."<<name<<"!"<<endl;


};





