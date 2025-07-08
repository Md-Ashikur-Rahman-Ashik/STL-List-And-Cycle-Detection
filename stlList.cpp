#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> ourList(10, 8);
    // cout << ourList.size() << endl;
    // cout << *ourList.begin() << endl;
    // for (auto it = ourList.begin(); it != ourList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for (int value : ourList)
    // {
    //     cout << value << endl;
    // }

    list<int> firstList = {1, 2, 3, 4, 5};
    // list<int> secondList(firstList);

    // int integerArray[] = {10, 20, 30};
    vector<int> integerVector = {10, 20, 30};
    list<int> secondList(integerVector.begin(), integerVector.end());

    for (int value : secondList)
    {
        cout << value << endl;
    }

    return 0;
}