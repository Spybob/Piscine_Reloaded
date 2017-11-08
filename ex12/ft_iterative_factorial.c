/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:02:46 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/07 16:34:57 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	resultat = 1;
	i = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		resultat = i * resultat;
		i++;
	}
	return (resultat);
}
