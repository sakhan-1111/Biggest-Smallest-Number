#include <stdio.h>
#include <conio.h>

int main()
{
    float x,y,z;
    printf("Enter the first number: ");
    scanf("%f",&x);
    printf("Enter the second number: ");
    scanf("%f",&y);
    printf("Enter the third number  : ");
    scanf("%f",&z);
    if(x>y){
        if(y>z){
    printf("%f is the biggest number\n",x);
    printf("%f is the smallest number",z);
        }
    }
    if(y>x){
        if(x>z){
    printf("%f is the biggest number\n",y);
    printf("%f is the smallest number",z);
        }
    }
    if(z>y){
        if(y>x){
    printf("%f is the biggest number\n",z);
    printf("%f is the smallest number",x);
        }
    }
    return 0;
}
