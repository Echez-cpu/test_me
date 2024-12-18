int	update_graphics(t_game_data *data)
{
	data->fisrt_person.moved += move_player(data);
	if (data->first_person.moved == 0)
		return (0);
	draw_graphics(data);
	return (0);
}


void	draw_graphics(t_game_data *data)
{
	allocate_pixel_memory(data);
	zero_out_ray(&data->ray);
	generate_rays(&data->first_person, data);
	render_frame(data);
}


void	allocate_pixel_memory(t_game_data *data)
{
	int	i;

	if (data->texture_pixels)
		free_tab((void **)data->texture_pixels);
	data->texture_pixels = ft_calloc(data->win_height + 1,
			sizeof * data->texture_pixels);
	if (!data->texture_pixels)
		//clean and exit.
	i = 0;
	while (i < data->win_height)
	{
		data->texture_pixels[i] = ft_calloc(data->win_width + 1,
				sizeof * data->texture_pixels);
		if (!data->texture_pixels[i])
			//clean and exit
			i++;
	}
}
