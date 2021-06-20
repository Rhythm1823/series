//WAP to read the percentage of marks obtained by a student in SLC and +2 level. Display message “CONGRATULATIONS!!!
//You have first division in both SLC and +2” if both levels have percentage greater than or equal to 60.[nested if]
#include <stdio.h>
void main()
{
    float s,c;
    printf(" enter your percentage in slc and +2 \n");
    scanf("%f%f",&s,&c);
    if (s>=60)
    {
        if (c>=60)
        {
            printf(" Congratulations!!! You have first division in both slc and +2");
        }
    }
}
