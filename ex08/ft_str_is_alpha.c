/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:43:36 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/24 10:43:39 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < 'a' || str[i] > 'z'))
            return (0);
        ++i;
    }
    
    return (1);
}
