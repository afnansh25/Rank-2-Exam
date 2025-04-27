/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:38:50 by marvin            #+#    #+#             */
/*   Updated: 2025/03/13 22:38:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int   main(int ac, char **av)
{
   char  *str = av[1];
   char  rotone;
   int   i = 0;
   if (ac == 2)
   {
      while(str[i])
      {
         if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
            rotone = str[i] + 1;
         else if(str[i] == 'z' || str[i] == 'Z')
            rotone = str[i] - 25;
         else
            rotone = str[i];
         write (1, &rotone, 1);
         i++;
      }
   }
   write (1, "\n", 1);
   return (0);
}