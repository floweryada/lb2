#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include "lb2.h"

using namespace std;

int main()
{
    const int n = 2;
    CoordinatesList *List = new CoordinatesList[n];
    myMenu( List, n);
    delete []List;
    return 0;
}

void myMenu(struct CoordinatesList *List, int n)
{
    const int quanOfVectors = 2;
    char enterNumber;
    int scalar;

    while(true)
    {
        system("cls");
        cout << "Hello!\n "<<endl;
        enterVectors (List, 0, quanOfVectors);

        cout << "If You want to: " << endl;
        cout << "   Exit, please, press <0>\n";
        cout << "   Sum two Vectors, please, press <1>\n";
        cout << "   Subtract two Vectors, please, press <2>\n";
        cout << "   Multiply Vector by scalar, please, press <3>\n";
        cout << "   Find scalar product of two Vectors, please, press <4>\n";
        cout << "   Find vector product of two Vectors, please, press <5>\n";

        cin >> enterNumber;

        if( enterNumber == '0')
        {
            system("cls");
            exit(0);
        }

        if( enterNumber == '1')
        {
            system("cls");
            sumVectors (List, quanOfVectors);
            system("pause");
        }
        if( enterNumber == '2')
        {
            system("cls");
            subctractVectors (List, quanOfVectors);
            system("pause");
        }
        if( enterNumber == '3')
        {
            system("cls");
            int scalar;
            cout << "Enter the scalar: ";
            cin >> scalar;
            multiplyVectorByScalar (List, quanOfVectors, scalar);
            cout << endl;
            system("pause");
        }
        if( enterNumber == '4')
        {
            system("cls");
            scalarProductOfVectors (List, quanOfVectors);
            cout << endl;
            system("pause");
        }
        if( enterNumber == '5')
        {
            system("cls");
            vectorProductOfVectors (List, quanOfVectors);
            cout << endl;
            system("pause");
        }
    }
    system("pause");
}
