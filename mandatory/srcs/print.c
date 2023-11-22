/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristinasansegundo <cristinasansegundo@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:08:17 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/17 18:38:28 by cristinasan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/cub3d.h"

void	print_2dstr( char **str )
{
	int	i;

	i = -1;
	if (!str)
		return ;
	while (str[++i])
		printf("<%s>\n", str[i]);
}

void	print_player(t_game *game)
{
	t_player	*player = game->player_data;
	printf("pos_x = %f\npos_y = %f\ndir_x = %f\ndir_y = %f\nplane_x = %f\nplane_y = %f\n", player->pos_x, player->pos_y, player->dir_x, player->dir_y, player->plane_x, player->plane_y);
}