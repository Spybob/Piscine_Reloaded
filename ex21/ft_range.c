/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:23:29 by prosnobl          #+#    #+#             */
/*   Updated: 2017/11/07 17:00:06 by prosnobl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int *tab;
	int i;

	len = max - min;
	i = 0;
	if (len <= 0)
		tab = NULL;
	else
	{
		tab = malloc(len * sizeof(int));
		while (min + i < max)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}
