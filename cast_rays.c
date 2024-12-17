int generate_rays(t_field_of_view *camera, t_game_data *data)
{
	t_cast_ray ray;
	int		i;

	i = 0;
	ray = data->ray;
	while (i < data->win_width)
	{
		fill_raycastg_para(x, &ray, camera);
		initialize_ray_traversal(&ray, camera);
		step_through_grid(data, &ray);
		calculate_line_height(&ray, data, camera);
		update_texture_pixels(data, &data->texinfo, &ray, x);
		i++;
	}
	return (SUCCESS);
}
