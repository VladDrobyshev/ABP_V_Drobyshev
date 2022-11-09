#include <iostream>
#include "V:\ABP\lab_1\lab_1.cpp"
#include "V:\ABP\lab_2\lab_21.cpp"
#include "V:\ABP\lab_2\lab_22.cpp"
#include "V:\ABP\lab_3\lab_3.cpp"
#include "V:\ABP\lab_4\lab_4.cpp"
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

        default:
            cout << "Error, you entered an invalid value""\n""Please try again";
            break;

    }
}