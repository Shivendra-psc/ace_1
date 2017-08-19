#include<stdio.h>
int main()
//16115075_clab_exp4(12-08-17)
{
    float units,bill=0;
    printf("Enter units consumed:");
    scanf("%f",&units);
    if(units<=50)
       {
           bill=units*0.5;
       }
    else if(units>50&&units<=150)
       {
           bill=(50*0.5)+(units-50)*0.75;
       }
    else if(units>150&&units<=250)
       {
           bill=(50*0.5)+(100*.75)+(units-150)*1.20;
       }
    else if(units>250)
       {
           bill=(50*.5)+(100*.75)+(100*1.2)+(units-250)*1.5;
       }
    printf("Your final electricity bill is %f",bill);
    return 0;
}
