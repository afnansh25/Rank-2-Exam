/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:08:37 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 10:08:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);

*/

#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
   int i = 0;

   while (s[i])
   {
      int j = 0;
      while (reject[j])
      {
         if (s[i] == reject[j])
           return (i);
         j++;
      }
      i++;
   }
   return (i);
}