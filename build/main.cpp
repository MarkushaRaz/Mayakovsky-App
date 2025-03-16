#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    short A;

    cout << "Привет!\nЭто конкурс от Маяковского!\nЧтобы начать, ответь на вопрос:\n\nСколько тебе лет?\n";
    cin >> A;

    system("cls");
    cout << "Сколько хуев в жопе?\n" << A;
    cout << "\n\nОтлично, теперь идём дальше.\n";
    cin >> A;

    return 0;
}

// x86_64-w64-mingw32-g++ build/main.cpp -o Mayakovsky.exe -static -static-libgcc -static-libstdc++