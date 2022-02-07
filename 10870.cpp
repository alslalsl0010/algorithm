#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << fibonacci(n);
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
// 피보나치 함수안에 n을 넣지않는 실수를 하지말자
//cin.tie, ios 잊지말기