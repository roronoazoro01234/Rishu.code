#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int m = n % 10;
        sum = sum + m * m * m;
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not a Armstrong number" << endl;
    }
    return 0;
}