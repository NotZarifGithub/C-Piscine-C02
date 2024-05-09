/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:41:15 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:47:57 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h> 

int main() {
    char str1[] = "KanyeWest";

    if (ft_str_is_alpha(str1))
        printf("'%s' contains only alphabetic characters.\n", str1);
    else
        printf("'%s' contain non-alphabetic characters.\n", str1);
    return 0;
}
*/
