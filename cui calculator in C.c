#include<stdio.h>
#include<math.h>
int add(){
    int a,b;
    printf("enter the first number---:\n");
    scanf("%d",&a);
    printf("enter the second number---:\n");
    scanf("%d",&b);

    printf("%d", a+b);
}
int sub(){
    int a,b;
    printf("enter the first number---:\n");
    scanf("%d",&a);
    printf("enter the second number---:\n");
    scanf("%d",&b);
    printf("%d", a-b);
}
int mul(){
    int a,b;
    printf("enter the first number---:\n");
    scanf("%d",&a);
    printf("enter the second number---:\n");
    scanf("%d",&b);
    printf("%d", a*b);
}
int div(){
    int a,b;
    printf("enter the first number---:\n");
    scanf("%d",&a);
    printf("enter the second number---:\n");
    scanf("%d",&b);
    printf("%d", a/b);
}
int root(){
    int a;
    printf("enter the number---:\n");
    scanf("%d",&a);
    double c= pow(a,0.5);
    
printf("%d",(int)c);
}


int main()
{
    int a;
printf("welcome user speaking frankly, what would you like me to do among following?\n");
printf("1. addition\n");
printf("2. subtraction\n");
printf("3. multiplication\n");
printf("4. division\n");
printf("or why don't you 5. get a root of a number\n");
printf("enter your choice\n");
scanf("%d",&a);
if(a==1){
    add();
}
else if(a==2){
    sub();
}
else if(a==3){
    mul();
}
else if(a==4){
    div();
}
else if(a==5){
    root();
}
return 0;
}