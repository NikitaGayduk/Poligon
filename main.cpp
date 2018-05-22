#include <iostream>
#include <string>
#include "length.h"

using namespace std;

int main()
{

    Length L1(20,30);
    Length L2(10,100);
    L1.showData();
    L2.showData();
    Length L3 = L1 + L2;
    L3.showData();
}
