#include "nine.h"
#include <iostream>
#include <conio.h>
using namespace std;

nine::nine()
{
    for (int i = 1; i <= 6; i++)
    {
        if (i < 4) {
            cout << "yes ";
        }

        else {
            cout << i << " ";
        }
    }
}

nine::~nine()
{
    //dtor
}
