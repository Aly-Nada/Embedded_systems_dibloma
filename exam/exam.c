#include <stdio.h>
#include <stdlib.h>
#include "exam.h"

//this function is used to turn decimal numbers into binary numbers
void d_2_b(int n){
int binary[50];

    int i = 0;
    while (n > 0) {

        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d",binary[j]);
}
//this function is used to print the prime numbers from 0 to 100
void prime_nums(void){
  int i, Number, count;

  printf(" Prime Number from 0 to 100 are: \n");
  for(Number = 1; Number <= 100; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
  }

}
//this function gets the two largest numbers in an array
void two_largest(int *arr,int n){
	int  i = 0, largest1 = 0, largest2 = 0, temp = 0;


	largest1 = arr[0];
	largest2 = arr[1];

	if (largest1 < largest2)
	{
		temp = largest1;
		largest1 = largest2;
		largest2 = temp;
	}
	for (int i = 2; i < n; i++)
	{
		if (arr[i] > largest1)
		{
			largest2 = largest1;
			largest1 = arr[i];
		}
		else if (arr[i] > largest2 && arr[i] != largest1)
		{
			largest2 = arr[i];
		}
	}
	printf ("The 1st LARGEST = %d\n", largest1);
	printf ("THE 2nd LARGEST = %d\n", largest2);

}
//this function sorts the elements of an array
void order(int *number,int size){
int i,j,a;
for (i = 0; i < size; ++i){

            for (j = i + 1; j < size; ++j){

                if (number[i] > number[j]){

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < size; ++i)
            printf("%d\n", number[i]);
}
//this functions finds the number of pairs in an array
void pairs(int a[]){
    char ps=0;

    for(int i=0;i<(sizeof(a)/sizeof(int))-1;i++){
        if (a[i]==0){
            continue;
        }
        else{
                for(int j=i+1;j<(sizeof(a)/sizeof(int));j++){
                    if(a[j]==a[i]){
                        a[j]=0;
                        ps++;
                        break;
                    }
                }
        }
    }
    printf("pairs = %d",ps);
}
//this function draws a sand watch shape using stars
void sand_watch(void){
    int i, j, n;
    printf("Enter Odd value for n : ");
    scanf("%d", &n);
    for(i=n/2+1; i>1; i--){
        for(j=i; j<n; j++){
        printf(" ");
    }
    for(j=1; j<=(2*i-1); j++){
        printf("*");
    }
    printf("\n");
}


    for(i=1; i<=n/2+1; i++){
        for(j=i; j<n; j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1); j++){
        printf("*");
        }
        printf("\n");
    }
}

//this function devides an array into two arrays one for odd nums and other for even nums
void ODD_EVEN(void){
        int arr[100], odd[100], even[100];
        int i, j = 0, k = 0, n;
        printf("Enter the size of array AR n");
        scanf("%d", &n);
        printf("Enter the elements of the array n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            fflush(stdin);
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even[j] = arr[i];
                j++;
            }
            else
            {
                odd[k] = arr[i];
                k++;
            }
        }

        printf("The elements of odd array are ");
        for (i = 0; i < k; i++)
        {
            printf("%d", odd[i]);
        }

        printf("The elements of even array are ");
        for (i = 0; i < j; i++)
        {
            printf("%d", even[i]);
        }

}
//this function swaps two bits in two different registries
int swap(*reg1,*reg2,bit1,bit2){
    (reg1<<bit) = ((reg1<<bit1)|(~(reg2<<bit2)));
(reg2<<bit2)= ((reg2<<bit2)|(~(reg1<<bit1)));
(reg1<<bit1) = ((reg1<<bit1)|(~(reg2<<bit2)));

}
