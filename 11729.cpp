#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    hanoi(1, 2, 3, n);
}

void hanoi(int start, int middle, int end, int n)
{
    if (n == 1)
    {
        cout << start << " " << end << "\n";
    }
    else
    {
        hanoi(start, end, middle, n - 1);    // 2로 예를 들면 이 구문으로 인해 1 2 출력
        cout << start << " " << end << "\n"; // 1 3 출력
        hanoi(middle, start, end, n - 1);    // 2 3 출력
    }
}
// 제일 큰 원반이 오기 전까지 모든 원반은 1->2칸으로 가있어야한다.
// 제일 큰 원반만 남으면 제일 큰 원반을 1->3칸으로 옮긴다.
// 2번칸에 있던 모든 남은 원반을 2->3칸으로 옮긴다.
// 이것이 하노이 룰
