#include <iostream>

using namespace std;

class User {
    string name;

public:
    User(string name_) : name(name_) {}

    string GetUserName() {
        return name;
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
