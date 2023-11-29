/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ######.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:19 by tales             #+#    #+#             */
/*   Updated: 2022/09/25 16:58:31 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Serve para saber o tamanho da string.
 */


#include <stdio.h>

int ft_strlen(char *str);

int main()
{
  char nome[] = "Ola teste";
  int result_Len;

  result_Len = ft_strlen(nome);
  printf("DEBUG[%d]\n",result_Len);

}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return(i);
}
