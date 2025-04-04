#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    system("cls");

    short A, B;

    cout << "Привет!\nЭто конкурс от Маяковского!\nЧтобы начать, ответь на вопрос:\n\nСколько тебе лет?\n";
    cin >> A;

    system("cls");

    cout << "Сколько хуев в жопе?\n" << A;
    cout << "\n\nОтлично, теперь идём дальше.\n";
    cin >> B;

    return 0;
}