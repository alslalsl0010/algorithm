#include <iostream>
using namespace std;

int star(int, int, int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y = 0;
    int n;
    cin >> n;
    for (int y = 0; y < n; y++)
    { // x축
        for (int x = 0; x < n; x++)
        { // y축
            star(x, y, n);
        }
        cout << '\n';
    }
}
int star(int x, int y, int n)
{
    if (n != 0 && (((x / n) % 3) == 1) && (((y / n) % 3) == 1))
    {
        cout << ' ';
        return 0;
    }
    else
    {
        if (n == 0)
        {
            cout << "*";
            return 0;
        }
        else
        {
            return star(x, y, n / 3);
        }
    }
}
//분할 정복으로 생각하고 3이모여서 9, 9가모여서 27
// 3x3의 빈곳을 찍을때는 %3을 해서 나머지 1이 규칙
// 9x9의 빈곳을 찍을때는 /3을 해서 몫이 1이 규칙
//둘을 한꺼번에 만족하게하려면 구바이구가 계산시 나머지가 1이 나오게해야한다.
//그래서 (((x / n) % 3) == 1) && (((y / n) % 3) == 1)
// 하지만 arithmetic exception 오류가 한번 떴었는데 n이 0이 들어올 수 있게 되어 0으로 나누게 되기 때문이다. 그래서 예외처리
// 잘 이해가 안갔던 문제
// 재귀문제는 반복적인 부분이 어디인지 꼭 생각하며 접근하자