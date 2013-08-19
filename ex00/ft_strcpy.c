/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olipoul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/17 18:51:15 by olipoul           #+#    #+#             */
/*   Updated: 2013/08/17 21:31:41 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src);

char *s = src, *d = dest;
{
    while (*s != 0)
	{
		*d = *s;
		s++;
		d++;
	}
	*d = *s;
	return dest;
}

void printstr(char *c)
{
	while (*c != 0)
	{
		putchar(c);
		c++;
	}
}

int main(void)
{
	char buffer[10];
	strcpy(buffer, "Vive 42!");
	printf(buffer);
}