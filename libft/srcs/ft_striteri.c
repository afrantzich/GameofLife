/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrantzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:25:31 by afrantzi          #+#    #+#             */
/*   Updated: 2018/04/23 11:53:29 by afrantzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = -1;
	if (!s || !f)
		return ;
	while (s[++i] != '\0')
		f(i, &s[i]);
}
