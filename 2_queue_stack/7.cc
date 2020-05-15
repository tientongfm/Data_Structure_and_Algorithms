// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/789543
#include<iostream>
#include<queue>
using namespace std;

const int MAX = 10001;

int main()
{
    int n, k, a[MAX], b[MAX];
    cin >> n;
    queue<int> q;
    for(int i = 0; i < MAX;i++)
    {
        b[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(!b[a[i]])
        {
            if(q.size() < k)
            {
                b[a[i]] = 1;
                q.push(a[i]);
            }
            else
            {
                b[a[i]] = 1;
                b[q.front()] = 0;
                q.push(a[i]);
                q.pop();
            }
        }
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}