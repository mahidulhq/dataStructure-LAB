#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }

    // logic
    for(int i = 1; i < n; i++){
         int j = i - 1;
         int key = a[i];
         while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
         }
         a[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}