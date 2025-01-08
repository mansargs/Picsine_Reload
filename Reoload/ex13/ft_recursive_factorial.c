/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:52:44 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/08 22:01:24 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		--nb;
		ft_recursive_factorial(nb);
	}
	return (result);
}
