#include <bits/stdc++.h>
using namespace std;
// void printvec(vector<pair<int, int>> &v)
// {
//     cout << "size " << v.size() << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     cout << endl;
// }

void printvec(vector<int> &v)
{
    cout << "size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // 1.Syntax for pair vector
    //  vector<pair<int, int>> v = {{1, 2},
    //                              {2, 3},
    //                              {4, 5}};
    //  printvec(v);

    // 2.input the pair vector
    // vector<pair<int, int>> v;
    // printvec(v);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     v.push_back({x, y});
    // }
    // printvec(v);

    // declaring the vector of array
    // int N;
    // cin >> N;
    // vector<int> v[N];
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printvec(v[i]);
    // }

    // declare vector of vector (nested vector)
    // int N;
    // cin >> N;
    // vector<vector<int>> v;
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> temp;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     // vector of vector
    //     v.push_back(temp);
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printvec(v[i]);
    // }
    // cout << v[0][1];

    // another method to declare vector of vector
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        // vector of vector
    }
    for (int i = 0; i < N; i++)
    {
        printvec(v[i]);
    }
    cout << v[0][1];
}
