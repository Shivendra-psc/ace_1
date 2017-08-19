#include<stdio.h>
//16115075_clab_exp3(12-08-17)
int main()
{
  int marks,maths,phy,chem,english,cs,i=0;
  float percent;
  printf("enter marks of maths,physics,chemistry,english and computer science");
  scanf("%d %d %d %d %d",&maths,&phy,&chem,&english,&cs);
   marks=maths+phy+chem+english+cs;
   percent=(marks)/5;
    if(percent>=90.0)
            {
                printf("Grade is A");
            }
   else if(percent>=80.0)
            {
                printf("Grade is B");
            }
   else if(percent>=70.0)
            {
                printf("Grade is C");
            }
   else if(percent>=60.0)
            {
                printf("Grade is D");
            }
   else if(percent>=50.0)
            {
                printf("Grade is E");
            }
   else
        {
            printf("Grade is F");
        }
   return 0;
}
