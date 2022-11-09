#include <windows.h>
using namespace std;

int lab_4() {
    system("chcp 65001");
    cout << "LAB_4 " << "Варіант 9 Дробишев Влад ""\n""\n";


    cout << "\n""Ця програма заповнить матрицю""\n""від лівого нижнього кута по діагоналі." << endl;

    cout << "\n""____Початок____" << endl << endl;


    int i, j, n, k, array[9][9];
    n=1;

    for (k=0;k<9;k++) {
        i=8;
        for (j=k;j>=0;j--) {
            array[i][j]=n++;
            i--;
        }
    }
    for (i=7;i>=0;i--) {
        j=8;
        for (k=i;k>=0;j--) {
            array[k][j]=n++;
            k--;


        }
    }








    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cout << array[i][j]<<"\t";
        }

        cout<<endl;

    }


        cout << "Кінець";


}