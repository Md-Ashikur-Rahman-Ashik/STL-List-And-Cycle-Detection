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
    // secondList.clear();

    // if (secondList.empty())
    // {
    //     cout << "This list is empty" << endl;
    // }
    // else
    // {
    //     cout << "There is value in the list" << endl;
    // }

    // for (int value : secondList)
    // {
    //     cout << value << endl;
    // }

    secondList.resize(2);

    for(int value : secondList){
        cout << value << " ";
    }

    return 0;
}