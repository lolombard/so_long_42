/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   etravers_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llombard <llombard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:00:21 by llombard          #+#    #+#             */
/*   Updated: 2023/04/14 16:44:03 by llombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ebro(t_vb *tat)
{
	char	*passi;
	char	*cc;

	cc = ft_itoa(tat->cc);
	passi = ft_itoa(tat->trav);
	image_to_win(tat, 0);
	mlx_string_put (tat->mlx, tat->mlx_win, 20, 10, 0xff0000, passi);
	mlx_string_put (tat->mlx, tat->mlx_win, 40, 10, 0x0000ff, cc);
	free(cc);
	free(passi);
}

void	cexit(t_vb *tat, char **map, t_cord p_p)
{
	check_flood(map, tat, p_p);
	ctr(tat, map);
}

void	cveloce(t_vb *tat, int p, int e)
{
	if (p != 1 || e != 1)
	{
		ft_error(tat);
	}
}

void	check_flood_logic_x(t_vb *tat, t_cord p, t_cord p_p, int mod)
{
	p.x = p_p.x + mod;
	p.y = p_p.y;
	check_flood(tat->tempura, tat, p);
}

void	check_flood_logic_y(t_vb *tat, t_cord p, t_cord p_p, int mod)
{
	p.x = p_p.x;
	p.y = p_p.y + mod;
	check_flood(tat->tempura, tat, p);
}
