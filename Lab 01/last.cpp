#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    int value;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> value;

    a[n] = value;
    n++;

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
