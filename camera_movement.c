
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



 int	propel_forward(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x + data->first_person.dir_x * MOVESPEED;
	j = data->first_person.pos_y + data->first_person.dir_y * MOVESPEED;
	return (validate_move(data, i, j));
}



 int	propel_backward(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x - data->first_person.dir_x * MOVESPEED;
	j = data->first_person.pos_y - data->first_person.dir_y * MOVESPEED;
	return (validate_move(data, i, j));
}


 int	glide_left(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x + data->first_person.dir_y * MOVESPEED;
	j = data->first_person.pos_y - data->first_person.dir_x * MOVESPEED;
	return (validate_move(data, i, j));
}



 int	glide_right(t_game_data *data)
{
	double	i;
	double	j;

	i = data->first_person.pos_x - data->first_person.dir_y * MOVESPEED;
	j = data->first_person.pos_y + data->first_person.dir_x * MOVESPEED;
	return (validate_move(data, i, j));
}


int	rotate_camera(t_game_data *data, double rotdir)
{
	int		shifted;
	double	turn_rate;

	shifted = 0;
	turn_rate = ROTSPEED * rotdir;
	shifted += apply_turn(data, turn_rate);
	return (shifted);
}


 int	apply_turn(t_data *data, double rotspeed)
{
	t_player	*p;
	double		tmp_x;

	p = &data->player;
	tmp_x = p->dir_x;
	p->dir_x = p->dir_x * cos(rotspeed) - p->dir_y * sin(rotspeed);
	p->dir_y = tmp_x * sin(rotspeed) + p->dir_y * cos(rotspeed);
	tmp_x = p->plane_x;
	p->plane_x = p->plane_x * cos(rotspeed) - p->plane_y * sin(rotspeed);
	p->plane_y = tmp_x * sin(rotspeed) + p->plane_y * cos(rotspeed);
	return (1);
}







