/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:42:05 by lweeper           #+#    #+#             */
/*   Updated: 2020/10/29 15:42:16 by lweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int sym)
{
	while (*str)
	{
		if (*str == (char)sym)
			return ((char*)str);
		else
			str++;
	}
	if (sym == '\0')
		return ((char*)str);
	return (0);
}
