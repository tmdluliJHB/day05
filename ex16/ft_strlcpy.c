/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:46:50 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/24 10:46:54 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int j;
    int size_temp;

    i = 0;
    j = 0;
    size_backup = size;
    while (size > 1 && (dest[i] = src[i]) != 0)
    {
        dest[i] = src[i];
        --size;
        ++i;
    }
    
    if (size_temp != 0)
    {
        dest[i] = '\0';
        while (src[j])
            ++j;
    }
    
    return (j);
}
