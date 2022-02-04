#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    cin >> i;
    cout << factorial(i);
}

int factorial(int i)
{
    if (i == 0)
    {
        return 1;
    }
    return (i * factorial(i - 1));
}
//cin.tie(NULL), ios::sync_with_stdio(false) 꼭 잊지말기