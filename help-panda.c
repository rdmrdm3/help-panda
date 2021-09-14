#include <unistd.h>
#include <string.h>
#include <stdio.h>

int         main()
{
    char        *example_ptr_to_char_1;
    char        example_ptr_to_char_2[16];
    char        example_ptr_to_char_3[32] = "this will work too\n"; //two ways to assign value, <-- this way will not pass norminette

    strcpy(example_ptr_to_char_2, "hello world!\n"); // this will work because pointer is initialized in array with 16 memory block reserved
    //strcpy(example_ptr_to_char_1, "this will cause memory error because this pointer is pointing to a memory space where the next few memory block is not reserved for usage\n")''
    //ft_strcapitalize(example_ptr_to_char_1); //this will fail
    //ft_any_string_manipulation_function(example_ptr_to_char_1); //all will fail
    
    printf("%s", example_ptr_to_char_2);
    printf("############################\n");
    printf("example_ptr_to_char_2 addresss : %p, value = %c\n", example_ptr_to_char_2, example_ptr_to_char_2[0]);
    printf("example_ptr_to_char_2 + 1 addresss : %p, value = %c\n", &(example_ptr_to_char_2[1]), example_ptr_to_char_2[1]);
    printf("example_ptr_to_char_2 + 1 addresss : %p, value = %c\n", &(example_ptr_to_char_2[2]), example_ptr_to_char_2[2]);
    printf("############################\n");
    printf("example_ptr_to_char_1 addresss : %p <-- this memory should not be used, because it can contains code/other value from other parts, value = %c\n", example_ptr_to_char_1, example_ptr_to_char_1[0]);
    printf("example_ptr_to_char_1 + 1 addresss : %p <-- this memory should not be used, value = %c\n", &(example_ptr_to_char_1[1]), example_ptr_to_char_1[1]);
    printf("example_ptr_to_char_1 + 2 addresss : %p <-- this memory should not be used, value = %c\n", &(example_ptr_to_char_1[2]), example_ptr_to_char_1[2]);
    printf("############################\n");
    printf("%s", example_ptr_to_char_3);

    return (0);
}
