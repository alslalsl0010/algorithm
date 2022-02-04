#include <iostream>
using namespace std;

void push(int);
void pop();
void front();
void back();
int empty();
void size();

int arr[1000];
int front_state = 0;
int rear_state = 0;

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    front();
    back();
    empty();
    size();
}

void push(int ele) // 뒤로 값하나 집어넣기
{
    arr[rear_state] = ele;
    rear_state++;
}
void pop() // 앞으로 값하나 빼기
{
    arr[front_state] = 0;
    front_state++;
}
void front() // 첫번째 수 출력
{
    cout << arr[front_state] << '\n';
}
void back() // 맨 뒤 수 출력
{
    cout << arr[rear_state - 1] << '\n';
}
int empty()
{
    for (int i = front_state; i < rear_state; i++)
    {
        if (arr[i] != 0)
        {
            cout << "It's not empty" << '\n';
            return 0;
        }
    }
    cout << "It's empty" << '\n';
    return 1;
}
void size()
{
    cout << rear_state - front_state << '\n';
}

// 첫번째 수 및 맨 뒤 수 출력시 arr안 값을 출력하는 것을 처음에 실수,
// empty 함수는 void 형으로 하나 int형으로 하나 내가 짜주기 나름이다.
// 맨뒤 수 출력시 rear_state는 다음 값이 입력되는 곳을 가르키고 있으므로 -1을 해주어야 맨 뒤수 출력이 가능하다.
