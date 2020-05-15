// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/789415
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    if(n < 10)
    {
        for(int i = 2; i <= n; i++)
        {
            if(isPrime(i)) {
                q.push(i);
            }
        }
    } else {
        for(int i = 2; i < 10; i++)
        {
            if(isPrime(i)) {
                q.push(i);
            }
        }
    }

    while(!q.empty())
    {
        for(int i = 1; i <=9; i++)
        {
            int k = q.front() * 10 + i;
            if(k <= n && isPrime(k))
            {
                q.push(k);
            }
        }
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}