#include <stdio.h>
#include <cs50.h>
//cs50.h is the cs50x library that contains that string datatype
// and GetString function

int main(void)
{
    string name;
    printf("What is your name?\n");
    name = GetString();
    printf("hello, %s\n", name);

    /*//Buggy    
    while (true) //never ending, always true
    {
        printf("I am a buggy program.");
    }
    */

    /*//Buggy
    for(int i = 0; i >= 0; i++) //never ending, always true
    {
        printf("I can count to %d\n", i);
    }
    */
}
