#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    queue<int> q;

    for (int i = 1; i <= N; i++) // queue로 값 넣어줌
    {
        q.push(i);
    }

    cout << "<";

    while (1)
    {
        for (int i = 1; i < K; i++) // 3번째 되었을 때 출력하니까 두번은 확인하고 다시 뒤로 넣어줌
        {
            q.push(q.front()); // 맨 앞 값 확인 후 뒤로 넣어줌
            q.pop();           // 넣어준 후에 맨 앞 값 제거
        }
        cout << q.front(); // 3번째 되었을때 출력
        q.pop();           // 맨 앞 제거

        if (q.empty() == 1)
        {
            cout << ">";
            break;
        }
        cout << ", ";
    }
}

//처음에 배열로 풀었더니 시간 초과, 링크드리스트도 고려하였지만 queue가 가장 적당할 것이라 판단
//헷갈렸던 건 K보다 작아지면 어떻게 몇 번째를 판단할 것인가 고민했지만 고민할 거리가 아니였음 확인하고 계속 값을 넣어주기 때문