#include<conio.h>
#include<stdio.h>
#include<math.h>
int factorial(int num)
{
    int fact=1;
    for(int i=1; i<num; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    double x, sum=1;
    int i,n;
    printf("Enter the value of x");
        scanf("%lf",&x);
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+pow(x,i)/factorial(i);
    }
    printf("The value of e^x is %lf",sum);
    getch();

}