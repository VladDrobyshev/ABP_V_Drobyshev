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
    while (n <= 9 || (fabs(term) < eps && term != 0)) {
        term = (k1 * ((n + 1) / (pow(2, n - 1))));
        sum = sum + term;
        n++;

    }
    cout << "sum=" <<sum<<endl<<"///////////"<<endl;

    cout << "END";
}

