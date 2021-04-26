#include <stdio.h>
#include <stdlib.h>     //This librery contains EXIT_FAILURE and EXIT_SUCCESS
#include <errno.h>      //This includes "errno"
//extern int errno;     "errno" it's a global int variable that saves the error code catched in a program
//The prefix "extern" permits access to global variables that are declared in a library

int main(int argc, char const *argv[])
{
    FILE *file;

    errno = 0;      //As a good practice "errno" should be initialized in 0

    file = fopen("errno_test.txt", "r");

    if (file == NULL)  //If the file is not opened, print the error text
    {
        perror("Error");    //Print Error, receives a message as an argument about the error, like in this example "Error"
        fprintf (stderr, "Error Opening File. Error Code: %d", errno);  //"stdrr" is the standard error output
        //In "fprintf" it can be used the function "strerror" or String Error that receives "errno" variable as an argument
        //But "strerror" is located in "string.h" library
        exit(EXIT_FAILURE); //Similar to "return:-1;" or something diferrent to Zero
    }

    fclose(file);
    return EXIT_SUCCESS; //Similar to "return:0" but not strictly 0, just means that the program finished correctly
}
