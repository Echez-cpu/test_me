int generate_rays(t_field_of_view *camera, t_game_data *data)
{
	t_cast_ray view_ray;
	int		i;

	i = 0;
	view_ray = data->ray;
	while (i < data->win_width)
	{
		fill_raycastg_para(x, &view_ray, camera);
		initialize_ray_traversal(&view_ray, camera);
		step_through_grid(data, &view_ray);
		compute_wall_visualization(&view_ray, data, camera);
		update_texture_pixels(data, &data->texinfo, &view_ray, i);
		i++;
	}
	return (SUCCESS);
}
