#include <stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",n);
        }
        printf("\n");
        n--;
    }

    return 0;
}
