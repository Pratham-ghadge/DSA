#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    cout << "Pairs Operation" << endl;
    pair<int, int> p = {2, 3};
    cout << p.first << "  " << p.second << endl;
    pair<int, pair<int, int>> pairs = {1, {3, 4}};
    cout << pairs.first << " " << pairs.second.first << " " << pairs.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 2}, {3, 3}, {4, 4}};
    cout << "Array is :" << arr[1].first << endl;
}

void explianvector()
{
    cout << "vector Operation" << endl;
    // defind vector
    vector<int> v;
    // insert in vector
    v.push_back(5);
    v.emplace_back(9);
    cout << v[1] << endl;
    // delete operation
    v.pop_back();

    // pair of vector
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(1, 4);
    cout << vp[0].first << " " << vp[1].second << endl;

    // iterator
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << v1.back() << endl;
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v1)
    {
        cout << it << " ";
    }

    cout << v1.size() << endl;
}

void explainlist()
{
    list<int> ls;
    ls.push_back(10);
    ls.push_front(5);
    ls.push_front(11);
    ls.push_back(33);
    ls.pop_front();

    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{

    explainpair();
    explianvector();
    explainlist();
    return 0;
}