#include<stdio.h>
int main()
{
    // int i,a[10],sum=0;
    // printf("Enter 10 number");
    // for(i=0;i<=9;i++)
    //  scanf("%d",&a[i]);
    // for(i=0;i<=9;i++)
    // sum=sum+a[i];
    // printf("sum is is %d",sum);


    // QUestion 3

    // int a[10],i,sum_even=0,sum_odd=0;
    // printf("Enter a 10 number");
    // for(i=0;i<=9;i++)
    // scanf("%d",&a[i]);
    // for(i=0;i<=9;i++){
    //     if(a[i]%2==0)
    //     sum_even=sum_even+a[i];
    //     else
    //     sum_odd=sum_odd+a[i];
    // }
    // printf("\nsum of all even numner is %d",sum_even);
    // printf("\nsum of all odd number is %d",sum_odd);


    // QUESTION 4
    // int a[10],i,max;
    // printf("enter 10 number");
    // for(i=0;i<=9;i++)
    // scanf("%d",&a[i]);
    // max=a[0];
    // for(i=1;i<=9;i++){
    //     if(a[i]>max)
    //     max=a[i];
    // }
    // printf("\nGreatest number is %d",max);


    // QUESTION 5
    // int a[10],i,min;
    // printf("enter 10 number");
    // for(i=0;i<=9;i++)
    // scanf("%d",&a[i]);
    // min=a[0];
    // for(i=1;i<=9;i++){
    //     if(a[i]<min)
    //     min=a[i];
    // }
    // printf("\nSmallest  number is %d",min);


    // QUESTION 6 Sorting
//     int a[10],i,t,r;
//     printf("Enter 10 number");
//     for(i=0;i<=9;i++)
//     scanf("%d",&a[i]);
//     for(r=1;r<=9;r++){
//     for(i=0;i<=9-r;i++)
//     {
//         if(a[i]>a[i+1])
//          {
//             t=a[i];
//             a[i]=a[i+1];
//             a[i+1]=t;
//          }
//     }
//  }
//     printf("\n\n");
//     for(i=0;i<=9;i++)
//     printf(" %d ",a[i]);

    // QUESTION 9 desending order
//     int a[10],i,t,r;
//     printf("Enter 10 number");
//     for(i=0;i<=9;i++)
//     scanf("%d",&a[i]);
//     for(r=1;r<=9;r++){
//     for(i=0;i<=9-r;i++)
//     {
//         if(a[i]<a[i+1])
//          {
//             t=a[i];
//             a[i]=a[i+1];5
//             a[i+1]=t;
//          }
//     }
//  }
//     printf("\n\n");
//     for(i=0;i<=9;i++)
//     printf(" %d ",a[i]);

    // QUESTION 10
   int a[10],i,b[10];
   printf("Enter 10 number");
   for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
   for(i=0;i<=9;i++)
     b[i]=a[i];
    for(i=0;i<=9;i++)
    printf(" %d ",b[i]);
    





    printf("\n");
    return 0;
}