#include <iostream>
#include "V:\ABP\lab_1\lab_1.cpp"
#include "V:\ABP\lab_2\lab_21.cpp"
#include "V:\ABP\lab_2\lab_22.cpp"
using namespace std;

int main() {
    start:
    cout << "Which project do you want to choose?"<<endl<<endl;
    cout<<"////////////////////////////////////"<<endl<<endl;
    cout << "Choose 1 to start Lab 1"<<endl;
    cout << "Choose 2 to start Lab 2.1"<<endl;
    cout << "Choose 3 to start Lab 2.2"<<endl;
    cout << "Press 0 to exit"<<endl;


    int (q);
    cin >> q;
    switch(q){
        case 0:
            cout << "END";
            break;

        case 1:
            lab_1();
            break;

        case 2:
            lab_21();
            break;

        case 3:
            lab_22();
            break;

        default:
            cout << "Error, you entered an invalid value""\n""Please try again";
            break;

    }
}