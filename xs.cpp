#include <iostream>
using namespace std;
void solve()
{
    string s, f;
    f = "aeiou";
    cin >> s;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < f.size(); j++)
        {
            if (s[i] == f[j])
            {
                c++;
            }
        }
    }

    if (c <= 5)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                c = 5;
                break;
            }
        }
    }

    if (c >= 5)
    {
        cout << "Happy" << endl;
    }
    else
    {
        cout << "sad" << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}
