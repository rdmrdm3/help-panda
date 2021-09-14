#include <unistd.h>
#include <string.h>
#include <stdio.h>

int         main()
{
    char        *example_ptr_to_char_1;
    char        example_ptr_to_char_2[16];

    strcpy(example_ptr_to_char_2, "hello world!\n"); // this will work because pointer is pointing to a memory space where the next 16 block is allocated for usage
    //strcpy(example_ptr_to_char_1, "this will fail because this pointer is pointing to a memory space where the next few memory block is not reserved for usage\n")''

    printf("%s", example_ptr_to_char_2);
    return (0);
}