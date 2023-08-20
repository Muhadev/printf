#include <stdio.h>
#include "printf_design.c"
#include "main.h"


int main()
{
	int chars_printed = printf_design("Number: %d, Hex: %x\n", 42, 255);
    printf("Chars Printed: %d\n", chars_printed);
    return 0;
}
