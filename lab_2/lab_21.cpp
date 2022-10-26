#include <cmath>
#include <iostream>
using namespace std;

int lab_21() {
    cout << "LAB_2.1 " << "V_9 Drobyshev Vlad ""\n""\n";
    cout << "\n""The program calculates the sum ""\n""of members of the series with an accuracy of 0.000001" << endl;
    cout << "and the sum of the first 10 members of the series." << endl;
    cout << "\n""____Start____" << endl;
    long n;
    double term, sum;
    long k2 = 1;
    short k1 = pow(-1, n);
    const double eps = 0.000001;
    n = 0;
    sum = 0;

    turn:
    while (true) {
        term = (k1 * ((n + 1) / (pow(2, n - 1))));
        if(abs(term)<eps && term !=0){
            cout<<"sum="<<sum<<endl;
            break;
        }
        if(n==9){
            cout << "sum ten=" <<sum<<endl;


        }
        sum = sum + term;

        n++;



    }



    cout << "END";
}

