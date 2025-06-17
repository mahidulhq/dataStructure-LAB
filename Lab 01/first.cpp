#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    int value;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> value;

    for(int i = n; i > 0; i--) a[i] = a[i-1];
    a[0] = value;
    n++;

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
