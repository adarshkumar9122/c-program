#include<stdio.h>
int main(){
    // char str[10];
    // int i;
    // printf("Enter your name");
    // fgets(str,8,stdin);
    // printf("%s",str);
    // for (i=0;str[i]; i++);
    // printf("length of %s is %d",str,i); // is output mai length pf string ke sath inter keyword and 
    //null character ko input kr dega.ab hame null character ko alg se lgana hoga taki string ka 
    //length actule mai jo hai wo print ho jaye
                                        
    
    // char str[10];
    // int i;
    // printf("Enter your name");
    // fgets(str,8,stdin);
    // printf("%s",str);
    // for (i=0;str[i]; i++);
    // str[i-1]='\0';
    // printf("length of %s is %d",str,i); //is mai length 7 aayega lyu ki fgets function ko inter keyword
    // input diye to fgets function inter keyword ko ek character maan ke uska bhi lengh count ke leta hai 
    // isi liye is string ka lengh 7 hai .

    // --> jb fegts function ke size of array kam ho to wo only new line character(inter keyword) 
    // ko alwase input karega or inter keyword ko length mai count kr dega. 
    
    //--> jb fegts function ke size of array jayada ho to wo  new line character(inter keyword)
    //and null character dono ko input mai lega or length of string mai count kar dega. 
    

     char str[10];
    int i;
    printf("Enter your name");
    fgets(str,7,stdin);
    for (i=0;str[i]; i++);
    printf("%d",i);
    str[i-1]='\0';
    printf("length of %s is %d",str,i);
    
}