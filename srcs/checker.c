/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 15:14:51 by wgulista          #+#    #+#             */
/*   Updated: 2016/06/23 15:16:52 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_usage_error()
{
	ft_putendl("Usage: ./checker [check]");
	exit(1);
}

void	checker(char *av)
{
	(void)av;
}

int		main(int ac, char **av)
{
	if (ac == 2)
		checker(av[1]);
	else
		ft_usage_error();
	return (0);
}
