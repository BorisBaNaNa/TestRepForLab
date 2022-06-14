#include <iostream>

using namespace std;

class User {
    string name;

public:
    User(string name) : name(name) {}

    string GetUserName() {
        return name;
    }

    string SetUserName(string newName) {
        name = newName;
    }
};

int main()
{
    cout << "Hello, user, what is you name?\n";
    string Name;
    cin >> Name;
    User user(Name);
    cout << "Hello, " << user.GetUserName() << "!";
}
