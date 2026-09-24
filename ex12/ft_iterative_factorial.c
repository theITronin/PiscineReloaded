/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:35:49 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/23 19:35:54 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	n;
	int	n1;

	n = 1;
	n1 = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (n <= nb)
	{
		n1 = n1 * n;
		n++;
	}
	return (n1);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
