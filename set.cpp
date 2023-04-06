#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
}
void printmultiset(multiset<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
}
int main()
{
    // set store only unique element
    //  set print the data in sorted order
    // set<string> s;
    // s.insert("abc"); // log(n)
    // s.insert("zsdf");
    // s.insert("bcd");
    // auto it = s.find("abc"); // log(n)
    // // if (it != s.end())
    // // {
    // //     // cout << (*it);
    // //     // erasing the data
    // //     s.erase(it); //passing iterator in erase function
    // // }

    // s.erase("abc"); // passing erase function direct value
    // print(s);

    // set<string> s;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string str;
    //     cin >> str;
    //     s.insert(str);
    // }

    // for (auto value : s)
    // {
    //     cout << value << endl;
    // }

    // unordered_set<string> s;
    // s.insert("abc"); // O(1)
    // s.insert("zsdf");
    // s.insert("bcd");

    // auto it = s.find("abc"); // O(1)
    // if (it != s.end())
    // {
    //     // cout << (*it);
    //     // erasing the data
    //     s.erase(it); // passing iterator in erase function
    // }

    // use multiset while using priority queue
    // it store repeated element
    multiset<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("zsdf");
    s.insert("bcd");

    auto it = s.find("abc"); // O(log(n))
    if (it != s.end())
    {
        s.erase(it);
    }
    printmultiset(s);

    return 0;
}