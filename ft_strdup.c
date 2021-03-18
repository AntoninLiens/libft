/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <aliens@students.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:30:14 by aliens            #+#    #+#             */
/*   Updated: 2021/03/18 14:49:15 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	return (str);
}
