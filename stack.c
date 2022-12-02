#include<stdio.h>
#define MAX 5
void traverse();
int stack[MAX];
signed int top=-1;
void push(int);
int pop();
void main(){
char ch;
int item;
while(ch != 'x'){
printf("\n'a' for push\n");
printf("'b' for pop\n");
printf("'c' for traverse\n");
printf("'x' for exit\n");
printf("\n");
printf("Enter your choice\n");
scanf(" %c",&ch);
switch(ch){
case 'a': {
printf("enter the value to be pushed\n");
scanf("%d",&item);
getchar();
push(item);
break;
}
case 'b':{
item=pop();
printf("\n %d is poped\n",item);
break;
}
case 'c':{
printf("\n traversing stack\n");
traverse();
break;
}
case 'x':{
printf("welcome\n");
break;
}
default:{
printf("Wrong input\n");
}
}
}
}
