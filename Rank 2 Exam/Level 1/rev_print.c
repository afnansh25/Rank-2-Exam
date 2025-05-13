/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:07:07 by marvin            #+#    #+#             */
/*   Updated: 2025/03/13 22:07:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$

*/

#include <unistd.h>

int   main(int ac, char **av)
{
   char  *str;
   int   i;

   if (ac == 2)
   {
      str = av[1];
      i = 0;
      while (str[i] != '\0')
         i++;
      while (i-- > 0)
         write (1, &str[i], 1);
   }
   write(1, "\n", 1);
   return (0);
}