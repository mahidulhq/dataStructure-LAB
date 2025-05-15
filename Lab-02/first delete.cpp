#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        a[i - 1] = a[i];
    }

    n--;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
