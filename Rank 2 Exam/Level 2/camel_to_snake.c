/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:21:34 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 08:21:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$

*/

#include <unistd.h>

int main(int ac, char **av)
{
   int i = 0;
   if (ac == 2)
   {
      while (av[1][i])
      {
         if (av[1][i] >= 'A' && av[1][i] <= 'Z')
         {  
            av[1][i] +=32;
            write (1,"_", 1);
         }
         write (1, &av[1][i], 1);
         i++;
      }
   }
   write (1, "\n", 1);
   return (0);
}