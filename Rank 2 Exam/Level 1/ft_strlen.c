/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:26:24 by marvin            #+#    #+#             */
/*   Updated: 2025/03/12 23:26:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);

*/

int   ft_strlen(char *str)
{
   int   i;

   i = 0;
   while (str[i])
      i++;
   return (i);
}
#include <stdio.h>
int   main(void)
{
   char *str = "AFnan";
   int len;

   len = ft_strlen(str);
   printf("the lenght: %d\n", len);
   return (0);
}