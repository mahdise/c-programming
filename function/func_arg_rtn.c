#include<stdio.h>
int sum(int, int);
void main()
{
    int a,b, result;
    printf("Enter the numbers: \n");
    scanf("%d%d",&a,&b);
    result =sum(a,b);
    printf("result is %d", result);

}
int sum (int a, int b)
{
    return a+b;
}
