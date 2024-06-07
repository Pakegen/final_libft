/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:08:41 by quenalla          #+#    #+#             */
/*   Updated: 2024/05/30 10:59:28 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	while (0 < n)
	{
		n--;
		*str = c;
		str++;
	}
	return (s);
}
