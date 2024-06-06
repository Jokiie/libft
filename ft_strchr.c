/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccodere <ccodere@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:38:39 by ccodere           #+#    #+#             */
/*   Updated: 2024/03/07 11:27:35 by ccodere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	chosen_c;

	chosen_c = c;
	if (str == NULL)
		return (NULL);
	while (*str != chosen_c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}
