#include <stdio.h>
void arr(int n[5]){
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);
    }
        
}
void reverse(int n[5]){
    for (int i = 4; i >=0; i--)
    {
        printf("%d ",n[i]);
}
}
    int main (){
       int n[5];
       arr(n);
       reverse(n);
    }

/*
#include <stdio.h>

void arr(int *input_array) { // ชื่อในฟังก์ชัน arr เป็น input_array
    for (int i = 0; i < 5; i++) {
        scanf("%d", &input_array[i]);
    }
}

void reverse(int *output_array) { // ชื่อในฟังก์ชัน reverse เป็น output_array
    for (int i = 4; i >= 0; i--) {
        printf("%d ", output_array[i]);
    }
}

int main() {
    int my_numbers[5]; // ชื่อใน main เป็น my_numbers
    arr(my_numbers);   // ส่งที่อยู่ของ my_numbers ไปยัง arr
    reverse(my_numbers); // ส่งที่อยู่ของ my_numbers ไปยัง reverse
    return 0;
}*/