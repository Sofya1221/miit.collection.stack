#include <iostream>
#include <conio.h>

using namespace std;

#include "stack.h"

void printMENU() {
    cout << "\n\n     MENU\n\n";
    cout << "1) Печать стека\n";
    cout << "2) Удалить элемент из стека\n";
    cout << "3) Текущий размер стека\n";
    cout << "4) Добавить элемент в стек\n";
    cout << "5) Получить n-й от вершины жлемент стека\n";
    cout << "Выход - ESC\n";
    cout << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число элементов в стеке: ";
    int ct;
    cin >> ct;
    Stack<char> stackSymbol(ct);
    char ch = NULL;
    system("cls");
    while ((int)ch != 27) {
        system("cls");
        printMENU();
        cin >> ch;
        switch (ch) {
            case '1': {
                system("cls");
                stackSymbol.printStack();
                _getch();
                break;
            }
            case '2': {
                system("cls");
                stackSymbol.pop();
                break;
            }
            case '3': {
                system("cls");
                stackSymbol.getStackSize();
                _getch();
                break;
            }
            case '4': {
                system("cls");
                cout << "Введите новый элемент: ";
                char symbol;
                cin >> symbol;
                stackSymbol.push(symbol);
                _getch();
                break;
            }
            case '5': {
                system("cls");
                cout << "Какой по номеру элемент стека нужен?\n";
                int number;
                cin >> number;
                stackSymbol.Peek(number);
                _getch();
                break;
            }
        }
    }
    _getch();
    return 0;
}