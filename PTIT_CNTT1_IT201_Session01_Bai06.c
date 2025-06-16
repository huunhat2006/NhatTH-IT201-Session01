#include <stdio.h>
int arr[] = {1,2,3,4,5,6,7,8,9,10,5,3,7};
int check = 5;
int count = 0;
int main() {
    for (int i = 0; i < 10; i++) {
        if (arr[i] == check) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
//độ phức tạp 0(n)
