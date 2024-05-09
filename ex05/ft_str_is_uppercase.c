/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:40:31 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:55:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h> 

int main() {
    char str1[] = "KANYEWEST";

    if (ft_str_is_uppercase(str1))
        printf("'%s' contains only uppercase characters.\n", str1);
    else
        printf("'%s' contain non-uppercase characters.\n", str1);
    return 0;
}
*/
