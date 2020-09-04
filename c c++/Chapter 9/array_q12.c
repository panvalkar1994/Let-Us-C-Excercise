/*Solving problems from "Let Us C", Chapter 9,Arrays*/
/*Author: Vaibhav Panvalkar*/

//Problem Statement:
/*
Very often in fairs we come across a puzzle that contains 15 numbered square pieces mounted on a frame. These pieces can be moved horizontally or vertically. A possible arrangement of these pieces is shown below:

            |1 |4 |15|7 |
            |8 |10|2 |11|
            |14|3 |6 |13|
            |12|9 |5 |  |

As you can see there is a blank at bottom right corner. Implement the following procedure through a program.

Draw the boxes as shown above. Display the numbers in the above order.Allow User to hit any of the arrow keys(up,down,left or right).
If you are using Turbo C/C++, use the libaray function gotoxy() to position the cursor on the screen while drawing boxes. If you are using visual Studio then use the following function to position the cursor.
    #include<windows.h>
    void gotoxy(short col, short row)
    {
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
        COORD position={col,row};
        SetConsoleCursorPostion(h,position);
    }

If user hits say, right arrow key then the piece with a number 5 should move to the right and black should replace original position of 5. Similarly, if down arrow key is hit, then 13 should move down and blank should replace the original position of 13. If left arrow key or up key is hit then no action should be taken.

The user will continue hitting arrow keys till the numbers aren't arranged in ascending order.

Keep track of the number of moves in which the user who manages it in minimum number of moves is the one who wins.
*/
//Solution
#include<stdio.h>
#include<Windows.h>
#include<conio.h>

int gotoxy(short col, short row);
int box(int x1, int y1, int x2, int y2);
int main(void)
{
    system("clear");
    int i, j;
    for (i = 0; i < 4;i++)
    {
        for (j = 1; j < 5;j++)
        {
            box(5 * j, 5*i, 5 + 5 * j, 5+5*i);
        }
    }
    gotoxy(5,5);
    getch();
}
int gotoxy(short col, short row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(h, position);
}

int box(int x1, int y1, int x2, int y2)
{
    int i;
    for (i = x1; i < x2;i++)
    {
        gotoxy(i, y1);
        printf("%c", 196);
        gotoxy(i, y2);
        printf("%c", 196);
    }
    for (i = y1; i < y2;i++)
    {
        gotoxy(x1, i);
        printf("%c", 179);
        gotoxy(x2, i);
        printf("%c", 179);
    }
    gotoxy(x1, y1);
    printf("%c", 218);
    gotoxy(x1, y2);
    printf("%c", 192);
    gotoxy(x2, y1);
    printf("%c", 191);
    gotoxy(x2, y2);
    printf("%c", 217);
}


