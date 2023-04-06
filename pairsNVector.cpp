#include <bits/stdc++.h>
using namespace std;
// call by value ,copy of vector passes timecomplexity O(n)
//  void printvec(vector<int> v)
//  {
//      cout << "size: " << v.size() << endl;
//      for (int i = 0; i < v.size(); ++i)
//      {
//          // v.size() -> O(1)
//          cout << v[i] << " ";
//      }
// v.push_back(3);

//      cout << endl;
//  }

// call by reference ,reference of vector passes timecomplexity O(1)
void printvec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    v.push_back(3);
    cout << endl;
}
int main()
{
    // 1.Syntax for make_pair function
    //  pair<int, string> p;
    //  p = make_pair(2, "abc");
    //  cout << p.first << " " << p.second << endl;

    // 2.Syntax for making pair another method
    //  pair<int, string> p;
    //  p = {2, "abc"};
    //  cout << p.first << " " << p.second << endl;

    // 3.for reference data
    //  pair<int, string> p;

    // p = {2, "abc"};
    // pair<int, string> &p1 = p;
    // p1.first = 3;

    // cout << p.first << " " << p.second << endl;

    // array in pair
    //  int a[] = {1, 2, 3};
    //  int b[] = {2, 3, 4};

    // pair<int, int> p_array[3];
    // p_array[0] = {1, 2};
    // p_array[1] = {2, 3};
    // p_array[2] = {3, 4};

    // swap(p_array[0], p_array[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_array[i].first << " " << p_array[i].second << endl;
    // }

    // pair<int, string> p;
    // cin >> p.first;
    // cout << p.first;

    //*************vector***********
    // vector is similar of arrays,array is a continues memory block,vector also continous memory block
    // in array they are not changable but vector is changable
    // Syntax: vector<int>v;

    // example:-
    //  vector<int> v;
    //  int n;
    //  cin >> n;
    //  for (int i = 0; i < n; ++i)
    //  {
    //      int x;
    //      cin >> x;
    //      v.push_back(x); // this function is used to join the value at the end in vector
    //  }
    //  printvec(v);

    // declare a vector with size and perform operation
    // vector<int> v(5);
    // printvec(v);
    // v.push_back(7);
    // printvec(v);

    // v.pop_back(); // it removes the last element in vector
    // printvec(v);
    // vector<int> v2 = v; // O(n)
    // printvec(v2);
    // v2.push_back(9);
    // printvec(v2);
    // printvec(v);

    vector<int> x = {1, 2, 3, 4, 5, 6};
    int max = *max_element(x.begin(), x.end());
    cout << max;

    return 0;
}
