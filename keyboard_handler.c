#include "cub.h"

 int	key_press(int key, t_game_data *press)
{
	if (key == KEY_W)
	press->first_person.move_y = 5;
	if (key == KEY_S)
		press->first_person.move_y = -5;
	if (key == KEY_A)
		press->first_person.move_x = -5;
	if (key == KEY_D)
		press->first_person.move_x = 5;
	if (key == KEY_LEFT)
		press->first_person.rotate -= 5;
	if (key == KEY_RIGHT)
		press->first_person.rotate += 5;
	// if (key == KEY_ESC)
	// 	//finish_program(press);
	return (0);
}



 int	reset_keyPress_flags(int key, t_game_data *press)
{
	if (key == KEY_ESC)
		//finish_program(press);
	if (key == KEY_W && press->first_person.move_y == 5)
		press->first_person.move_y = 0;
	if (key == KEY_S && press->first_person.move_y == -5)
		press->first_person.move_y = 0;
	if (key == KEY_A && press->first_person.move_x == -5)
		press->first_person.move_x += 5;
	if (key == KEY_D && press->first_person.move_x == 5)
		press->first_person.move_x -= 5;
	if (key == KEY_LEFT && press->first_person.rotate <= 5)
		press->first_person.rotate = 0;
	if (key == KEY_RIGHT && press->first_person.rotate >= -5)
		press->first_person.rotate = 0;
	return (0);
}


void	setup_input_hooks(t_game_data *data)
{
	mlx_hook(data->win, ClientMessage, NoEventMask, finish_program, data);
	mlx_hook(data->win, KeyPress, KeyPressMask, key_press, data);
	mlx_hook(data->win, KeyRelease, KeyReleaseMask, reset_keyPress_flags, data);
}



