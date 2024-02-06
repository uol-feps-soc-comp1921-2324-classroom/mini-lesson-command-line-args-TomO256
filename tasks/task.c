#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;
    if (argc!=3){
        printf("Useage: ./task <number> <number>");
        return 0;
    }
    // Prompt the user for input
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]); 

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
