#include <iostream>
#include <string>
using namespace std;

void first() {
    string s;
    cout << "Введите ваше имя: ";
    getline(cin, s);

    cout << "front = " << s.front() << endl;
    cout << "back = " << s.back() << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    first();
    return 0;
}
