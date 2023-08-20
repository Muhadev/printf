#include "main.h"

int signed_int_spec(va_list info)
{
int input;
	input = va_arg(info, int);
return (_printf("%d", input);

}
int unsigned_spec(va_list info)
{
unsigned int input;
        input = va_arg(info, unsigned int);
return (_printf("%u", input);

}
int octa_spec(va_list info)
{
unsigned int input;
        input = va_arg(info, unsigned int);
return (_printf("%o", input);

}
int signed_int_spec(va_list info char s)
{
unsigned int input;
        input = va_arg(info, unsigned int)
{
if (s == 'x')
{
return (_printf("%x", input);
}
else
{
return (_printf("%X", input);
}
}
