#include <iostream>
#include <windows.h>
using namespace std;

int lab_5(){
    system("chcp 65001");

    cout << "LAB_5 " << "Варіант 9 Дробишев Влад ""\n";
    Sleep(200);
    cout << "\n""Ця програма оголосить масив та""\n""заповнить його випадковими значеннями" << endl;
    Sleep(200);
    cout << "\n""____Початок____" << endl<<endl;
    Sleep(200);


    turn:
    cout << "Введіть розмірність масиву" << endl;
    int g;
    cin>>g;
    cout << "Масив з випадковими цифрами=" << endl<<endl;
    int array[g];

    srand(time(0));
    for(int i=0;i<g;++i){
        array[i]= -50+rand() % 101;;
    }
    for(int i=0;i<g;++i){
        cout<<array[i]<<" ";
    }
    Sleep(300);


    cout <<endl<<endl<< "Змінений масив"<<endl<<endl;

    int o=0, in,out;
    for(int i=0;i<g;i++){
        int k=0,e=0;
        if(array[i]<0){
            o++;
        }
        else if(array[i]>=0 && o>1){
            out=i-1;
            in=i-o;
            int max=array[i];
            int min=array[i];
            for(int q=in;q<=out;q++){
                if(array[q]>max){
                    max=array[q];
                    k=q;
                }
                else if(array[q]<min){
                    min=array[q];
                    e=q;
                }

            }
            array[e]=max;
            array[k]=min;
            o=0;
        }
        else{
            o=0;
        }






    }









    for(int i=0;i<g;++i) {
        cout << array[i] << " ";
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
