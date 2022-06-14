#include <iostream>

using namespace std;

class User {
    string userName;

public:
    User(string name) : userName(name) {}

    string GetUserName() {
        return userName;
    }

    string SetUserName(string newName) {
        userName = newName;
    }
};

int main()
{
    cout << "Hello, user, what is you name?\n";
    string Name;
    cin >> Name;
    cout << "Hello, " << Name << "!";
}
