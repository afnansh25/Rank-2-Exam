/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:23:52 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 10:23:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);

*/

char *ft_strpbrk(const char *s1, const char *s2)
{
   int i = 0;

   if (!s1 || !s2)
      return (0);
   while (s1[i])
   {
      int j = 0;
      while (s2[j])
      {
         if (s1[i] == s2[j])
            return ((char *)s1 + i);
         j++;
      }
      i++;
   }
   return (0);
}