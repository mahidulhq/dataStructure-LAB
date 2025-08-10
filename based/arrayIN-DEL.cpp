#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int pos, val;
    printf("Insert position & value: ");
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val; n++;

    printf("After insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Delete position: ");
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;

    printf("After deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
