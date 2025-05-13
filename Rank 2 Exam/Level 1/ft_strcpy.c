/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:08:53 by marvin            #+#    #+#             */
/*   Updated: 2025/03/12 23:08:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

*/

char  *ft_strcpy(char *s1, char *s2)
{
   int   i;

   i = 0;
   while (s2[i])
   {
      s1[i] = s2[i];
      i++;
   }
   s1[i] = '\0';
   return (s1);
}
#include <stdio.h>
int main (void)
{
   char  s1[20];
   char  *s2 = "Afnan";
   char  *res;

   res = ft_strcpy(s1, s2);
   printf("the result: %s\n", res);
}