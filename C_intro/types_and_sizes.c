#include <stdio.h>
/**
 * @file type_and_sizes.c
 * @author Uthman Toafeeq
 * @brief entry function to c program
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 */

int add_two(int y, int x);

int main()
{
    int result = add_two(4, 4);
    printf("Answer %d\n", result);
    return(0);
}
int add_two(int y, int x)
{
    int result = y + x;
    return(result);
}