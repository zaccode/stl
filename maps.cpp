#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m) // O(nlogn)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

void printunorder(unordered_map<int, int> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m) // O(nlogn)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    // map<int, string> m;
    // m[1] = "abc";
    // m[2] = "def";
    // m[3] = "ghi";
    // m.insert({4, "jkl"});
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // for (auto &pr : m)
    // {
    //     cout << pr.first << " " << pr.second << endl;
    // }

    // map<int, string> m;
    // m[1] = "abc"; // O(log(n))
    // m[2] = "def";
    // m[3] = "ghi";
    // m.insert({4, "jkl"});
    // // print(m);
    // // find() it return the searchable key in map and return the iterator type data
    // auto it = m.find(3); // O(log(n))
    // // if the value not found in find() method ,it returns end+1 of the map
    // if (it == m.end())
    // {
    //     cout << "No Value";
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // m.erase(3); // O(log(n)) used to remove element
    // m.clear();
    // print(m);

    //**************Unordered_map**********
    // map is used to maintain the data in order
    //     unordered_map is used when the data order is not maintain
    // unordered_map<int, string> m;

    // m[1] = "abc"; // O(1)
    // m[5] = "cdc";
    // m[3] = "acd";
    // m[6] = "acd";
    // m[5] = "cde";
    // auto it = m.find(7); // O(1)
    // if (it != m.end())
    // {
    //     m.erase(it); // log(1)
    // }

    // printunorder(m);

    unordered_map<int, int> np;

    np[1] = 12; // O(1)
    np[5] = 11;
    np[3] = 43;
    np[6] = 43;
    np[5] = 32;
    // auto it = m.find(7); // O(1)
    // if (it != m.end())
    // {
    //     m.erase(it); // log(1)
    // }

    printunorder(np);
}