/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:58:19 by marvin            #+#    #+#             */
/*   Updated: 2025/03/12 22:58:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);

*/

#include <unistd.h>

void  *ft_putstr(char *str)
{
   while (*str)
   {
      write (1, str, 1);
      str++;
   }
}

int main(void)
{
   char *str = "afnan";

   ft_putstr(str);
   return (0);
}