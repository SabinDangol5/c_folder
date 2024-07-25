#include <stdio.h>
int main()
{
    int social, maths, science, english, nepali, total, percentage, roll_no;
    char name[50], address[50];
    char gender;
    printf("enter your roll no \n:");
    scanf("%d", &roll_no);
    printf("enter your name \n:");
    scanf("%s", &name);
    printf("enter your gender \n:");
    scanf(" %c", &gender);
    printf("enter your address \n:");
    scanf("%s", address);
    printf("enter the mark of social \n");
    scanf("%d", &social);
    printf("enter the mark of maths \n");
    scanf("%d", &maths);
    printf("enter the mark of science \n");
    scanf("%d", &science);
    printf("enter the mark of english \n");
    scanf("%d", &english);
    printf("enter the mark of nepali \n");
    scanf("%d", &nepali);
    printf("the marsheet of student is:\n");
    printf("your details are\n");
    printf("\nroll no =%d", roll_no);
    printf("\nname =%s", name);
    printf("\ngender =%c", gender);
    printf("\naddress=%s", address);
    total = social + maths + science + english + nepali;
    printf("\ntotal=%d", total);
    percentage =(double) total / 5;

    printf("\npercentage=%lf", percentage);
    if (percentage < 40)
    {
        printf("\nyou have failed in exam");
    }
    else
    {
        printf("\nyou have been pass in exam");
    }
    return 0;
}
