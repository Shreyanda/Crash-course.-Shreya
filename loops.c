#include <stdio.h>

int main() {
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
   
    
    return 0;
}



#include <stdio.h>

int main() {
    for (int i=1; i<6; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    
   
    
    return 0;
}







#include <stdio.h>

int main() {
    int a=1;
    for(int i=1;i<7;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
        
    }
    
    return 0;
}
