#include <iostream>
#include <string>
using namespace std;

void third() {
    string s1, s2;
    cout << "������� ������: ";
    getline(cin, s1);
    cout << "������� ������ ������: ";
    getline(cin, s2);
    bool compared = s1.compare(s2);
    if (compared == 1)
    {
        cout << s1 + " ������ " + s2;
    }
    if (compared == 0) {
        cout << s1 + " � " + s2 + " �����";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    third();
    return 0;
}