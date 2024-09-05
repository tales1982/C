#ifndef LIBFT_H
# define LIBFT_H

//************* Include necessary libraries
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//********** STRUCTURE DEFINITIONS **********
typedef struct {
    char nomeClient[30];
} Cliente;

//******** FUNCTION DECLARATIONS *********** 
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dest, const char *src);
void apagarCliente(Cliente clientes[], const char *findClient);
void imprimirClientes(Cliente clientes[],int totalClientes);
void ft_print_menu();

//******** CONSTANTS AND MACROS ************ 
# define TAM 10

#endif
