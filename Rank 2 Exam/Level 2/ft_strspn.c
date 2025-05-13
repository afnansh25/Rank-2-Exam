/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:51:22 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 20:51:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);

*/

#include <unistd.h>

size_t ft_strspn(const char *s, const char *accept)
{
      int i = 0;

      while (s[i])
      {
         int j = 0;
         int found = 0;
         while (accept[j])
         {
            if (s[i] == accept[j])
            {
               found = 1;
               break;
            } 
            j++;
         }
         if (!found)
            return (i);
         i++;
      }
      return (i);
}
