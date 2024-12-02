/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:48:29 by jomendes          #+#    #+#             */
/*   Updated: 2024/12/02 18:11:52 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>




typedef struct s_map
{
	char	**matrix;
	char	**matrix_ff;
	int		x;
	int		y;
}		t_map;

typedef struct s_voidcollector
{
	t_map	map;
}				t_vc;

//main.c
t_vc	*get_data();

// free.c
void	error(char *str);

//map.c
int		check_name(char	*str);
int		check_args(int ac, char **av);
int		map_heigth(char *file);
char	**get_map(char *file, t_map *map);

#endif
