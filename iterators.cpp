// iterator is like pointer
// iterator points to the cont
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {12,
    //                  23,
    //                  34,
    //                  45,
    //                  56,
    //                  67,
    //                  78};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // // begin() function is used to point the 1st element in the vector
    // vector<int>::iterator it = v.begin();
    // // cout << (*(it + 1)) << endl;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // iterator used in vector of pair
    // vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {3, 4}};
    // vector<pair<int, int>>::iterator it;
    // for (it = vp.begin(); it != vp.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // // another syntax of pointer
    // for (it = vp.begin(); it != vp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // range base loop
    // vector<int> v = {12, 23, 34, 45, 56, 67};

    // for (int &val : v)
    // {
    //     val++;
    // }
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // range base loop in vector of pair
    // vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    // for (pair<int, int> &val : v_p)
    // {
    //     cout << val.first << " " << val.second << endl;
    // }

    // another option to write the iterator due to auto keyword
    // vector<int> v = {12,
    //                  23,
    //                  34,
    //                  45,
    //                  56,
    //                  67,
    //                  78};
    // // vector<int>::iterator it;
    // // it is like var datag++ -o main main.cpp -std=c++17 && ./main type, it anaylize the data type

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    for (auto &val : v_p)
    {
        cout << val.first << " " << val.second << endl;
    }
}
