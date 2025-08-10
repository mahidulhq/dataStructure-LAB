// binart search
#include <stdio.h>

int main() {
    int n, key, pos = -1;
    printf("Enter size (sorted array): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) { pos = mid; break; }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    if (pos != -1) printf("Found at index %d", pos);
    else printf("Not found");
    return 0;
}
