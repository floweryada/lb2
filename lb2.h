#ifndef LB2_H
#define LB2_H

struct CoordinatesList
{
    int coordinateX;
    int coordinateY;
    int coordinateZ;
};

void myMenu(struct CoordinatesList *List, int n);
void enterVectors (struct CoordinatesList *List, int Coordinates, const int quanOfVectors);

void sumVectors (struct CoordinatesList *List, const int quanOfVectors);
void subctractVectors (struct CoordinatesList *List, const int quanOfVectors);
void multiplyVectorByScalar (struct CoordinatesList *List, const int quanOfVectors, int scalar);
void scalarProductOfVectors (struct CoordinatesList *List, const int quanOfVectors);
void vectorProductOfVectors (struct CoordinatesList *List, const int quanOfVectors);

#endif // LB2_H
