/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:08:08 by inunez-g          #+#    #+#             */
/*   Updated: 2023/11/22 15:27:57 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/cub3d.h"

/*
 * 
 */
int	main( int argc, char **argv )
{
	t_game	game;

	if (argc == 2)
	{
		init(&game);
		game.mlx_data->mlx = mlx_init();
		get_map(argv[1], &game);
		get_textures(&game);
		//process_game(&game);
		return (1);
	}
	process_error(INVALID_PARAMS, &game);
	return (0);
}