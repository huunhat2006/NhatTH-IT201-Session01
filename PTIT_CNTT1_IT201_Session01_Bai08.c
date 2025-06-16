#include <stdio.h>

int arr[] = {1,2,3,4,5,6,7,8,9,10,5,3,7};
int n = sizeof(arr) / sizeof(arr[0]);

int main() {
    // Đếm tần suất xuất hiện
    for (int i = 0; i < n; i++) {
        arr[i]++;
    }

    // Tìm phần tử xuất hiện nhiều nhất
    int maxFreq = 0, value = -1;
    for (int i = 0; i < 1001; i++) {
        if (i > maxFreq) {
            maxFreq = i;
            value = i;
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d (xuat hien %d lan)\n", value, maxFreq);
    return 0;
}
//độ phức tạp O(n)

