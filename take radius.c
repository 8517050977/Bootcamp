#include<stdio.h>
#include<conio.h>
int main()
{
    float area , radius;
    printf("Enter radius ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("Area of circle is %f having the radius %f");
    return 0;

}
