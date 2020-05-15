// https://codelearn.io/learning/cau-truc-du-lieu-va-giai-thuat/788338
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        int j = 1;
        while (s[i] == s[i + 1])
        {
            i++;
            j++;
        }
        cout << s[i] << j;
    }
    return 0;
}