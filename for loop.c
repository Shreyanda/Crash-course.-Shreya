#include <stdio.h>

int main() {
    int a;
    for(int a=112;a>0;a=a/10)
    {
        printf("%d",a%10);
        printf("\n");
    }
    
    return 0;
}
