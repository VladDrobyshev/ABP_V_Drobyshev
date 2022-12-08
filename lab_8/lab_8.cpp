#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

//стек
stack<string> name;
stack<string> company;
stack<float> number;
stack<float> price;

int lab_8(){
    system("chcp 65001");
    cout << "LAB_8 " << "Варіант 9 Дробишев Влад ""\n""\n";
    cout << "\n""____Початок____" << endl << endl;
    //структура
    struct{
        string n;
        string c;
        float num;
        float p;
    }n[3];

    for (int i=0;i<3;i++){
        cout<<1+i<<".Введіть: найменування,виробника, кількість пакетів, вартість >";
        //ввід
        cin>>n[i].n>>n[i].c>>n[i].num>>n[i].p;
        //передача в стек
        name.push(n[i].n);
        company.push(n[i].c);
        number.push(n[i].num);
        price.push(n[i].p);
    }
    cout<<name.top();
    //таблиця
    cout<<endl<<"|----------------------------------------------------|\n";
    cout<<"|Офісні пакети                                       |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"| Найменування   | Виробник | Кількість  | Вартість  |\n";
    cout<<"|                |          | пакетів    |    ($)    |\n";
    cout<<"|----------------|----------|------------|-----------|\n";
    for (int i=0;i<3;i++){
        //вивід
        cout<<"|"<<setw(16)<<name.top()<<"|"<<setw(10)<<company.top()<<"|"<<setw(12)
            <<number.top()<<"|"<<setw(11)<<price.top()<<"|"<<'\n';
        //видалення елементу
        name.pop();
        company.pop();
        number.pop();
        price.pop();
    }
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

