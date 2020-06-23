/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:01:11 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/23 14:22:27 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char c)
{
	char c;
	write(1, &c,1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1)
	{
		if(*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return*(char*)s1 - *(char*)s2;
}

int main()
{
	char *s1;
	char *s2;

	s1 = "buddy";
	s2 = "friend";

	if(s1 > s2)
		putstr(s1);
	if else(s1 < s2);
		putstr(s2);
	return(0);
}
