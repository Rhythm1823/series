//WAP that reads a character and performs following operations according to the choice inputted by the user.

//1. Display “ IT IS VOWEL” if the entered character is a vowel otherwise “ IT IS CONSONANT”.

//2. Display “ IT IS DIGIT” if the entered character is a member of digit , otherwise display the ASCII value of entered character.
// scii value of digits 48-57
#include <stdio.h>
int main()
{
    char ch,vowel[]={'a','e','i','o','u'};
    int j;

    printf("enter any character");
    ch= getchar();
     if  (ch>=97 && ch<=122)
    {
       for (j=0;j<=9;j++)
       {
           if (ch== vowel[j])
           {


            printf(" vowel");
            goto end;
           }
       }


printf(" consonent");

           }
    else if (ch>=48 && ch<58)
    {
        printf(" the entered character is a digit");
    }

        else
        {
            printf(" ASCII %d",ch);
        }
end:
        return 0;
}

