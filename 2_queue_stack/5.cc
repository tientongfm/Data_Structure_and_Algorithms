// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/789080
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    int n, tmp, k;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        q.push(tmp);
    }
    cin >> k;
    // Xoay k lan
    for(int i = 0; i < k; i++)
    {
        int firstNum = q.front();
        q.pop();
        q.push(firstNum);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}