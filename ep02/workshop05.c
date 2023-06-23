#include <stdio.h>
#include <conio.h>

#define wow printf ("@@@@@@@@@@@@@@@@@@iou, m\n") ;

void main()
{
    float money, money_share ;
    int person ;
	
    wow
    printf ("        Program Money Share\n") ;
    wow
    printf ("INPUT MONEY : \n") ;
    scanf  ("%f", &money) ;
    printf ("INPUT PERSON : \n") ;
    scanf  ("%d", &person) ;
    wow
    money_share = money / person ;
    printf ("Money Share is : %.2f Bath/Person\n" ,money_share) ;
    wow
    
    
    getch();

}