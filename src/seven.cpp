#include "seven.h"
#include <iostream>
#include <conio.h>
using namespace std;

seven::seven()
{
    for (int i = 1; i <= 7; i++)
    {
        cout << i * i << endl;
    }
}

seven::~seven()
{
    //dtor
}
