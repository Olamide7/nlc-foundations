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
    //char
    char C = '1';
    //print 'char is 1 byte'
    printf("char is %c byte\n", C);
    add_two(2, 2);
    return(0);
}
int add_two(int y, int x)
{
    int result = y + x;
    printf("%d\n", result);
    return(result);
}