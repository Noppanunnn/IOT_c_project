#include <stdio.h>

void main ()
{
    //ประกาศตัวแปร
    int midtermScore = 50;
    int final_score;
    int total_score;
    double gpa = 3.99;

    final_score = 20;
    total_score = midtermScore + final_score;

    //แสดงผล

    printf ("Midterm is : %d\n", midtermScore);
    printf ("Final is : %d\n", final_score);
    printf ("Total is : %d\n", total_score);
    printf ("My GPA is : %.4lf\n", gpa);
    printf ("---------------------------------\n", gpa);
    printf ("%d + %d = %d ได้เกรด %.2lf \n", midtermScore, final_score, total_score, gpa);
    
}