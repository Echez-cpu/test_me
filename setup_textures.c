// #include "cub.h"



// void	configure_textures(t_game_data *data)
// {
// 	data->textures = ft_calloc(5, sizeof * data->textures);
// 	if (!data->textures)
// 		// clean and exit
// 	data->textures[NORTH] = get_texture_from_xpm(data, data->texinfo.north);
// 	data->textures[SOUTH] = get_texture_from_xpm(data, data->texinfo.south);
// 	data->textures[EAST] = get_texture_from_xpm(data, data->texinfo.east);
// 	data->textures[WEST] = get_texture_from_xpm(data, data->texinfo.west);
// }


//  int	*get_texture_from_xpm(t_game_data *data, char *path)
// {
// 	t_img	tmp;
// 	int		*buffer;
// 	int		x;
// 	int		y;

// 	init_texture_img(data, &tmp, path);
// 	buffer = ft_calloc(1,
// 			sizeof * buffer * data->texinfo.size * data->texinfo.size);
// 	if (!buffer)
// 		// clean and exit
// 	y = 0;
// 	while (y < data->texinfo.size)
// 	{
// 		x = 0;
// 		while (x < data->texinfo.size)
// 		{
// 			buffer[y * data->texinfo.size + x]
// 				= tmp.address[y * data->texinfo.size + x];
// 			++x;
// 		}
// 		y++;
// 	}
// 	mlx_destroy_image(data->mlx, tmp.img);
// 	return (buffer);
// }
