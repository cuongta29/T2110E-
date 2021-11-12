#include <stdio.h> 
float average (int arr[], int number) {
    int sum = 0;
    int count = 0;
    float average = 0;
    for (int i = 0; i < number; i++) {
        sum += arr[i];
        count++;
    }
    average = (float)sum / count;
    return  average;
}

int main() {
    int size;
    printf("Nhap so luong so nguyen: ");
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("So nguyen thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Trung binh cong: %.2f\n", average(arr, size));
    return 0;
}
