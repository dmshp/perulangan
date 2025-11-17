#include <iostream>
#include <conio.h>
#include "eight.h"

using namespace std;

eight::eight()
{
    int n = 10;
    int i = 1;
    while(i <= n) {
        if (i % 2 == 0) {
            cout << i * 2 << endl;
        } else {
            cout << i * i << endl;
        }
        i++;
    }

}

eight::~eight()
{
    //dtor
}
