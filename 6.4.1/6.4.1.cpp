#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* P, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        P[i] = Low + rand() % (High - Low + 1);
}

void Print(int* P, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << P[i];
    cout << endl;
}


int Count(int* P, const int size)
{
    int(a);
    int(b);
    cout << "a = ";cin >> a;
    cout << "b = ";cin >> b;
    int j = 0;
    for (int i = 0; i < size; i++)
        if ((P[i] > a) || (P[i] < b))
            j++;
    return j;
}
int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int P[n];
    int j;

    int Low = -10;
    int High = 14;



    Create(P, n, Low, High);
    cout << "Original masive" << endl;
    Print(P, n);
    cout << endl;

    cout << "Calculating count" << endl;
    cout << "j = " << Count(P, n) << endl;
    cout << endl;



    system("pause");
    return 0;
}
