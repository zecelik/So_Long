/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:42:00 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/09 19:51:58 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t countbyte)
{
	void	*p;

	p = malloc(count * countbyte);
	if (!p)
		return (0);
	ft_bzero(p, count * countbyte);
	return (p);
}
