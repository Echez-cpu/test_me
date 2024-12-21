
static int	key_press(int key, t_game_data *press)
{
	if (key == KEY_W)
	press->player.move_y = 5;
	if (key == KEY_S)
		press->player.move_y = -5;
	if (key == KEY_A)
		press->first_person.move_x = -5;
	if (key == KEY_D)
		press->first_person.move_x = 5;
	if (key == KEY_LEFT)
		press->first_person.rotate -= 5;
	if (key == KEY_RIGHT)
		press->first_person.rotate += 5;
	if (key == KEY_ESC)
		quit_progm(press);
	return (0);
}





