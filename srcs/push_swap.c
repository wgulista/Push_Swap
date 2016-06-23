/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 14:50:31 by wgulista          #+#    #+#             */
/*   Updated: 2016/06/23 16:48:38 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char		*create_tab(ac, char **av)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = ft_strnew(ac - 1);
	while (av[++i])
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

void		push_swap(int ac, char **av)
{

}

int			main(int ac, char **av)
{
	if (ac >= 2)
		push_swap(ac, av);
	else
		ft_usage_error();
	return (0);
}
