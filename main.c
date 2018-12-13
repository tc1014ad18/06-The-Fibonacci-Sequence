#include <stdio.h>

int main() {
    int n;
    int firstTerm = 0;
    int secondTerm = 1;
    int newTerm;

    printf("Hullo, mate! I'll show you as many numbers in the Fibonacci sequences as you like.\n")
    printf("Give me how many numbers of the Fibonacci sequence you want to display (>=3): ");

    scanf("%d", n);

    printf("0, 1");

    for(int i = 3; i <= n; i++) {
        newTerm = firstTerm + secondTerm;
        printf(", %i", newTerm);
        firstTerm = secondTerm;
        secondTerm = newTerm;
    }

    return 0;
}