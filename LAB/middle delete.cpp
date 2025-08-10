#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mid = n / 2;

    for (int i = mid; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
