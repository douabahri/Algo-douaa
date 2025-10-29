#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char *str;

    printf("Please enter the maximum size of the string: ");
    scanf("%d", &n);

    while (getchar() != '\n'); 

    str = LoadString(n);

    int len = StringLength(str);
    char rev[len + 1];

    printf("\nOriginal string: ");
    DisplayArray(str);

    ReverseArray(str, rev, len);
    printf("Reversed string: ");
    DisplayArray(rev);

    int sum = SumStringASCII(str);
    printf("Sum of ASCII values: %d\n", sum);

    ReverseString(str, str + len - 1);
    printf("String reversed recursively: %s\n", str);

    free(str); 
    return 0;
}
