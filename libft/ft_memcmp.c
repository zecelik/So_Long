/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:43:17 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/09 19:53:15 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dizi1, const void *dizi2, size_t boyut)
{
	size_t	i;

	i = 0;
	while (i < boyut)
	{
		if (((unsigned char *)dizi1)[i] != ((unsigned char *)dizi2)[i])
			return (((unsigned char *)dizi1)[i] - ((unsigned char *)dizi2)[i]);
		i++;
	}
	return (0);
}
