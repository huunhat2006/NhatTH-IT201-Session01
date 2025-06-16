#include <stdio.h>
#include <stdbool.h>
int arr[] = {1,2,3,4,5,6,7,8,9,10,5,3,7};
int temp ;
int check = 5;
int count = -1;
int main() {
    //cach1
    for (int i=0 ; i < 13 ; i++) {
        for (int j=i+1 ; j < 13 -1 ; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
    //độ phức tạp O(n^2)


    //cach2
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 13; i++) {
        if (arr[i] == check) {
            count = i;
            if (arr[count] == arr[count-1] || arr[count] == arr[count+1]) {
                return true;
            }
        }
    }
    return false;
    //độ phức tạp O(n^2)
}
