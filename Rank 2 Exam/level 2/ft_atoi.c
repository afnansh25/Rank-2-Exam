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