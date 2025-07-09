#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> firstList = {20, 30, 10, 50, 30, 60, 60, 10};
    // firstList.remove(10);
    // firstList.sort();
    // firstList.unique();
    // firstList.sort(greater<int>());
    firstList.reverse();
    for (int value : firstList)
    {
        cout << value << " ";
    }

    return 0;
}