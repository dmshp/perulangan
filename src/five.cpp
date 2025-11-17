#include "five.h"
#include <iostream>
#include <conio.h>
using namespace std;

five::five()
{
    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }
}

five::~five()
{
    //dtor
}
