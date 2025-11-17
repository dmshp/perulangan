#include "two.h"
#include <iostream>
#include <conio.h>
using namespace std;

two::two()
{
    int n;
    cout << "Masukkan angka: "; 
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Hello World!"<< endl;
    }

}

two::~two()
{
    //dtor
}
