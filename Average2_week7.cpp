#include <iostream>
using namespace std;

int main()
{
    int n=10;
    cout << "10 members to compute for average\n ";

    int numbers[n];
    for (int i = 0; i < n; i++) {
        cout << "No " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    float avg = sum / (float) n;
    cout << "Average: " << avg << endl;
    return 0;
}
