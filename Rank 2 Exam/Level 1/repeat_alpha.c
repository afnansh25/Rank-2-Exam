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

/*

Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>

*/

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