/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:38:47 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/23 19:38:49 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

// int main(void)
// {
//     int n[6] = {1, 2, 3, 4, 5, 6}; 
//     ft_foreach(n, 6, &ft_putnbr);
// }
