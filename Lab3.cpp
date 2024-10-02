#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;
    cin >> a;
    int b;
    if(a<0) {
        a=-a;
    }
    do {
        a/=10;
        b++;
    }while(a!=0);
    cout << "Кількість цифр у числі: " <<b;

    return 0;
}
