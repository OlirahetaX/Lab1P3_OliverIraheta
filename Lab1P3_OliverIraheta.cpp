// Lab1P3_OliverIraheta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int i;
    do {
        cout << "------------ Lab1P3_Oliver_Iraheta ----------------" << endl << "0. Salir      1. Error numerico       2. Division en 2 entradas\n" ;
        cin >> i;
        if (i == 1) {
            int n;
            double x1, s1=0.0, e1;
            float x2, s2=0.0f, e2;
            long double x3, s3=0.0, e3;
         
            cout << "Ingrese valor N -> ";
            cin >> n;

            x1 = 1.0 / n;
            x2 = 1.0 / n;
            x3 = 1.0 / n;

            for (int i = 0; i < n; i++) {
                s1 += x1;
                s2 += x2;
                s3 += x3;
            }

            e1 = 1 - s1;
            e2 = 1 - s2;
            e3 = 1 - s3;
            
            if (e1 < 0) {
                e1 *= -1;
            }if (e2 < 0) {
                e2 *= -1;
            }if (e3 < 0) {
                e3 *= -1;
            }
            cout << "Usando el double: \n";
            cout << "E = " << e1 << endl;
            cout << "Usando el float: \n";
            cout << "E = " << e2 << endl;
            cout << "Usando el long double: \n";
            cout << "E = " << e3 << endl;

        } else if (i == 2) {
            int a, b, p,m=0;
            cout << "Ingrese valor P -> ";
            cin >> p;
            cout << "Ingrese valor A -> ";
            cin >> a;
            cout << "Ingrese valor B -> ";
            cin >> b;
            for (int i = 0; i < p; i++) {
                m += a / b;
                cout << m;
                b--;
            }
            cout << "M =" << m;
        }
    } while (i != 0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
