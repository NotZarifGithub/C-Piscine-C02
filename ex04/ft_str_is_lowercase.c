/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:07 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:53:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h> 

int main() {
    char str1[] = "kanyewest";

    if (ft_str_is_lowercase(str1))
        printf("'%s' contains only lowercase characters.\n", str1);
    else
        printf("'%s' contain non-lowercase characters.\n", str1);
    return 0;
}
*/
