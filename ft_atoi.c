/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oiyoke <oiyoke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:08:23 by oiyoke            #+#    #+#             */
/*   Updated: 2019/10/04 19:51:13 by oiyoke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int result;
	int overflow;

	sign = 1;
	result = 0;
	overflow = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + *str - '0';
		str++;
		overflow++;
		if (overflow >= 19)
			return ((sign == -1) ? 0 : (-1));
	}
	return (sign * result);
}
