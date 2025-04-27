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