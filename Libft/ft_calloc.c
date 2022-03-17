/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalayir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:57:04 by acalayir          #+#    #+#             */
/*   Updated: 2022/01/13 15:57:05 by acalayir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*r;

	i = nmemb * size;
	r = malloc(i);
	if (!r)
		return (NULL);
	ft_bzero(r, i);
	return (r);
}
