#include<stdio.h>

// // find greatest number in array using function(TSRS)

// int greatest_number(int b[],int n);
// int main()
// {
//     int a[10],k;
   
//     k=greatest_number(a,10);
//     printf(" greatest number is %d",k);
// }
//  int greatest_number(int b[],int n)
//  {
//     int i,max;
//     printf("Enter a 10 number");
//     for(i=0;i<=9;i++)
//     scanf("%d",&b[i]);
//     max=b[0];
//     for(i=1;i<=9;i++)
//     if(b[i]>max){
//         max=b[i];
//     }
//     return max;
// }



// find smallest number in array using function(TSRS)

// int smallest_number(int b[],int n);
// int main()
// {
//     int a[10],k;
   
//     k=smallest_number(a,10);
//     printf(" smallest number is %d",k);
// }
//  int smallest_number(int b[],int n)
//  {
//     int i,min;
//     printf("Enter a 10 number");
//     for(i=0;i<=9;i++)
//     scanf("%d",&b[i]);
//     min=b[0];
//     for(i=1;i<=9;i++)
//     if(b[i]<min){
//         min=b[i];
//     }
//     return min;
// }

// Write a function to sort an array of anay size(TSRN)
//  void sort_array(int b[],int n);
// int main(){
//     int a[10];
//     sort_array(a, 10);
// }

//  void sort_array(int b[], int n)
// {
//  int i,t,r;
//  printf("Enter 10 number");
//     for(i=0;i<=9;i++)
//     scanf("%d",&b[i]);
//     for(r=1;r<=9;r++)
//     for(i=0;i<=9-r;i++){
//         if(b[i]>b[i+1]){
//             t=b[i];
//             b[i]=b[i+1];
//             b[i+1]=t;
//         }
//     }

//     for(i=0;i<=9;i++)
//     printf(" %d ",b[i]);
// }

// Qs 4. rotation of array
//void rotate(int A[],int size,int n,int d);
// void rotate(int A[],int size,int n,int d)
// {
//     int i,temp;
//     if(d==1)
//     {
//         while(n)
//       {
//         temp=A[size-1];
//         for(i=size-2;i>0;i--)
//             A[i+1]=A[i];  // right side sift hoga
//             A[0]=temp; 
//             n--;
//       } 
    
//     }
//     else
// {
//      while(n)
//       {
//         temp=A[0];
//         for(i=1;size-1;i++)
//             A[i-1]=A[i];  // left side sift hoga
//             A[0]=temp; 
//             A[size-1]=temp;
//             n--;
//       } 
// }

// }

// int main()
// {
//     int A[]={5,10,15,20,25};
//    int n=5;
//    int size[]={5};
//   rotate(A,n,size);
// }






 