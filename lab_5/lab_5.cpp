#include <iostream>
#include <windows.h>
using namespace std;

int lab_5(){
    system("chcp 65001");
    srand(time(0));
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

    for(int i=0;i<g;++i){
        array[i]= -50+rand() % 101;
    }
    array[g]=1;
    for(int i=0;i<g;++i){
        cout<<array[i]<<" ";
    }



    cout <<endl<<endl<< "Змінений масив"<<endl<<endl;

    int o=0;
    for(int i=0;i<=g;i++){
        if(array[i]<0){
            o++;
        }
        else if(array[i]>=0){

            if(o>1){
                int start,end,max,min,nmax,nmin;
                start=i-o;
                end=i-1;
                max=array[start];
                min=array[start];
                nmax=start;
                nmin=start;
                for(int l=start;l<end+1;l++){
                    if(array[l]>=max){
                        max=array[l];
                        nmax=l;
                    }
                    else if(array[l]<=min){
                        min=array[l];
                        nmin=l;
                    }
                    else{
                        break;
                    }


                }
            array[nmax]=min;
            array[nmin]=max;
            o=0;
            }
        else{
            o=0;
        }

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
