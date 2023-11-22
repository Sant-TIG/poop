#include "../incs/cub3d.h"
#include <math.h>

static int	end_game(t_game *game)
{
	mlx_destroy_image(game->mlx_data->mlx, game->textures_data->no->img);
	mlx_destroy_image(game->mlx_data->mlx, game->textures_data->so->img);
	mlx_destroy_image(game->mlx_data->mlx, game->textures_data->ea->img);
	mlx_destroy_image(game->mlx_data->mlx, game->textures_data->we->img);
	mlx_clear_window(game->mlx_data->mlx, game->mlx_data->window);
	mlx_destroy_window(game->mlx_data->mlx, game->mlx_data->window);
	general_free(game);
	exit(1);
}

static int	process_keycode(int keycode, t_game *game)
{
	if (keycode == 13)
		move_up(&game);
	else if (keycode == 1)
		move_back(&game);
	else if (keycode == 0)
		move_left(&game);
	else if (keycode == 2)
		move_right(&game);
	else if (keycode == 123)
		move_cam_right(game);
	else if (keycode == 124)
		move_cam_left(game);
	else if (keycode == 53)
		ft_end_game(game);
	return (0);
}



void	process_game( t_game *game )
{
	game->mlx_data->mlx = mlx_init();
	game->mlx_data->window = mlx_new_window(game->mlx_data->mlx, WIDTH, HEIGHT, "cub3d");
	game->mlx_data->img = mlx_new_image(game->mlx_data->mlx, WIDTH, HEIGHT);
	game->mlx_data->addr = mlx_get_data_addr(game->mlx_data->img, &game->mlx_data->bits_per_pixel, &game->mlx_data->line_length, &game->mlx_data->endian);
	mlx_loop_hook(game->mlx_data->mlx, raycasting, game);
	mlx_hook(game->mlx_data->window, 2, 1L << 0, process_keycode, game);
	mlx_hook(game->mlx_data->window, 17, 1L << 17, end_game, game);
	mlx_loop(game->mlx_data->mlx);
}