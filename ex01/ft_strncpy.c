/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:28:51 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/09 13:31:59 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
		dest[i] = '\0';
	return (dest);
}

/* 
#include <stdio.h> 

int main() {
    char src[] = "Kanye West";
    char dest[20]; 

    ft_strncpy(dest, src, 5);

    printf("Copied string: %s\n", dest);

    return 0;
}
*/
