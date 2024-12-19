void	setup_game_state(t_game_data *data)
{
	data->mlx = NULL;
	data->win = NULL;
	data->win_height = WIN_HEIGHT;
	data->win_width = WIN_WIDTH;
	init_camera(&data->first_person);
	init_txtureinfo(&data->texinfo);
	data->map = NULL;
	init_mapinfo(&data->mapinfo);
	init_img_clean(&data->minimap);
	data->texture_pixels = NULL;
	data->textures = NULL;
}


static void	init_camera(t_field_of_view *cam)
{
	cam->dir = '\0';
	cam->pos_x = 0.0;
	cam->pos_y = 0.0;
	cam->dir_x = 0.0;
	cam->dir_y = 0.0;
	cam->plane_x = 0.0;
	cam->plane_y = 0.0;
	cam->moved = 0;
	cam->move_x = 0;
	cam->move_y = 0;
	cam->rotate = 0;
}



void	init_txtureinfo(t_texinfo *textures)
{
	textures->north = NULL;
	textures->south = NULL;
	textures->west = NULL;
	textures->east = NULL;
	textures->floor = 0;
	textures->ceiling = 0;
	textures->hex_floor = 0x0;
	textures->hex_ceiling = 0x0;
	textures->size = TEXTURE_SIZE;
	textures->step = 0.0;
	textures->pos = 0.0;
	textures->x = 0;
	textures->y = 0;
}
