/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:25:57 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/09 19:26:02 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{	
	ft_printf("%s", msg);
	exit (0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	(void)mousecode;
	(void)data;
	err_msg("Exit Success");
	return (0);
}

void	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
	{
		ft_printf("\n>>>>Toplam Hareket: %d\n", data->step_count);
		err_msg("FINISH");
	}
	else
		ft_printf("Sorry, you can't exit. \n");
}
