/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <aliens@students.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:05:32 by aliens            #+#    #+#             */
/*   Updated: 2021/03/18 14:50:44 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dst;

	if (!s || !f)
		return (NULL);
	i = -1;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	while (s[++i])
		dst[i] = f(i, s[i]);
	dst[i] = 0;
	return (dst);
}
