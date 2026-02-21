// Ttest the new IDE
#include <stdio.h>
#include <cs50.h>

int main(void)
{

// ask an  input to the user

{
    int x=get_int("Enter a value for x: ");
    int y=get_int("Enter a value for y: ");

    if  (x > y )
    {
        printf("x is greater than y");
    }
    else if (y > x )
    {
        printf("x is smaller than y");
    }
    else
    {
        printf("x is equal to y");
    }
}
}
