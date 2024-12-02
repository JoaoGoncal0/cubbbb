/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:49:19 by jomendes          #+#    #+#             */
/*   Updated: 2024/12/02 18:17:54 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

t_vc	*get_data()
{
	static t_vc data;

	return (&data);
}

void	init_map(char *file)
{
	t_map	map;
	t_vc	*data;

	data = get_data();
	
	map.matrix = get_map(file, &map);
	map.matrix_ff = get_map(file, &map);
	data->map = map;
}

int main(int ac, char **av)
{
	t_vc *data = get_data();

	if (!check_args(ac, av))
		return (0);
	init_map(av[1]);
	printf("CUBZAO\n");
	return (0);
}