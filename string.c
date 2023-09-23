#include<stdio.h>
#include<string.h>

//int main(){
    // char str[10]={'b','h','o','p','a','l'};
    // int i;
    // for ( i = 0;i<=9; i++)
    // {
    //    printf("%c",str[i]); 
    // }

// impove your code
    //   char str[10]={'b','h','o','p','a','l'};
    // int i;
    // for ( i = 0;str[i]!='\0'; i++)
    // {
    //    printf("%c",str[i]); 
    // } 

    //  char str[10]={'b','h','o','p','a','l'};
    // int i;
    // for ( i = 0;str[i]; i++)
    // {
    //    printf("%c",str[i]); 
    // }


     // %s operator string ke liye use hota hai
    // char str[10]={'b','h','o','p','a','l'};
    // printf("%s",str);
     


    //  length of string
    //  char str[10]={'b','h','o','p','a','l'};
    //  int i;
    //  for(i=0;str[i];i++);
    //  printf("Length is %d",i);
    //  return 0;

    // input string from user 
    // char str[20];
    // printf("enter your name");
    // scanf("%s",str);
    // printf("%s",str);

    // input string with the help of gets function

    // char str[5]; // ye run bhi ho skta hai but some time nhi bhi run hoga kyu ki logical mistekes hai .string
    // // ka size less hai as compaire jo hum jo hum enter kr rhe hai .isiko bug kehte hai
    // printf("entee your name");
    // gets(str);
    // printf("%s",str);

   // fgets (arrayname,inputsize,sdtin)
    // char str[20];
    // printf("entee your name");
    // fgets(str,20,stdin);
    // printf("%s",str);
   
// program mai new line character bhi print hoga or lenght 8 ho jayega
//    char str[20];
//    int i;
//    printf("Enter your name");
//    fgets(str,20,stdin);
//    for(i=0;str[i];i++);
//    printf(" length of %s is %d",str,i);
      

   // length of string using strlen function
   // method 1
    
//   char str[20];
//   int i;
//   printf("Enter a string");
//   fgets(str,20,stdin);
//   str[strlen(str)-1]='\0';
//   for(i=0;str[i];i++);
//   printf(" length of %s is %d",str,i);


// method 2 find length of string
// char str[20];
//   int i;
//   printf("Enter a string");
//   fgets(str,20,stdin);
//    i=strlen(str);
//    printf(" length of %s is %d",str,i);

//}
int give_me_last_character_of_string(char s[]);
int main()
{
    char str[20];
    char ch;
    int i;
    printf("enter your name");
    fgets(str,20,stdin);
    //str[strlen(str)-1]='\0';

   ch=give_me_last_character_of_string(str);
   printf("%c",ch);

}

 int give_me_last_character_of_string(char s[])
 {
     return s[strlen(s)-1];
 }
