#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool task1();
double task2();
double x,y;
bool exist=1;

void main()
{
while(exist){
 printf("Tasks:\n");
 printf("1: Task 1\n");
 printf("2: Task 2\n");

switch (_getch()) {
case '1':
    printf("Type x\n");
    scanf("%lf", &x);
    printf("Type y\n");
    scanf("%lf", &y);
    printf("%i\n", task1(x,y));
  break;
case '2':
    printf("Type x\n");
    scanf("%lf", &x);
    printf("%g\n", task2(x));
break;
default:
printf("Incorrect input");
exist = 0;
break;
}
}
}
