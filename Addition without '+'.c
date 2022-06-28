/*
Program to multiply two numbers without using arithmetic operators
By: B I Mohammmed Abbas
Github: https://github.com/biabbas
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int Add(int a, int b){
   bool c = 0,x,y;
  for(int i=0;(i<=(int)floor(log2(b)+1)) || c!=0;i++){
    x = (a&(1<<i))!=0;
    y = (b&(1<<i))!=0;
    if(c^x^y)
    a = a | (1<<i);// Set ith bit of a to 1
    else
    a = a & (~(1<<i));// Reset ith bit of a to 0
    c =(c&(x^y) | x&y);
  }
  return a;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
printf("a + b = %d\n",Add(a,b));

    return 0;
}
