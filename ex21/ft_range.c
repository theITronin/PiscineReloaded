/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:35:19 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/23 19:38:08 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	n = (int *)malloc(len * sizeof(int));
	if (!n)
		return (NULL);
	while (min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	ft_range(-2147483648, -2147483644);
	return (0);
}
*/
