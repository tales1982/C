#!/bin/bash

# Defina o compilador, por exemplo: gcc ou cc
COMPILER=gcc

# Defina o nome do arquivo de saída
OUTPUT=out

# Lista de arquivos de código-fonte
SOURCE_FILES="main.c ft_strcpy.c ft_strcmp.c ft_print_menu.c apagarCliente.c imprimirClient.c"

# Comando de compilação
$COMPILER $SOURCE_FILES -o $OUTPUT

# Verifica se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
      echo -e "\e[32mCompilação bem sucedida!\e[0m"
    ./$OUTPUT
else
    echo -e "\e[31m$output\e[0m"
fi
