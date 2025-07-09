#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> firstList = {10, 20, 30};
    list<int> secondList = {100, 200};
    vector<int> firstVector = {2, 3, 4};
    // // secondList = firstList;
    // secondList.assign(firstList.begin(), firstList.end());

    // firstList.push_back(40);
    // firstList.push_front(100);
    // firstList.pop_back();

    // cout << *next(firstList.begin(), 2) << endl;
    firstList.insert(next(firstList.begin(), 2), firstVector.begin(), firstVector.end());
    // firstList.pop_front();
    for (int value : firstList)
    {
        cout << value << " ";
    }

    return 0;
}