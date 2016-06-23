/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 14:53:47 by wgulista          #+#    #+#             */
/*   Updated: 2016/06/23 16:06:48 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

typedef struct	s_env
{
	int			pileA;
	int			pileB;
	int			num;
	char		*operation;
}				t_env;

void			ft_usage_error();
int				main(int ac, char **av);

#endif
