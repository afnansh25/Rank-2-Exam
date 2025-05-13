/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:01:52 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 10:01:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

*/

int   ft_strcmp(char *s1, char *s2)
{
   int i = 0;

   while (s1[i] && s2[i])
   {
      if (s1[i] != s2[i])
         return ((unsigned char)s1[i] - (unsigned char)s2[i]);
         i++;
   }
   return (0);
}