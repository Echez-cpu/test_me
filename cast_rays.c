int generate_rays(t_field_of_view *camera, t_game_data *data)
{
	t_ray	ray;
	int		x;

	x = 0;
	ray = data->ray;
	while (x < data->win_width)
	{
		fill_raycastg_para(x, &ray, camera);
		initialize_ray_traversal(&ray, camera);
		perform_dda(data, &ray);
		calculate_line_height(&ray, data, camera);
		update_texture_pixels(data, &data->texinfo, &ray, x);
		x++;
	}
	return (SUCCESS);
}
