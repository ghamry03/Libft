/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:02:51 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/29 03:43:25 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_memset.c"

/*
* does the same thing as memset but replace it with NULL
* you can use it as a safety option to hide sensitive data
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
