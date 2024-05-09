/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:51:52 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:57:55 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h> 

int main() {
    char str1[] = "KANYEWEST";

    if (ft_str_is_printable(str1))
        printf("'%s' contains only printable characters.\n", str1);
    else
        printf("'%s' contain non-printable characters.\n", str1);
    return 0;
}
*/
