/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcelik <@42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:44:15 by fcelik            #+#    #+#             */
/*   Updated: 2023/07/09 19:53:41 by fcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *) malloc(ft_strlen(s1) + 1);
	if (!final)
		return (0);
	while (*(s1 + i))
	{
		*(final + i) = *(s1 + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
