/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adobrito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:38:47 by adobrito          #+#    #+#             */
/*   Updated: 2017/12/20 03:49:47 by adobrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int n)
{
	int number;

	if (n == 0)
		return (1);
	number = 1;
	while (n != 1)
	{
		number = number * 10;
		n--;
	}
	return (number);
}
