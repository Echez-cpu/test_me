
void	setup_image(t_game_data *data, t_img *image, int width, int height)
{
	reset_img_struct(image);
	image->img = mlx_new_image(data->mlx, width, height);
	if (image->img == NULL)
		// clean and exit
	image->addr = (int *)mlx_get_data_addr(image->img, &image->pixel_bits,
			&image->size_line, &image->endian);
	return ;
}


void	reset_img_struct(t_img *img)
{
	img->img = NULL;
	img->addr = NULL;
	img->pixel_bits = 0;
	img->size_line = 0;
	img->endian = 0;
}
