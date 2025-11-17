#include "ten.h"
#include <iostream>
#include <conio.h>
using namespace std;

ten::ten()
{
    int i = 0;
    do {
        if (i % 2 == 0) {
            cout << " yes ";
        } else {
            cout << i;
        }
        i++;
    } while (i <= 8);
}

ten::~ten()
{
    //dtor
}
