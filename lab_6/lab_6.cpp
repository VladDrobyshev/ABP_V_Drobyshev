#include <windows.h>
#include <iostream>
using namespace std;

void fill(int S){
    srand(time(0));
    int Ar[S][S];
    //заповненя матриці рандомними числами(від 1 до 99)
    for(int l=0;l<S;l++){
        for(int r=0;r<S;r++){
            Ar[l][r]=rand() % 100;
        }
    }
    cout<<"Матриця до обробки"<<endl;
    //вивід матриці

    for (int l = 0; l < S; l++) {
        for (int r = 0; r < S; r++) {
            cout << Ar[l][r]<<"\t";
        }
        cout<<endl;
    }
    //додатковый масив
    int array[S][S],n,s;
    s=S/2;
    n=0;

    //Верхня частина
    for(int l=0;l<s;l++){
        for(int r=n;r<S-n;r++){
            array[l][r]=Ar[l][r];
        }
        n++;
    }
    //Нижня частина
    n=0;
    for(int l=S-1;l>=S-s;l--){
        for(int r=n;r<S-n;r++){
            array[l][r]=Ar[l][r];
        }
        n++;
    }


    //заміна 1
    n=0;
    for(int l=0;l<s;l++){
        for(int r=n;r<S-n;r++){
            Ar[S-1-l][r]=array[l][r];
        }
        n++;
    }
    //заміна 2
    n=0;
    for(int l=S-1;l>=S-s;l--){
        for(int r=n;r<S-n;r++){
            Ar[S-l-1][r]=array[l][r];
        }
        n++;
    }



    //вивід матриці
    cout<<endl<<"Матриця після обробки"<<endl;
    for (int l = 0; l < S; l++) {
        for (int r = 0; r < S; r++) {
            cout <<Ar[l][r]<<"\t";
        }

        cout<<endl;
    }
    }





int lab_6() {
    system("chcp 65001");


    cout << "LAB_6 " << "Варіант 9 Дробишев Влад ""\n""\n";
    cout << "\n""Ця програма заповнить матрицю""\n""від лівого нижнього кута по діагоналі." << endl;
    cout << "\n""____Початок____" << endl << endl;


    turn:
    cout<<"Уведіть розмірність матриці"<<endl;
    int S;
    cin>>S;
    cout<<endl;

    if(S>0){
        fill(S);
    }
    else{
        cout<<"Ви ввели невірне значення, повторіть спробу"<<endl;
        goto turn;    }



    //технічна частина
    turn1:
    cout << "\n" "\n" "Щоб повторити програму-введіть 1"<<endl;
    cout <<"Щоб закінчити програму-введіть 0"<<endl<<endl;
    int p;
    cin >> p;
    switch (p) {
        case 0:
            cout << "Кінець програми";
            break;

        case 1:
            goto turn;


        default:
            cout<<"Помилка, ви ввели неправильне значення";
            goto turn1;

    }





}
