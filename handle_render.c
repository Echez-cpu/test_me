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
	init_texture_pixels(data);
	zero_out_ray(&data->ray);
	raycasting(&data->player, data);
	render_frame(data);
}
