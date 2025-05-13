/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:46:01 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 09:46:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

*/

int   ft_atoi(const char *str)
{
   int i;
   int sign;
   int result;

   i = 0;
   while (str[i] == 32 || str[i] <= 9 && str[i] >= 13)
      i++;
   if(str[i] == '+' || str[i] == '-')
   {
      if (str[i] == '-')
         sign = -1;
      i++;
   }
   while (str[i] && str[i] >= '0' && str[i] <= '9')
   {
      result = result * 10 + (str[i] - '0');
      i++;
   }
   return (result * sign);
}