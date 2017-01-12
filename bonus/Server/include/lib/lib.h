/*
** my.h for my.h in /home/Neferett/CPool_Day07/include
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Tue Oct 11 14:13:54 2016 Bonaldi Jordan
** Last update Sun Nov 27 02:16:00 2016 Bonaldi Jordan
*/

#ifndef	H_LIB
#define H_LIB

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#define US unsigned
#define B_OC "01234567\0"
#define B_hex "0123456789abcdef\0"
#define B_HEX "0123456789ABCDEF\0"

#define C_B  "\x1B[0m"
#define C_R  "\x1B[31m"
#define C_G  "\x1B[32m"
#define C_Y  "\x1B[33m"
#define C_BL  "\x1B[34m"
#define C_M  "\x1B[35m"
#define C_C  "\x1B[36m"
#define C_W  "\x1B[37m"

int	my_putchar(char c);
int	my_putchari(char);
int	my_putstri(char *);
int	nb_of(char *, char);
void	my_sort_int_tab(int *tab, int size);
int	my_isneg(int nb);
int	my_put_nbr(long int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_sort_wordtab(char **);
int	my_getnbr(char *str);
int	my_getnbr_base(char *str, char *base);
int	my_putnbr_base(int nbr, char *base);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
int	my_strcmp(char *s1, char *s2);
int	my_strcmp_withoutmaj(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_show_wordtab(char **tab);
int	my_showmem(char *str, int size);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
char	*sum_params(int args, char **arg);
char	*my_strdup(char *str);
int	mil_convert(int *, char *, int, char *);
int	mil_convertu(unsigned int *, char *, int, char *);
int	my_putl_nbr(long int);
int	my_puth_nbr(short int);
int	my_putu_nbr(unsigned int);
int	my_putuh_nbr(unsigned short int);
int	my_putul_nbr(unsigned long int);
int	my_putnbru_base(unsigned int, char *);
int	my_puh_b(unsigned short int, char *, int, char *);
int	my_pul_b(unsigned long int, char *, int, char *);
int	my_reset(char *);
short int msl(short int);
long int mll(long int);
void	my_itoa(int, char *, int);
void	my_ltoa(long int, char *, int);
void	my_stoa(short int, char *, int);
int	my_printf(char *, ...);
char	**my_str_to_wordtab(char *);
enum _bool {
  false = 0,
  true = 1
};
typedef enum _bool Boolean;
#endif
