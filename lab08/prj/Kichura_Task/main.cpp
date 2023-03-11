#include <iostream>
#include <clocale>
#include <main.h>

using namespace std;
void printInfo()
{
    cout << "Кiчура Максим (c) | Академ-група:КН-22 | ЦНТУ  " << endl;
}
int Task8_2_2(int a,int b)
{
    cout << "Введiть значення a та b" << endl;
    cin >> a;
    cin >> b;
    int c;
    if ((a + 7) < abs(b - 5))
         c = 1;
    else
        c = 0;
    return c ;
}
int Task8_2_3(int x, int z)
{
    cout << "Введiть значення x та z" << endl;
    cin >> x;
    cin >> z;
    cout << "В десятковiй системi числення x та z вiдповiдно:\t" << dec << x << "\t" << dec << z << endl;
    cout << "В шiстнадцятковiй системi числення x та z вiдповiдно:\t" << hex << x << "\t" << hex << z << endl;
    cout << "Результат виразу у функцiї  s_calculation(): " << fixed << s_calculation(x,z) << endl;
}
int main()
{
    setlocale(LC_ALL, "ukr");
    //8.2.1
    printInfo();
    int a,b;
    double x,z;
    //8.2.2
    cout << Task8_2_2(a,b) << endl;
    //8.2.3
    cout << Task8_2_3(x,z) << endl;
    return 0;
}
