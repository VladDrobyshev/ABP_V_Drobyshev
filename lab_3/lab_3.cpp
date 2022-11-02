#include <iostream>
#include <windows.h>
using namespace std;

int lab_3(){
    system("chcp 65001");
    cout << "LAB_3 " << "Варіант 9 Дробишев Влад ""\n""\n";



    cout << "\n""Ця програма оголосить масив та""\n""заповнить його випадковими значеннями" << endl;

    cout << "\n""____Початок____" << endl<<endl;


    turn:

    cout << "Масив з випадковими цифрами=" << endl<<endl;
    int array[200];

    srand(time(0));
    for(int i=0;i<200;++i){
        array[i]= rand() % 101;;
    }
    for(int i=0;i<200;++i){
        cout<<array[i]<<" ";
    }
    cout <<endl<<endl<< "Безперервна ділянка з 10 елементів,"<<endl<<"сума яких максимальна=" << endl<<endl;

    int m,sum=0,sum1=0,first=0,last=0,first1=0,last1=0;
    for(int p=0;p<191;++p){
        sum=array[p]+array[p+1]+array[p+2]+array[p+3]+array[p+4]+array[p+5]+array[p+6]+array[p+7]+array[p+8]+array[p+9];
        first=p;
        last=p+9;

        if(sum1<sum){
            sum1=sum;
            first1=first;
            last1=last;
        }

    }

    for(int b=first1;b<=last1;){
        cout<<array[b]<<" ";
        ++b;
    }








    turn1:
    cout << "\n" "\n" "Щоб повторити програму-введіть 1"<<endl;
    cout <<"Щоб закінчити програму-введіть 0"<<endl<<endl;
    int p;
    cin >> p;
    switch (p) {
        case 0:
            cout << "Кінець";
            break;

        case 1:
            goto turn;

        default:
            cout<<"Помилка, ви ввели неправильне значення";
            goto turn1;

    }
}
