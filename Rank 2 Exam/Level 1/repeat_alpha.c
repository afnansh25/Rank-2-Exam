/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:40:54 by marvin            #+#    #+#             */
/*   Updated: 2025/03/12 23:40:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
   int   repeat;
   char  *str;

   if (ac == 2)
   {
      str = av[1];
      repeat = 1;
      while (*str)
      {
         if (*str >= 'a' && *str <= 'z')
            repeat = *str - 'a' + 1;
         else if (*str >= 'A' && *str <= 'Z')
            repeat = *str - 'A' + 1;
         while (repeat > 0)
         {
            write (1, str, 1);
            repeat--;
         }
         str++;
      }
   }
   write (1, "\n", 1);
   return (0);
}