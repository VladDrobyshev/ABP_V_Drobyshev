#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "LAB_1 " << "V_9 Drobyshev Vlad ""\n""\n";
    cout << "Enter 1 to start""\n""Enter 0 to exit""\n";
    cout << "Your choice=";
    int a;
    cin >> a;


    switch (a) {
        default:
            cout << "Error, you entered an invalid value""\n""Please try again";
            break;


        case 0:
            cout << "Exit the program...";
            break;

        case 1:
            cout << "\n""This program enters the coordinates ""\n""of a point (x, y) and determines whether" << endl;
            cout << "the point falls within the shaded area in the figure." << endl;
            cout << "\n""____Start____" << endl;
            double x, y, l;

        turn:

            cout << "Enter _x_ and _y_=" << endl;
            cin >> x;
            cin >> y;
            l = x * x + y * y;


            if ((x >= 0 && y >= 0) || (x <= 0 && y >= 0) || (x >= 0 && y <= 0)) {
                if (l <= 1) {
                    cout << "Yes, the point belongs to the figure";
                } else {
                    cout << "No, the point does not belong to the shape";
                }

            } else {
                cout << "No, the point does not belong to the shape";
            }


        turn1:
            cout << "\n" "\n" "To repeat the program, press 1" << endl;
            cout << "To end the program, press 0" << endl;
            int p;
            cin >> p;
            switch (p) {
                case 0:
                    cout << "END";
                    break;

                case 1:
                    goto turn;

                default:
                    cout << "Error, you entered an invalid value";
                    goto turn1;

            }
    }
}