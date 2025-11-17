#include "four.h"
#include <iostream>
#include <conio.h>
using namespace std;

four::four()
{
    int n;
    
    cout << "masukkan angka: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

four::~four()
{
    //dtor
}
