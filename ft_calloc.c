/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <aliens@students.s19.be>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 16:52:39 by aliens            #+#    #+#             */
/*   Updated: 2021/03/18 14:18:47 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	dst = (void *)malloc(sizeof(char) * (size * count));
	if (!dst)
		return (NULL);
	ft_bzero(dst, (count * size));
	return (dst);
}
