#include <iostream>
#include "V:\ABP\lab_1\lab_1.cpp"
#include "V:\ABP\lab_2\lab_21.cpp"
#include "V:\ABP\lab_2\lab_22.cpp"
#include "V:\ABP\lab_3\lab_3.cpp"
#include "V:\ABP\lab_4\lab_4.cpp"
#include "V:\ABP\lab_5\lab_5.cpp"
#include "V:\ABP\lab_6\lab_6.cpp"
#include "V:\ABP\lab_7\lab_7.cpp"
#include "V:\ABP\lab_8\lab_8.cpp"
#include "V:\ABP\lab_9\lab_9.cpp"
#include "V:\ABP\lab_10\lab_10.cpp"
#include "V:\ABP\develop\develop.cpp"
using namespace std;

int main() {
    system("chcp 65001");
    start:
    cout << "\n""\n""Який проєкт ви хочете обрати?"<<endl<<endl;
    cout<<"-----------------------------------"<<endl<<endl;
    cout << "Введіть 1, щоб почати Lab_1"<<endl;
    cout << "Введіть 21, щоб почати Lab_2.1"<<endl;
    cout << "Введіть 22, щоб почати Lab_2.2"<<endl;
    cout << "Введіть 3, щоб почати Lab_3"<<endl;
    cout << "Введіть 4, щоб почати Lab_4"<<endl;
    cout << "Введіть 5, щоб почати Lab_5"<<endl;
    cout << "Введіть 6, щоб почати Lab_6"<<endl;
    cout << "Введіть 7, щоб почати Lab_7"<<endl;
    cout << "Введіть 8, щоб почати Lab_8"<<endl;
    cout << "Введіть 9, щоб почати Lab_9"<<endl;
    cout << "Введіть 10, щоб почати Lab_10"<<endl;
    cout << "Введіть 99, щоб почати develop"<<endl;
    cout << "Нажміть 0, щоб вийти"<<endl;



    int (q);
    cin >> q;
    switch(q){
        case 0:
            cout << "END";
            break;

        case 1:
            lab_1();
            break;

        case 21:
            lab_21();
            break;

        case 22:
            lab_22();
            break;
        case 3:
            lab_3();
            break;
        case 4:
            lab_4();
            break;
        case 5:
            lab_5();
            break;
        case 6:
            lab_6();
            break;
        case 7:
            lab_7();
            break;
        case 8:
            lab_8();
            break;
        case 9:
            lab_9();
            break;
        case 10:
            lab_10();
            break;
        case 99:
            develop();
            break;


        default:
            cout << "Error, you entered an invalid value""\n""Please try again";
            break;

    }
}

