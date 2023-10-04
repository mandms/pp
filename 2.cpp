#include <iostream>
#include <string>
using namespace std;


void insertS(string s) {
    string s3;
    int pos;
    cout << "Введите слово для вставки: " << endl;
    getline(cin, s3);
    cout << "Введите позицию для вставки: " << endl;
    cin >> pos;
    cout << "Результат: " + s.insert(pos, s3) << endl;
}

void eraseS(string s) {
    int pos, num;
    cout << "Введите позицию, с которой начинать удалять: ";
    cin >> pos;
    cout << "Введите сколько символов нужно удалить: ";
    cin >> num;
    s.erase(pos, num);
    cout << s;
}

void replaceS(string s) {
    string s2, s3;
    cout << "Введите слово для поиска: ";
    getline(cin, s3);
    cout << "Результат: " + s.find(s3);
}

void findS(string s) {
    string s2;
    int pos, num;
    cout << "Введите слово для замены: ";
    getline(cin, s2);
    cout << "Введите позицию, с которой начинать замену: ";
    cin >> pos;
    cout << "Введите сколько символов нужно заменить: ";
    cin >> num;
    cout << "Результат: " + s.replace(pos, num, s2);
}

void second()
{
    string s, cmd, s3;
    cout << "Введите строку: ";
    getline(cin, s);
    while (true) 
    {
        cout << "\nВыберите insert, erase, replace или find \nИли введите 0 чтобы выйти \n";
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
