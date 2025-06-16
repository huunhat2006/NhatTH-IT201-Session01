#include <stdio.h>
#include <stdlib.h>

int n;
//bài 1
int main(void) {
    for (int i = 1; i < n; i++) {
        printf("Hello\n");
    }
    return 0;
}
// độ phức tạp O(n)

//bài 2
void printDouble(int n) {
    int i=1;
    while(i<n) {
        printf("%d",i);
        i *= 2;
    }
}
// độ phức tạp là O(log n)

//bài 3
int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
//độ phức tạp  là O(n)
