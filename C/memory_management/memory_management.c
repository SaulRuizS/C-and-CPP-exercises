#include <stdio.h>
#include <stdlib.h> //The memory management functions are included here

int main(int argc, char const *argv[])
{
    int *ptr = malloc(sizeof(ptr)); 
    /*"malloc(bytes)" or also "Memory Allocation", returns a pointer to a
    contiguous block of memory with a size of the number of "bytes" as the parameter*/
    
    if(ptr != NULL)
    {
        *ptr = 35;
        printf("The value of ptr + 0 or also ptr[0] is: %d, And the size of ptr is: %d bytes\n", *ptr, sizeof(ptr));
    }
    /*When working with memory allocation there could be unsuccesful allocations,
    so as a good practice is recomended to check if the pointer has a NULL value*/

    ptr = realloc(ptr, 5 * sizeof(ptr));
    /*Resizes a block of memory of a pointer, first parameter is the pointer,
    second one is the number of bytes*/

    if(ptr != NULL)
    {
        *(ptr + 1) = 45;
        *(ptr + 2) = 55;
        *(ptr + 3) = 65;
        *(ptr + 4) = 75;

        for(int i=0; i <= 4; i++)
        {
            printf("\nptr[%d] = %d", i, *(ptr + i));
        }
        printf("\n\nEven that the size of ptr still being %d, it just means that is the size of the pointer.\nThe space for the block of memory its already assigned being of %d bytes.\n", sizeof(ptr), 5 * sizeof(ptr));
    }

    struct MemMangmt
    {
        int item;
        char *a_string;
    }*mem_mangmt;

    printf("\nThe size of mem_mangmt is %d bytes\n", sizeof(mem_mangmt));

    //(mem_mangmt)->a_string = "Memory Testing"; 

    /*This would be something like: *(mem_mangmnt).a_string, 
    the parenthesis are required beacause is a pointer, 
    but in this case it does not work because the block of memory 
    has not been assigned*/

    mem_mangmt = calloc(5, sizeof(mem_mangmt));
        /*Useful for arrays and other kind of complex data types, same as malloc, returns
        a pointer, the first parameter is the number of items, the second is the number of bytes.
        In this case the block of memory is being sized for 5 * sizeof(mem_mangmnt),
        that initially would be a size of 20 bytes, but can be increased because the structure has
        a string as a member*/

    if(mem_mangmt != NULL)
    {
        for(int j=0; j <= 4; j++)
        {
            (mem_mangmt + j)->item = j;
            (mem_mangmt + j)->a_string = "String from item: ";

            printf("\n%s%d", (mem_mangmt + j)->a_string, (mem_mangmt + j)->item);
            //printf("\nItem %d", (mem_mangmt + j)->item); 
        }
    }

    free(ptr);
    /*Releases the block of memory of a pointer*/

    return 0;
}
