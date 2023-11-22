#include "../incs/cub3d.h"

void	move_up( t_game *game )
{
	double	moved_x;
	double	moved_y;

	moved_x = game->player_data->pos_x + game->player_data->dir_x * move_speed;
	moved_y = game->player_data->pos_y + game->player_data->dir_y * move_speed;
	if (game->map_data->map[(int)moved_y][(int)game->player_data->pos_x] != '1')
		game->player_data->pos_y = moved_y;
	if (game->map_data->map[(int)game->player_data->pos_y][(int)moved_x] != '1')
		game->player_data->pos_x = moved_x;
}

void	move_back( t_game *game )
{
	double	moved_x;
	double	moved_y;

	moved_x = game->player_data->pos_x - game->player_data->dir_x * move_speed;
	moved_y = game->player_data->pos_y - game->player_data->dir_y * move_speed;
	if (game->map_data->map[(int)moved_y][(int)game->player_data->pos_x] != '1')
		game->player_data->pos_y = moved_y;
	if (game->map_data->map[(int)game->player_data->pos_y][(int)moved_x] != '1')
		game->player_data->pos_x = moved_x;
}

void	move_left( t_game *game )
{
	double	moved_x;
	double	moved_y;

	moved_x = game->player_data->pos_x + game->player_data->dir_y * move_speed;
	moved_y = game->player_data->pos_y - game->player_data->dir_x * move_speed;
	if (game->map_data->map[(int)moved_y][(int)game->player_data->pos_x] != '1')
		game->player_data->pos_y = moved_y;
	if (game->map_data->map[(int)game->player_data->pos_y][(int)moved_x] != '1')
		game->player_data->pos_x = moved_x;
}

void	move_right( t_game *game )
{
	double	moved_x;
	double	moved_y;

	moved_x = game->player_data->pos_x - game->player_data->dir_y * move_speed;
	moved_y = game->player_data->pos_y + game->player_data->dir_x * move_speed;
	if (game->map_data->map[(int)moved_y][(int)game->player_data->pos_x] != '1')
		game->player_data->pos_y = moved_y;
	if (game->map_data->map[(int)game->player_data->pos_y][(int)moved_x] != '1')
		game->player_data->pos_x = moved_x;
}