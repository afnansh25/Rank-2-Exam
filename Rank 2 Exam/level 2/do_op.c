/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:44:11 by marvin            #+#    #+#             */
/*   Updated: 2025/05/06 08:44:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int      main(int ac, char **av)
{
    if (ac == 4)
    {
      int n1 = atoi(av[1]);
      int n2 = atoi(av[3]);
      if (av[2][0] == '+')
         printf("%i\n", n1+n2);
      else if (av[2][0] == '-')
         printf("%i\n", n1-n2);
      else if (av[2][0] == '*')
         printf("%i\n", n1*n2);
      else if (av[2][0] == '/')
         printf("%i\n", n1/n2);
      else if (av[2][0] == '%')
         printf("%i\n", n1%n2);
    }
    write (1, "\n", 1);
    return (0);
}
