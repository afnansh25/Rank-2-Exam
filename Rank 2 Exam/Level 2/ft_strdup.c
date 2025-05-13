/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:19:09 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 10:19:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);

*/

#include <stdlib.h>

char *ft_strdup(char *src)
{
   int i = 0;
   char *des;

   while (src[i])
      i++;
   des = (char *)malloc(sizeof(char) *i + 1);
   if (!des)
      return (0);
   i = 0;
   while (src[i])
   {
      des[i] = src[i];
      i++;
   }
   des[i] = '\0';
   return (des);
}


