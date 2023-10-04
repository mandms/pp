#include <iostream>
#include <string>
using namespace std;

void third() {
    string s1, s2;
    cout << "¬ведите строку: ";
    getline(cin, s1);
    cout << "¬ведите вторую строку: ";
    getline(cin, s2);
    bool compared = s1.compare(s2);
    if (compared == 1)
    {
        cout << s1 + " больше " + s2;
    }
    if (compared == 0) {
        cout << s1 + " и " + s2 + " равны";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    third();
    return 0;
}