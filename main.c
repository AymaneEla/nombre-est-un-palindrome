#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, temporary, reste ,inverse = 0;

    printf("Enter the Number : ");
    scanf("%d", &number);

    temporary = number;

    while (temporary != 0){
        reste = temporary % 10;
        inverse = inverse *10 + reste;
        temporary /=10;
    }

    if (number == inverse){
        printf("%d est un palidrome \n", number);

    }else{printf("%d n'est pas un palindrome.", number);}

    return 0;
}
