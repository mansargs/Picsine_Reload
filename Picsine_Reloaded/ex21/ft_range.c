/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:50:43 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/10 19:14:30 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*array;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	array = (int *)malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	while (min < max)
	{
		*(array + i) = min;
		++i;
		++min;
	}
	return (array);
}
