#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


#define EMPTY(fr) (void)(fr)
#define BUFF_SIZE 1024

/* SIZE_S */
#define TWO_VAL 2
#define ONE_VAL 1

/* F_LAGS */
#define minus 1
#define plus 2
#define zero 4
#define hash_tag 8
#define space 16

/**
 * struct mem - struct
 * @format: validate chars
 * @fun: function
 */
struct format
{
char format;
int (*fun)(va_list, char[], int, int, int, int);
};
/**
 * typedef struct cond cond_t - print unsigned int output
 * @cond: variable inputs
 * @cond_t: no return
 */

typedef struct format cond_t;
/* important function */
int _printf(const char *format, ...);

int design_printf(const char *format, int *pt, va_list arguments,
	char buffer[], int f_lags, int width, int prec, int size_s);
int format_c(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s);
int format_s(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s);
int format_mod(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s);
int unknown_print(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s);
int format_i(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s);
int format_b(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s);
int format_o(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s);
int format_u(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s);


int add_prec(const char *format, int *n, va_list arguments);
int add_width(const char *format, int *n, va_list arguments);
int add_size(const char *format, int *n);
int add_flags(const char *format, int *n);



long int conv_size(long int n, int size_s);
long int conv_unsign(unsigned long int n, int size_s);
int allow_print(char ch);
int apply_hexa(char ascii_pro, char buffer[], int n);
int coop(char ch);


int num_write(int issue, int pt, char buffer[],
	int f_lags, int width, int prec, int size_s);
int print_pointer(char buffer[], int pt, int n, int width,
	int f_lags, char make, char add_tp, int initial_make);
int design_char(char ch, char buffer[],
	int f_lags, int width, int prec, int size_s);
int design_printf(const char *format, int *pt, va_list arguments,
	char buffer[], int f_lags, int width, int prec, int size_s);

int print_num(int pt, char buffer[], int f_lags, int width,
	int prec, int n, char make, char add_tp);

int write_unsign(int issue, int pt, char buffer[],
	int f_lags, int width, int prec, int size_s);
int format_luh(va_list content, char apply[], char buffer[], int f_lags,
	char flag_o, int width, int prec, int size_s);
int format_uhex(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s);
int format_hex(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s);
int write_pointer(va_list content, char buffer[],
        int f_lags, int width, int prec, int size_s);
#endif /* MAIN_H */
