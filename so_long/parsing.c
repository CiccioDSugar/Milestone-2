/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:17:41 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/02/17 14:48:30 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_count_line(t_map *map)
{
	char	*line;
	int		i;
	int		fd;

	i = 0;
	fd = open(map->arg, O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		if (line[0] != '\n' && line[0] != '\0')
			i++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (i);
}

static int	ft_check(char **line)
{
	if (!*line || *line[0] == '\n' || *line[0] == '\0')
	{
		free(*line);
		return (1);
	}
	return (0);
}

int	ft_check_len_line(int len_line1, int count_line, t_map *map)
{
	char	*line;
	char	*trim_line;
	int		len_line;
	int		i;
	int		fd;

	i = 0;
	fd = open(map->arg, O_RDONLY);
	while (i++ < count_line)
	{
		line = get_next_line(fd);
		if (ft_check(&line) == 1)
			break ;
		trim_line = ft_strtrim(line, "\n");
		len_line = (int)ft_strlen(trim_line);
		if (len_line1 != len_line)
		{
			close(fd);
			return (free(line), free(trim_line), -1);
		}
		free(trim_line);
		free(line);
	}
	close(fd);
	return (len_line);
}

int	ft_parsing(t_map *map)
{
	char	*line;
	char	*trim_line;
	int		len_line1;
	int		fd;

	len_line1 = 0;
	fd = open(map->arg, O_RDWR);
	if (fd < 0)
		return (ft_printf("Error\nErrore, impossibile aprire il file"), -1);
	line = get_next_line(fd);
	if (!line || line[0] == '\n' || line[0] == '\0')
	{
		close(fd);
		return (free(line), ft_printf("Error\nLa mappa non esiste"), -1);
	}
	trim_line = ft_strtrim(line, "\n");
	len_line1 = (int)ft_strlen(trim_line);
	free(line);
	free(trim_line);
	close(fd);
	map->count_line = ft_count_line(map);
	map->line_len = ft_check_len_line(len_line1, map->count_line, map);
	if (map->line_len == -1)
		return (ft_printf("Error\nError len line"), -1);
	return (ft_printf("La mappa e' rettangolare\n"), map->count_line);
}

/*
int main()
{
	t_map	map;
	ft_parsing(&map);
}
 */
