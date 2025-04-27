/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:21:15 by marvin            #+#    #+#             */
/*   Updated: 2025/03/13 22:21:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int   main(int ac, char **av)
{
   char  *str = av[1];
   char  rot13;
   int   i = 0;
   if (ac == 2)
   {
      while (str[i] != '\0')
      {
         if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            rot13 = str[i] + 13;
         else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            rot13 = str[i] - 13;
         else
            rot13 = str[i];
         write (1, &rot13, 1);
         i++;
      }
   }
   write (1, "\n", 1);
   return (0);
}