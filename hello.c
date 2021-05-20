#include<stdio.h>
int main()
{
    for(int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int j = 0;

    while(j < 10) {
        printf("%d", j);
        j++;
    }

    return 0;
}