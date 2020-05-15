// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/780330
// Dao nguoc chuoi string

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string st;
    getline(cin, st);

    for(int i = 0; i < st.length(); i++)
    {
        s.push(st[i]);
    }

    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}