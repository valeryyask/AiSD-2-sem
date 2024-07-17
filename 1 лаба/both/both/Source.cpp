#include <iostream>
#include <ctime>

using namespace std;

void cycle(int n) {
    if (n < 0) {
        cout << "������: ������� ����� ������ ��� ������ ����" << endl;
        return;
    }
    if (n == 0) {
        cout << "������������������ ���������: " << 0 << endl;
        return;
    }
    int prev = 0, curr = 1;
    cout << "������������������ ���������: ";
    for (int i = 1; i <= n; ++i) {
        cout << prev << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << endl;
}

int Recursion(int n) {
    if (n <= 1)
        return n;
    return Recursion(n - 1) + Recursion(n - 2);
}

int main() {
    setlocale(LC_ALL, "russian");
    int n;
    cout << "������� ����� N: ";
    cin >> n;

    if (n == 0) {
        cout << "������: ������� ����� ������ ����" << endl;
        return 1;
    }

    clock_t startcycle = clock();
    cycle(n);
    clock_t endcycle = clock();
    double elapsedcycle = double(endcycle - startcycle) / CLOCKS_PER_SEC;
    int minutesCycle = int(elapsedcycle) / 60;
    int secondsCycle = int(elapsedcycle) % 60; 

    clock_t startRecursion = clock();
    int resultRecursion = Recursion(n);
    clock_t endRecursion = clock();
    double elapsedRecursion = double(endRecursion - startRecursion) / CLOCKS_PER_SEC;
    int minutesRecursion = int(elapsedRecursion) / 60; 
    int secondsRecursion = int(elapsedRecursion) % 60;

    cout << "��������� ����� ������: " << minutesCycle << " ����� " << secondsCycle << " ������" << endl;
    cout << "��������� ����� ���������: " << minutesRecursion << " ����� " << secondsRecursion << " ������" << endl;

    return 0;
}
