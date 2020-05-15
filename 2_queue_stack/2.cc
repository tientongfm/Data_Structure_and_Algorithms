// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/787604
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;

    while(n > 0)
    {
        s.push(n % 2);
        n = n / 2;
    }

    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}