/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:55:23 by rnovodra          #+#    #+#             */
/*   Updated: 2018/06/28 13:55:25 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/ft_printf.h"

void			ft_print_buff(t_data *d)
{
	write(1, d->buff, d->buff_i);
	d->ret += d->buff_i;
	d->buff_i = 0;
}
