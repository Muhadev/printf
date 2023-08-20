#ifndef PRINTF_DESIGN_H
#define PRINTF_DESIGN_H
#include <stddef.h>
#include <stdarg.h>

typedef struct
{
int l_modifier;
int h_modifier;
} prm_t;
void printf_design(const char *string_format, prm_t *prm, ...)


int signed_int_spec(va_list info);
int unsigned_spec(va_list info);
int octa_spec(va_list info);
int hexa_spec(va_list info, char s);
#endif
