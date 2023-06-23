#include <stdio.h>
//??????
int main ()
{
    char name[50];
    int age;
    double salary;
printf ("Enter Name :");
scanf("%s",&name);
printf ("Enter Age :");
scanf("%d",&age);
printf ("Enter Salary :");
scanf("%lf",&salary);
printf ("++++++++++++++++++++++++++++\n");
printf ("Hi... %s\n", name);
printf ("You are %d year old.\n", age);
printf ("Your salary is  %lf Baht.\n", salary);
    
    return 0 ;
}
