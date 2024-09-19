/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 03:15:57 by monahid           #+#    #+#             */
/*   Updated: 2024/09/16 03:16:12 by monahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
