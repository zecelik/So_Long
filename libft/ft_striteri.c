/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:20 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/09 19:53:43 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*ft_func)(unsigned int, char*))
{
	unsigned int	index;

	if (str)
	{
		index = 0;
		while (*str)
			ft_func(index++, str++);
	}
}
