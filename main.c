


int	main(int argc, char **argv)
{
	t_game_data	data;

	1 if (argc != 2)
	//	return (error_message));
	
     setup_game_state(&data);

  3 //A function that processes the map file passed as argv[1].
 //function that processes the map file passed as argv[1].
//It opens and reads the map file.
//Verifies that the map adheres to rules (e.g., surrounded by walls, valid characters).
//Updates data with map data (grid layout, dimensions, etc.)
  
 initialize_mlx(&data);
  
 configure_textures(&data);
 draw_graphics(&data);
//Performs the initial render of the game view.
//Casts rays for every column of pixels on the screen.
//Draws walls, ceilings, and floors based on the player’s current position and direction.
//The rendered image may be stored in an off-screen buffer.	
  
  //Sets up hooks or listeners for player input (e.g., keyboard or mouse events).
    
  mlx_loop_hook(data.mlx, update_graphics, &data);
	mlx_loop(data.mlx);
	return (0);
}
