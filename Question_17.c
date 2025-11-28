#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter the coefficient of x^2(a): ");
    scanf("%d",&a);
    printf("Enter the coefficient of x(b): ");
    scanf("%d",&b);
    printf("Enter the constant of the equation c: ");
    scanf("%d",&c);

    int root1, root2, discrim;

    discrim = (b*b)-(4*a*c);
    root1 = (-b + sqrt(discrim))/(2*a);
    root2 = (-b - sqrt(discrim))/(2*a);

    if (discrim>0){
        printf("Roots are real and distinct: %d & %d",root1,root2);}
    if (discrim==0){
        printf("Roots are real and equal: %d",root1,root2);}
    if (discrim<0){
        printf("Roots are imaginary");}
    return 0;
}