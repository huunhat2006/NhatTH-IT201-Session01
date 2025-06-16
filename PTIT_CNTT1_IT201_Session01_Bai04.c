#include <stdio.h>

int n;
int total=0;
int main() {
    //cach1
    for (int i = 0; i < n; i++) {
        total += i;
    }

    //cach2
    total = (n*(n-1))/2;

    return 0;
}