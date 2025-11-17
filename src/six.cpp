#include "six.h"
#include <iostream>
#include <conio.h>
using namespace std;

six::six()
{
    int n;
    cout << "masukkan angka: ";
    cin >> n;
    
    for (int i = 10; i >= n; i--)
    {
        cout << i << endl;
    }
}

six::~six()
{
    //dtor
}
