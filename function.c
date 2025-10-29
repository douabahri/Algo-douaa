#include <stdio.h>
#include <stdlib.h>
#include "stringlib.h"


//LoadString------------------------------------------------------
char *LoadString(int N) {
    char *str = (char*) malloc((N + 1) * sizeof(char));
    if (str == NULL) {
        printf("Erreur d'allocation memoire!\n");
        exit(1);
    }

    printf("Enter a string (max %d characters): ", N);
    scanf("%s", str); 

    return str;
}

//StringLength---------------------------------------------------
int StringLength(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

//LoadArray------------------------------------------------------
void LoadArray(char *p, char arr[]) {
    int i = 0;
    while (p[i] != '\0') {
        arr[i] = p[i];
        i++;
    }
    arr[i] = '\0';  
}

//ReverseArray----------------------------------------------------
void ReverseArray(char arr[], char rev[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
    rev[n] = '\0'; 
}

//DisplayArray------------------------------------------------------
void DisplayArray(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
}

//SumStringASCII------------------------------------------------------
int SumStringASCII(char *p) {
    if (*p == '\0')
        return 0;
    else
        return (int)(*p) + SumStringASCII(p + 1);
}

//ReverseString--------------------------------------------------------
void ReverseString(char *start, char *end) {
    if (start >= end) return;

    char temp = *start;
    *start = *end;
    *end = temp;

    ReverseString(start + 1, end - 1);
}
