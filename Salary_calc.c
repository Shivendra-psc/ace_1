#include<stdio.h>
//16115075_clab_exp2(12-08-17)
int main()
{
    int salary;
    float hra,da,gross;
    printf("Enter your salary");
    scanf("%d",&salary);
    if(salary<=10000)
        {
         hra=0.2*salary;
         da=0.8*salary;
        }
    else if(salary>10000&&salary<=20000)
            {
                hra=0.25*salary;
                da=0.9*salary;
            }
    else if(salary>20000)
             {
                 hra=0.3*salary;
                 da=0.95*salary;
             }
     gross=salary+hra+da;
     printf("Gross salary is : %f",gross);
     return 0;
}
