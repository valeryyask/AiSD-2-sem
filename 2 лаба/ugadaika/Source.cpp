#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int N) {
    int low = 1;
    int high = N;
    int steps = 0;

    while (low < high) {
        int mid = low + (high - low) / 2;
        cout << mid << endl;
        string response;
        cin >> response;

        if (response == "мало") {
            low = mid + 1;
        }
        else if (response == "много") {
            high = mid - 1;
        }
        else if (response == "угадал") {
            return steps;
        }
        steps++;
    }
    return steps;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите число N: ";
    cin >> N;

    int steps = binarySearch(N);
    cout << "Максимальное количество шагов = " << steps << endl;

    return 0;
}
