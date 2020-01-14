// StandardContainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Res {
private:
    string name;
public:
    Res(string name) :name(name) {
        cout << "constructing " << name << "\n";
    }

    Res(const Res& res) :name(res.name) {
        cout << "copy constructing " << name << "\n";
    }
    ~Res() {
        cout << "destructing " << name << "\n";
    }
};

int main()
{
    vector<Res> V;

    for (int i = 0; i < 5; ++i) {
        std::string s = std::to_string(i);
        V.push_back(Res(s));
        cout << "-------------\n";

    }
    cout << "\nloop finished\n";

    list<Res> L;

    for (int i = 0; i < 5; ++i) {
        std::string s = std::to_string(i);
        L.push_back(Res(s));
        cout << "-------------\n";

    }
    cout << "\nloop finished\n";
    return 0;
}


