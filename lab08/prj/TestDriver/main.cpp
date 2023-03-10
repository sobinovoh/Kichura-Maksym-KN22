#include <iostream>
#include <main.h>
using namespace std;

int main()
{ setlocale(LC_ALL, "ukr");
    cout << "Кiчура Максим (C) | Академ-група:КН-22 | ЦНТУ  " << endl;
    int x,z;
    cout << "Введiть значення x та z" << endl;
    cin>> x;
    cin>> z;
    cout << s_calculation(x, z) << endl;
    return 0;
}

