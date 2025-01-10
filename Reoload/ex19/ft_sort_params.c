/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:22:04 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/10 18:31:33 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		++i;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		min = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
				min = j;
			++j;
		}
		ft_swap (&argv[i], &argv[min]);
		++i;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		++i;
	}
	return (0);
}
