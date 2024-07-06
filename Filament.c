#include<stdio.h>
int  main(){
 
//  ans 1
 
     char str[150];
     printf("Enter your str:");
     scanf("%s",str);

     int length=0;
     while(str[length]!='\0'){
        length++;
     }

     char reverse[150];
     for(int i=0; i<length; i++){
        reverse[i]=str[length-1-i];
     }
     reverse[length]='\0';


     int palindrome=1;

     for(int i=0; i<length; i++){
        if(str[i]!=reverse[i]){
            palindrome=0;
            break;
        }
     }

     if(palindrome){
        printf("this is palindrome.\n");
     }else{
        printf("this is not palidrome.\n");
     }


// ans 2

// char str[100];

//     printf("Enter your str:");
//     scanf("%s",str);

//     for(int i=0; str[i]!='\0'; i++){
//         int len=0;
        
//         for(int j=0; str[j]!='\0'; j++){
//             if(str[i]==str[j]){
//                 len++;
//             }
//         }
//         printf("%c=%d\n",str[i],len);
//     }

    return 0;
}