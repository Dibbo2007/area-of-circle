#include<stdio.h>
int main()
{
    float radius,area,z;/*here radius is variable*/
    printf("Input radius=");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    printf("your area is=%f\n",area);
    z=area/(radius*radius);
    printf("z=%f",z);/*user will find the of pie */
    return 0;
}