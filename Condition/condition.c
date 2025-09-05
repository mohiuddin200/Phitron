#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks < 30){
      printf("Your grade is C\n");
    }
    else if(marks >= 30 && marks < 70){
      printf("Your grade is B\n");
    }
    else if(marks >= 60 && marks < 80){
      printf("Your grade is A\n");
    }
    else{
      printf("Your grade is A+\n");
    }

    return 0;
}