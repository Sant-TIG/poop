# include "../incs/cub3d.h"

void    right_move( t_raycast *ray, t_game *game )
{
    double  old_dir_x;
    double  old_plane_x;

    old_dir_x = game->player_data->dir_x;
    game->player_data->dir_x = game->player_data->dir_x * cos(-rot_speed) - game->player_data->dir_y * sin(-rot_speed);
    game->player_data->dir_y = old_dir_x * sin(-rot_speed) + game->player_data->dir_y * cos(-rot_speed);
    old_plane_x = game->player_data->plane_x;
    game->player_data->plane_x = game->player_data->plane_x * cos(-rot_speed) - game->player_data->plane_y * sin (-rot_speed);
    game->player_data->plane_y = old_plane_x * sin(-rot_speed) + game->player_data->plane_y * cos(-rot_speed);
    
}

void    left_move( t_raycast *ray, t_game *game )
{
    double  old_dir_x;
    double  old_plane_x;

    old_dir_x = game->player_data->dir_x;
    game->player_data->dir_x = game->player_data->dir_x * cos(rot_speed) - game->player_data->dir_y * sin(rot_speed);
    game->player_data->dir_y = old_dir_x * sin(rot_speed) + game->player_data->dir_y * cos(rot_speed);
    old_plane_x = game->player_data->plane_x;
    game->player_data->plane_x = game->player_data->plane_x * cos(rot_speed) - game->player_data->plane_y * sin (rot_speed);
    game->player_data->plane_y = old_plane_x * sin(rot_speed) + game->player_data->plane_y * cos(rot_speed);
    
}