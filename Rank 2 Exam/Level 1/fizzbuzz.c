/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:37:43 by marvin            #+#    #+#             */
/*   Updated: 2025/03/12 22:37:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_putnbr(int n)
{
   char  c;

   if (n >= 10)
      ft_putnbr(n / 10);
   c = (n % 10) + '0';
   write (1, &c, 1);
}

int   main (void)
{
   int   num;

   num = 1;
   while (num <= 100)
   {
      if (num % 3 == 0 && num % 5 == 0)
         write (1, "fizzbuzz", 8);
      else if (num % 3 == 0)
         write (1, "fizz", 4);
      else if (num % 5 == 0)
         write (1, "buzz", 4);
      else 
         ft_putnbr(num);
      write (1, "\n", 1);
      num++;
   }
   return (0);
}