/*Chapter 9: Arrays, Practice example 1*/
/*Creating Array, putting values in array and processing the array*/

#include<stdio.h>

int main(void)
{
    int sum = 0;
    float avg;
    int marks[30];//Array to store marks of 30 students

    //Putting values in array
    for (int i = 0; i < 30;i++)
    {
        printf("marks of Roll No. %d\n:", i + 1);
        scanf("%d", &marks[i]);
        fflush(stdin);
    }
    printf("Calculating average and sum of all marks\n");

    for (int i = 0; i < 30;i++)
        sum = sum + marks[i];

    avg = sum / 30;
    printf("Average marks of the class = %f", avg);
    return 0;
}
