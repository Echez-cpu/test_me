
int	camera_spin(t_game_data *data)
{
	int	moved;

	moved = 0;
	if (data->first_person.move_y == 1)
		moved += propel_forward(data);
	if (data->first_person.move_y == -1)
		moved += propel_backward(data);
	if (data->first_person.move_x == -1)
		moved += glide_left(data);
	if (data->first_person.move_x == 1)
		moved += glide_right(data);
	if (data->first_person.rotate != 0)
		moved += rotate_camera(data, data->first_person.rotate);
	return (moved);
}



static int	propel_forward(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x + data->first_person.dir_x * MOVESPEED;
	j = data->first_person.pos_y + data->first_person.dir_y * MOVESPEED;
	return (validate_move(data, i, j));
}



static int	propel_backward(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x - data->first_person.dir_x * MOVESPEED;
	j = data->first_person.pos_y - data->first_person.dir_y * MOVESPEED;
	return (validate_move(data, i, j));
}


static int	glide_left(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x + data->first_person.dir_y * MOVESPEED;
	j = data->first_person.pos_y - data->first_person.dir_x * MOVESPEED;
	return (validate_move(data, i, j));
}



static int	glide_right(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x - data->first_person.dir_y * MOVESPEED;
	j = data->first_person.pos_y + data->first_person.dir_x * MOVESPEED;
	return (validate_move(data, i, j));
}

