#include "Stack.h"

void printMENU() {
    cout << "\n     MENU\n\n";
    cout << "1) Печать стека\n";
    cout << "2) Удалить элемент из стека\n";
    cout << "3) Добавить элемент в стек\n";
    cout << "4) Выполнить циклический сдвиг вправо\n";
    cout << "5) Выполнить циклический сдвиг влево\n";
    cout << "\nВыход - ESC\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack<char> stack;
    char ch = '0';
    system("cls");
    while (ch != 27) {
            system("cls");
            printMENU();
            ch = _getch();
        switch (ch) {
            case '1': {
                system("cls");
                stack.printStack();
                system("PAUSE");
                break;
            }
            case '2': {
                system("cls");
                stack.pop();
                break;
            }
            case '3': {
                system("cls");
                cout << "Введите новый элемент: ";
                char symbol;
                cin >> symbol;
                stack.push(symbol);
                break;
            }
            case '4': {
                system("cls");
                stack.roll(true);
                break;
            }
            case '5': {
                system("cls");
                stack.roll(false);
                break;
            }
        }
    }
    system("cls");
    system("PAUSE");
    return 0;
}