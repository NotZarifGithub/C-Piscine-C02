/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:06:13 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:49:42 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h> 

int main() {
    char str1[] = "1";

    if (ft_str_is_numeric(str1))
        printf("'%s' contains only numbers.\n", str1);
    else
        printf("'%s' contain non-numbers.\n", str1);
    return 0;
}
*/
