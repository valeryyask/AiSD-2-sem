#include <iostream>
#include <chrono>
using namespace std;

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else
        return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    auto start = chrono::steady_clock::now();

    for (int i = 0; i < n; ++i)
        cout << fibonacci(i) << " ";

    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    auto minutes = chrono::duration_cast<chrono::minutes>(diff);
    auto seconds = chrono::duration_cast<chrono::seconds>(diff - minutes);
    cout << endl << "Время выполнения: " << minutes.count() << " минут " << seconds.count() << " секунд." << endl;
    return 0;
}