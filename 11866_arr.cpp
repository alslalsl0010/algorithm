#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, cnt; // N은 사람수, k는 k번째 사람을 순서대로 제거, cnt로 k번째 체크
    int a = 1;     //순열 모두 제거 되었는지 체크
    int k;

    cin >> N >> K;
    int arr[N];
    k = K; //나중에 k번째 수 바뀌지 않도록

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    cout << "<" << arr[K - 1] << ", ";
    arr[K - 1] = 0;

    while (1)
    {
        K++;
        if (K - 1 == N)
        {
            K = 1;
        }
        if (arr[K - 1] != 0)
        {
            cnt++;
        }
        if (cnt == k)
        {
            cnt = 0;
            cout << arr[K - 1];
            arr[K - 1] = 0;
            a++;
            if (a == N)
            {
                cout << ">";
                break;
            }
            else
            {
                cout << ", ";
            }
        }
    }
}