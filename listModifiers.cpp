#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> firstList = {10, 40, 20, 40, 40, 30};
    // list<int> secondList = {100, 200};
    // vector<int> firstVector = {2, 3, 4};
    // // secondList = firstList;
    // secondList.assign(firstList.begin(), firstList.end());

    // firstList.push_back(40);
    // firstList.push_front(100);
    // firstList.pop_back();

    // cout << *next(firstList.begin(), 2) << endl;
    // firstList.insert(next(firstList.begin(), 2), firstVector.begin(), firstVector.end());
    // firstList.pop_front();
    // firstList.erase(next(firstList.begin(), 1));
    // replace(firstList.begin(), firstList.end(), 40, 100);
    // for (int value : firstList)
    // {
    //     cout << value << " ";
    // }

    auto it = find(firstList.begin(), firstList.end(), 200);
    if (it == firstList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}