/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:36:06 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/23 19:36:07 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	while (n <= 46340)
	{
		if (nb == n * n)
			return (n);
		if (nb < n * n)
			return (0);
		n++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(1));
	return (0);
}
*/
