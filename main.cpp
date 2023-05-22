#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int c[size]{0};
    int sum, avg;
    for (int i = 0; i <= size; i++)
    {
        cout << "Enter the value of c[" << i << "]: " << endl;
        cin >> c[i];
        sum += c[i];
    }
    avg = sum / size;

    cout << "AVG: " << avg << endl;

    return 0;
}