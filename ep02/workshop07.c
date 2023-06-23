#include <stdio.h>
#include <conio.h>

#define PA printf ("++++++++++++++++++++++++++++++++++++++++++\n") ;

void main()
{
    float widths, longs, area_square ,bases, hights, area_triangle  ;

    PA
    printf ("        Program Area Shape\n") ;
    PA
    printf ("Input Widhts :") ;
    scanf("%f",&widths);
    printf ("Input Longs :") ;
    scanf("%f",&longs);
    area_square = widths * longs ;
    printf ("Square Area = %.2f\n", area_square) ;
    PA
    printf ("Input Base :") ;
    scanf("%f",&bases);
    printf ("Input High :") ;
    scanf("%f",&hights);
    area_triangle = bases * hights / 2 ;
    printf ("Triangle Area = %.2f\n", area_triangle) ;
    PA
    getch ();