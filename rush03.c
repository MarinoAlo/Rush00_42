/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efunes-c <marinoal@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:45:07 by efunes-c          #+#    #+#             */
/*   Updated: 2025/02/23 13:28:39 by efunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	chess(int row, int col, int maxr, int maxc)
{
	if ((row == 0 && col == 0) || (row == maxr - 1 && col == 0))
	{
		ft_putchar('A');
	}
	else if (row == 0 && col == maxc - 1)
	{
		ft_putchar('C');
	}
	else if (row == maxr - 1 && col == maxc - 1)
	{
		ft_putchar('C');
	}
	else if ((row == 0) || (row == maxr - 1) || (col == 0) || (col == maxc - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (y <= 0 || x <= 0)
		ft_putchar('-');
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			chess(row, col, y, x);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
