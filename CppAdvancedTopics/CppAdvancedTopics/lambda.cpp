#include <iostream>
#include <algorithm>    // std::for_each
#include <map>
#include <vector>

using namespace std;

int main() {

    int x, y;
    x = y = 0;

    auto print = [=]() mutable { cout << x << " " << y << "\n"; };

    vector<int> V = { 0,1,2,3,4 };
    print();

    for_each(begin(V), end(V),  [=](int element)
        mutable
        {
            x += element;
            y += element;
        }
    );

    print();

    

    vector<int> T(V.size());

    transform(begin(V), end(V), begin(T), [](int element) {
        return element *=2;
        });


    return 0;
}