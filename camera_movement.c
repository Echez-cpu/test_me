
int	camera_spin(t_game_data *data)
{
	int	moved;

	moved = 0;
	if (data->first_person.move_y == 1)
		moved += move_player_forward(data);
	if (data->first_person.move_y == -1)
		moved += move_player_backward(data);
	if (data->first_person.move_x == -1)
		moved += move_player_left(data);
	if (data->first_person.move_x == 1)
		moved += move_player_right(data);
	if (data->first_person.rotate != 0)
		moved += rotate_player(data, data->first_person.rotate);
	return (moved);
}
