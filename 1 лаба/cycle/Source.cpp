#include <iostream>
#include <chrono>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    auto start = chrono::steady_clock::now();

    if (n == 1) {
        cout << 0;
    }
    else if (n == 2) {
        cout << 1;
    }
    else if (n > 2) {
        cout << 0 << " " << 1 << " ";
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
            cout << b << " ";
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    auto minutes = chrono::duration_cast<chrono::minutes>(diff);
    auto seconds = chrono::duration_cast<chrono::seconds>(diff - minutes);
    cout << endl << "Время выполнения: " << minutes.count() << " минут " << seconds.count() << " секунд." << endl;
    return 0;
}