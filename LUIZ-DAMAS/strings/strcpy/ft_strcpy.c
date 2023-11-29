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
 Esta funcao serve para fazer copias de string copiando 
 a string A para a strin B fazendo uma copia indentica.
 */

#include <stdio.h>

char	*strcpy(char *dest, char *orig);
char	*strcpy_02(char *dest, char *orig);

int	main(void)
{
	char	orig[] = "test_copia";
	char	dest[] = " ";
  /*
	printf("ORIGINAL: [%s]\n",orig);
	strcpy(dest,orig);
	printf("COPIA: [%s]\n",dest);
 */
	//versao 2
	
	printf("VERSAO 2 ORIGINAL : [%s]\n",orig);
	strcpy_02(dest,orig);
	printf("VERSAO 2 COPIA: [%s]\n",dest);



}
//============ 1° versao mais longa =========== 
char	*strcpy(char *dest, char *orig)
{
	int	i;

	i = 0;

	while (orig[i] != '\0')
	{
		dest[i] = orig[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);  
}
//========== 2°versao mais curta ============ top
char	*strcpy_02(char *dest, char *orig)
{
	int i;
	
	i =0;
	while(dest[i] = orig[i])
	i++;
	return (dest);
}
