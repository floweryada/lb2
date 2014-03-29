#include "lb2.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>

using namespace std;

void enterVectors (struct CoordinatesList *List, int Coordinates, const int quanOfVectors)

{
    cout << "Enter Coordinates of two Vectors: \n";
    cin.ignore(1,'\n');
        for(int i = Coordinates; i < quanOfVectors; ++i)
    {
        cout << "X Coordinate Of Vector: ";
        cin >> List[i].coordinateX;

        cout << "Y Coordinate Of Vector: ";
        cin >> List[i].coordinateY;

        cout << "Z Coordinate Of Vector: ";
        cin >> List[i].coordinateZ;
        cout << endl;
    }
}

void sumVectors (struct CoordinatesList *List, const int quanOfVectors)
{
    int SumX = 0, SumY = 0, SumZ = 0;
        for(int i = 0; i < quanOfVectors; ++i)
        {
            SumX += List[i].coordinateX;
            SumY += List[i].coordinateY;
            SumZ += List[i].coordinateZ;
        }
    cout << "Coordinates of new Vector: " << SumX << " " << SumY << " " << SumZ << endl;
}

void subctractVectors (struct CoordinatesList *List, const int quanOfVectors)
{
int MinusX = List[0].coordinateX, MinusY = List[0].coordinateY, MinusZ = List[0].coordinateZ;
        for(int i = 1; i < quanOfVectors; ++i)
        {
            MinusX -= List[i].coordinateX;
            MinusY -= List[i].coordinateY;
            MinusZ -= List[i].coordinateZ;
        }
    cout << "Coordinates of new Vector: " << MinusX << " " << MinusY << " " << MinusZ << endl;
}

void multiplyVectorByScalar (struct CoordinatesList *List, const int quanOfVectors, int scalar)
{
    int newX1 = scalar*List[0].coordinateX,
    newY1 = scalar*List[0].coordinateY,
    newZ1 = scalar*List[0].coordinateZ,
    newX2 = scalar*List[1].coordinateX,
    newY2 = scalar*List[1].coordinateY,
    newZ2 = scalar*List[1].coordinateZ;
    cout << "Coordinates of new Vectors: \n" << "The First: ";
    cout << newX1 << " " << newY1 << " " << newZ1 << "\n";
    cout << "The Second: ";
    cout << newX2 << " " << newY2 << " " << newZ2 << "\n";
}

void scalarProductOfVectors (struct CoordinatesList *List, const int quanOfVectors)
{
    cout << "scalar product of two Vectors: ";
    cout << List[0].coordinateX*List[1].coordinateX + List[0].coordinateY*List[1].coordinateY + List[0].coordinateZ*List[1].coordinateZ;
}

void vectorProductOfVectors (struct CoordinatesList *List, const int quanOfVectors)
{
    int newX = List[0].coordinateY*List[1].coordinateZ - List[1].coordinateY*List[0].coordinateZ;
    int newY = List[0].coordinateX*List[1].coordinateZ - List[1].coordinateX*List[0].coordinateZ;
    int newZ = List[0].coordinateX*List[1].coordinateY - List[1].coordinateX*List[0].coordinateY;
    cout << "coordinates of new vector: ";
    cout << newX << " " << newY << " " << newZ;
}
