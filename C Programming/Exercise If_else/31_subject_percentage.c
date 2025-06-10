#include <stdio.h>

/*Write a program to input marks of five subjects English, Math, Science, History and
Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A+
Percentage >= 80% : Grade A
Percentage >= 70% : Grade B
Percentage >= 60% : Grade C
Percentage >= 40% : Grade D
Percentage < 40% : Fail
*/

int main()
{
    int english, math, science, history, computer, total_marks, percentage;

    printf("Enter marks for English = ");
    scanf("%d", &english);

    printf("Enter marks for Math = ");
    scanf("%d", &math);

    printf("Enter marks for Science = ");
    scanf("%d", &science);

    printf("Enter marks for History = ");
    scanf("%d", &history);

    printf("Enter marks for Computer = ");
    scanf("%d", &computer);

    total_marks = english + math + science + history + computer;
    printf("Total marks = %d\n", total_marks);

    percentage = total_marks / 5;
    printf("Percentage = %d\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade A+");
    }

    else if (percentage >= 80)
    {
        printf("Grade A");
    }

    else if (percentage >= 70)
    {
        printf("Grade B");
    }

    else if (percentage >= 60)
    {
        printf("Grade C");
    }

    else if (percentage >= 40)
    {
        printf("Grade D");
    }

    else
    {
        printf("Fail");
    }

    return 0;
}
