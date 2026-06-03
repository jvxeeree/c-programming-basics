#include <stdio.h>

int main() {
    //helloword 
   printf("Hello World\n");

   char name = 'j';
   float height = 1.6;
   int age = 20;
   //variable
   printf("Name%c \n", name);
   printf("Height%f \n", height);
   printf("Age%d\n", age);
   //loops
   printf("Counting from 1 to 5:\n");
   for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    //arrays

    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("Elements in the array:\n");

    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
   return 0;
}
