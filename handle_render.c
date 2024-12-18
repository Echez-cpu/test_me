int	update_graphics(t_game_data *data)
{
	data->fisrt_person.moved += move_player(data);
	if (data->first_person.moved == 0)
		return (0);
	draw_graphics(data);
	return (0);
}
