#include "cub.h"


void	init_player_north_south(t_field_of_view *player)
{
	if (player->dir == 'S')
	{
		player->dir_x = 0;
		player->dir_y = 1;
		player->plane_x = -0.66;
		player->plane_y = 0;
	}
	else if (player->dir == 'N')
	{
		player->dir_x = 0;
		player->dir_y = -1;
		player->plane_x = 0.66;
		player->plane_y = 0;
	}
	else
		return ;
}



void	init_player_east_west( t_field_of_view *player)
{
	if (player->dir == 'W')
	{
		player->dir_x = -1;
		player->dir_y = 0;
		player->plane_x = 0;
		player->plane_y = -0.66;
	}
	else if (player->dir == 'E')
	{
		player->dir_x = 1;
		player->dir_y = 0;
		player->plane_x = 0;
		player->plane_y = 0.66;
	}
	else
		return ;
}




void	init_player_direction(t_game_data *data)
{
	init_player_north_south(&data->first_person);
	init_player_east_west(&data->first_person);
}





int	main(int argc, char **argv)
{
	t_game_data	data;
	t_info	info;

	if (argc != 2)
	{
		ft_putendl_fd("Error: Invalid number of arguments\n", 2);
		return (1);
	}
	   
	   
	//setup_game_state(&data);

	// if (set_info(&info, argv[1]) == 1 || validity_check(&info) == 1)
	// {
	// 	free_all(&info);
	// 	return (1);
	// }

  initialize_mlx(&data);
  init_player_direction(&data);
   //configure_textures(&data);
   draw_graphics(&data);
   setup_input_hooks(&data);
    
   mlx_loop_hook(data.mlx, update_graphics, &data);
	mlx_loop(data.mlx);
	return (0);
}
