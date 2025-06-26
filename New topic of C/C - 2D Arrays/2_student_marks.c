// 2D array to store marks of students in different subjects
#include <stdio.h>

int main()
{
    // Array to store marks of 4 students in 3 subjects
    // Rows = Students, Columns = Subjects (Math, Science, English)
    int marks[4][3] = {
        {85, 90, 78}, // Student 1
        {92, 88, 85}, // Student 2
        {76, 82, 90}, // Student 3
        {88, 85, 92}  // Student 4
    };

    printf("Student Marks Table:\n");
    printf("===================\n");
    printf("Student\tMath\tScience\tEnglish\n");

    for (int i = 0; i < 4; i++)
    {
        printf("   %d\t", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
