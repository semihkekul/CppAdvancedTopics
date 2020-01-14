// StandardAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>    // std::for_each

using namespace std;

int main()
{
    vector<int> V = { 1,2,3,4,6,7,8,9,10 };

    auto printer = [](vector<int>& V) {
        for_each(begin(V), end(V), [=](int element)
            {
                cout << element << " ";
            });
        cout << endl;
    };
    printer(V);

    for (auto iter = V.begin(); iter != V.end(); iter++) {
        if (*iter % 3 == 0) {
            *iter = -1;
        }

    }

    printer(V);


    return 0;
}


