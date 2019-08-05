#include<stdio.h>
int main(){
int x;
scanf("%d",x);

while(x>=1){
        if((x%2)==0){
            printf("0");
            x=x/2;

        }
        else{
            printf("1");
            x=x/2;

        }
}

return 0;
}
