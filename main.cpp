#include <iostream>
#include <string>
using namespace std;
#include "hotel.h"


int totalBill=0;

int main() {

    userInfo();


    int choice;
    cout << "Welcome to CW Chariot ! " << endl;
    cout<<" Please enter your choice "<<endl;
    cout<<" 0) View the price list  "<<endl;
    cout<<" 1) Book a room "<<endl;
    cout<<" 2) Book a table"<<endl;
    cout<<" 3) Enjoy the theme park"<<endl;
    cout<<" 4) Customise a plan "<<endl;

//    cin >> choice;


    switch (choice) {
        case '0':

//            viewMenu();
            break;
        case '1':
           // bookRoom();
            break;
        case '2':
            break;

        case '3':
            break;

        case '4':
            break;

        case '5':
            break;
        default:
            cout<<" Exit. ";
            break;
    }
    return 0;

}





