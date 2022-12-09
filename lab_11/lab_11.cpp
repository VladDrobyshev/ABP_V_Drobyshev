#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
using namespace std;


//створення класу
class A{
public:
    string P;
    string I;
    string B;
    float birth;
    float mark;

    void get(string x,string x1,string x2, int y, float z);
    void show();
    void change(float mark_n);
    void change_PIB(string x,string x1,string x2);
    void show_birth();
}a[3];
void A::get(string x,string x1,string x2, int y, float z){
    cout<<"Введіть Прізвище, Ім'я, По-батькові = ";
    cin>>x>>x1>>x2;
    cout<<endl<<"Введіть рік народження = ";
    cin>>y;
    cout<<endl<<"Введіть середній бал атестату = "<<endl;
    cin>>z;
    P=x;
    I=x1;
    B=x2;
    birth =y;
    mark=z;
}
void A::show(){
    cout<<"Прізвище, Ім'я, По-батькові = "<<P<<" "<<I<<" "<<B<<endl;
    cout<<"Рік народження  = "<<birth<<endl;
    cout<<"Середній бал атестату = "<<mark<<endl;
}
void A::change(float mark_n){
    cout<<"Введіть новий середній бал за атестат = ";
    cin>>mark_n;
    mark=mark_n;
}
void A::change_PIB(string k1,string k2,string k3){
    cout<<"Введіть нові данні ПІБ = ";
    cin>>k1>>k2>>k3;
    P=k1;
    I=k2;
    B=k3;
}
void A::show_birth() {
    cout<<"Рік народження = "<<birth;
}
class Student : public A{
public:
    int numb;
    void show_numb(int numb){
        cout<<"Прізвище, Ім'я, По-батькові = "<<P<<" "<<I<<" "<<B<<endl;
        cout<<"Рік народження  = "<<birth<<endl;
        cout<<"Середній бал атестату = "<<mark<<endl;
        cout<<"Номер залікової книжки = "<<numb<<endl;
    }
}s[3];

int lab_11() {
    system("chcp 65001");
    cout << "LAB_11 " << "Варіант 9 Дробишев Влад ""\n""\n";
    cout << "\n""____Початок____" << endl << endl;
    string x,x1,x2;
    int y;
    float z;
    for(int i=0;i<3;i++){
        cout<<i+1<<"___Данні___ "<<endl;
        a[i].get(x,x1,x2,y,z);
    }

    cout<<endl<<"___Виведення___"<<endl<<endl;
    for(int i=0;i<3;i++){
        a[i].show();
        cout<<endl;
    }

    cout<<endl<<"___Заміна Прізвище, Ім'я, По-батькові___"<<endl<<endl;
    string k1,k2,k3;
    a[1].change_PIB(k1,k2,k3);
    a[1].show();

    cout<<endl<<"___Похідний клас СТУДЕНТ___"<<endl;
    s[1].show_numb(888);


    return 0;

}