//fibonacci sequence

#include <stdio.h>

int main() {

    int n;
    int a = 0;
    int b = 1;
    int c;

    printf("How many Fibonacci values do you want : ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");

    for (int i = 1; i <= n; i++) {

        printf("%d ",a );

        /*a   b   c

         0   1   1
         1   1   2
         1   2   3
         2   3   5  
         3   5   8
         5   8   13*/

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}






