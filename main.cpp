#include <iostream>
#include <fstream>
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


