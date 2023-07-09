#include <stdio.h>  
#include <string.h>  
#define N 100  

int top,stack[N];  
  
void push(char x){  
  
  
      if(top == N-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
   
      printf("%c",stack[top--]);  
}  
  
  
int main()  
{  
   char str[]="hello";  
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();  
} 
