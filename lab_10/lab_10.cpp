#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
using namespace std;


//створення класу
class product{
public:
    string name;
    string company;
    float number;
    float price;
    void set(string a, string b, float c, float d);
    void get( string a, string b, float c, float d);
    void show();
}n[3];
//функція set
void product::set(string a, string b, float c, float d){
    name = a;
    company = b;
    number = c;
    price = d;
}
//функція get
void product::get( string a, string b, float c, float d){
    a = name;
    b = company;
    c = number;
    d = price;
}
//функція виводу одного рядка
void product::show(){
    cout<<"|"<<setw(16)<<name<<"|"<<setw(10)<<company<<"|"<<setw(12)
        <<number<<"|"<<setw(11)<<price<<"|"<<'\n';
}
//функція виводу верхньої частини таблиці
void show_up(){
    cout<<"|----------------------------------------------------|\n";
    cout<<"|Офісні пакети                                       |\n";
    cout<<"|----------------------------------------------------|\n";
    cout<<"| Найменування   | Виробник | Кількість  | Вартість  |\n";
    cout<<"|                |          | пакетів    |    ($)    |\n";
    cout<<"|----------------|----------|------------|-----------|\n";
}
//функція виводу нижньої частини таблиці
void show_down(){
    cout<<"|----------------------------------------------------|\n";
    cout<<"|Примітка: можна безкоштовно отримати                |\n";
    cout<<"|продукт StarOffice через Internet                   |\n";
    cout<<"|----------------------------------------------------|\n";
}
//виведення рядка




int lab_10(){
    system("chcp 65001");
    cout << "LAB_10 " << "Варіант 9 Дробишев Влад ""\n""\n";
    cout << "\n""____Початок____" << endl << endl;
    string name,company;
    float number,price;

    for (int i=0;i<3;i++){
        cout<<1+i<<".Введіть: найменування,виробника, кількість пакетів, вартість >";
        cin>>name>>company>>number>>price;
        n[i].set(name,company,number,price);
    }
    show_up();
    n[0].show();
    n[1].show();
    n[2].show();
    show_down();
/*
Office Microsoft 4 870
SmartSute Lotus 5 1020
StarOffice Sun 4 9
 */
    return 0;

}


