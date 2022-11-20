#include <iostream>

using namespace std;


struct pack{
    char name[20];
    char company[20];
    float number;
    float price;

};


int lab_7(){
    system("chcp 65001");
    pack n[3];
    cout << "LAB_7 " << "Варіант 9 Дробишев Влад ""\n""\n";
    cout << "\n""____Початок____" << endl << endl;
    for (int i = 1; i<4; i++){
        cout<<i<<".Введіть: найменування,виробника, кількість пакетів, вартість >";;
        cin>>n[i].name>>n[i].company>>n[i].number>>n[i].price;

    }


    cout<<"Початкова таблиця = "<<endl;
    cout<<"|----------------------------------------------------|\n";
    cout<<"|Офісні пакети                                       |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"| Найменування   | Виробник | Кількість  | Вартість  |\n";
    cout<<"|                |          | пакетів    |    ($)    |\n";
    cout<<"|----------------|----------|------------|-----------|\n";
    cout<<"|"<<n[1].name<<"          |"<<n[1].company<<" |"<<n[1].number<<"           |"<<n[1].price<<"        |\n";
    cout<<"|"<<n[2].name<<"       |"<<n[2].company<<"     |"<<n[2].number<<"           |"<<n[2].price<<"       |\n";
    cout<<"|"<<n[3].name<<"      |"<<n[3].company<<"       |"<<n[3].number<<"           |"<<n[3].price<<"          |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"|Примітка: можна безкоштовно отримати                |\n";
    cout<<"|продукт StarOffice через Internet                   |\n";
    cout<<"|----------------------------------------------------|\n";


    cout<<endl<<endl<<"Таблиця відсортована за параметром _ВАРТІСТЬ_ = "<<endl;
    cout<<"|----------------------------------------------------|\n";
    cout<<"|Офісні пакети                                       |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"| Найменування   | Виробник | Кількість  | Вартість  |\n";
    cout<<"|                |          | пакетів    |    ($)    |\n";
    cout<<"|----------------|----------|------------|-----------|\n";
    //сортування за вартістю
    int max,nmax;
    n[0].price=0;
    int a[4] = { 0,1,2,3 };

    max=0;
    nmax=0;
    for(int i=1;i<4;i++){
        if(n[i].price>max){
            max=n[i].price;
            nmax=i;
        }
    }

    a[nmax]=0;

    cout<<"|"<<n[nmax].name<<"       |"<<n[nmax].company<<"     |"<<n[nmax].number<<"           |"<<n[nmax].price<<"       |\n";
    max=0;
    nmax=0;
    for(int i=1;i<4;i++){
        if(n[a[i]].price>max){
            max=n[i].price;
            nmax=i;
        }
    }

    cout<<"|"<<n[nmax].name<<"          |"<<n[nmax].company<<" |"<<n[nmax].number<<"           |"<<n[nmax].price<<"        |\n";

    max=0;
    a[nmax]=0;
    for(int i=1;i<4;i++){
        if(n[a[i]].price>max){
            max=n[i].price;
            nmax=i;
        }
    }
    cout<<"|"<<n[nmax].name<<"       |"<<n[nmax].company<<"         |"<<n[nmax].number<<"           |"<<n[nmax].price<<"          |\n";





    cout<<"|----------------------------------------------------|\n";
    cout<<"|Примітка: можна безкоштовно отримати                |\n";
    cout<<"|продукт StarOffice через Internet                   |\n";
    cout<<"|----------------------------------------------------|\n";
/*
Office Microsoft 4 870
SmartSute Lotus 5 1020
StarOffice Sun 4 9
 */



    return 0;

}


