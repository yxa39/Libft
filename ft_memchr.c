/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 10:16:34 by yxie              #+#    #+#             */
/*   Updated: 2018/12/03 10:17:22 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr_s;

	ptr_s = (char *)s;
	while (n--)
	{
		if (*ptr_s == c)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}
