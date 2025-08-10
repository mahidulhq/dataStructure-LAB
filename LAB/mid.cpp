#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    int value, mid;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> value;

    mid = n / 2;
    for(int i = n;i > mid; i--) a[i] = a[i-1];
    a[mid] = value;
    n++;

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
