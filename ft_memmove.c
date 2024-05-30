/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:16:39 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/30 10:57:28 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src > dest)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
