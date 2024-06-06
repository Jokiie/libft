/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccodere <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:58:25 by ccodere           #+#    #+#             */
/*   Updated: 2023/12/09 09:58:28 by ccodere          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Example
// char str[13] = "Hello World!";
// ft_bzero(str, 13);
void	ft_bzero(void *str, size_t len)
{
	unsigned char	*str_ptr;

	str_ptr = (unsigned char *)str;
	if (str != NULL )
		while (len--)
			*str_ptr++ = 0;
}
