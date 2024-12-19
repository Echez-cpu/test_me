void	setup_game_state(t_data *data)
{
	data->mlx = NULL;
	data->win = NULL;
	data->win_height = WIN_HEIGHT;
	data->win_width = WIN_WIDTH;
	init_player(&data->player);
	init_texinfo(&data->texinfo);
	data->map = NULL;
	init_mapinfo(&data->mapinfo);
	init_img_clean(&data->minimap);
	data->texture_pixels = NULL;
	data->textures = NULL;
}
