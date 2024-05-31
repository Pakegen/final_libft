/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:38:47 by qacjl             #+#    #+#             */
/*   Updated: 2024/05/31 16:34:59 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			k;
	unsigned char	*str;

	if (len > 2147483647)
		str = malloc(ft_strlen(s) + 1);
	else
		str = malloc(sizeof(unsigned char) * (len) + 1);
	if (str == NULL)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (i >= start && k < len)
		{
			str[k] = (unsigned char )s[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return ((char *)str);
}
