#include <iostream>
#include <string>
using namespace std;


void insertS(string s) {
    string s3;
    int pos;
    cout << "������� ����� ��� �������: " << endl;
    getline(cin, s3);
    cout << "������� ������� ��� �������: " << endl;
    cin >> pos;
    cout << "���������: " + s.insert(pos, s3) << endl;
}

void eraseS(string s) {
    int pos, num;
    cout << "������� �������, � ������� �������� �������: ";
    cin >> pos;
    cout << "������� ������� �������� ����� �������: ";
    cin >> num;
    s.erase(pos, num);
    cout << s;
}

void replaceS(string s) {
    string s2, s3;
    cout << "������� ����� ��� ������: ";
    getline(cin, s3);
    cout << "���������: " + s.find(s3);
}

void findS(string s) {
    string s2;
    int pos, num;
    cout << "������� ����� ��� ������: ";
    getline(cin, s2);
    cout << "������� �������, � ������� �������� ������: ";
    cin >> pos;
    cout << "������� ������� �������� ����� ��������: ";
    cin >> num;
    cout << "���������: " + s.replace(pos, num, s2);
}

void second()
{
    string s, cmd, s3;
    cout << "������� ������: ";
    getline(cin, s);
    while (true) 
    {
        cout << "\n�������� insert, erase, replace ��� find \n��� ������� 0 ����� ����� \n";
        getline(cin, cmd);
        if (cmd == "insert")
        {
            insertS(s);
        }
        else if (cmd == "erase")
        {
            eraseS(s);
        }
        else if (cmd == "replace")
        {
            replaceS(s);
        }
        else if (cmd == "find")
        {
            findS(s);
        } 
        else if (cmd == "0")
        {
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    second();
    return 0;
}
