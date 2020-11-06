/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:39:44 by fcarvalh          #+#    #+#             */
/*   Updated: 2020/11/06 19:40:03 by fcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define SIZE 10
#define ASCII_OFFSET 48

void	print(int board[])
{
	int		i;
	char	number;

	i = 0;
	while (i < SIZE)
	{
		number = board[i++] + ASCII_OFFSET;
		write(1, &number, 1);
	}
	write(1, "\n", 1);
}

int		is_alone_row(int board[], int row)
{
	int c;

	c = 0;
	while (c < SIZE)
		if (board[c++] == row)
			return (0);
	return (1);
}

int		is_alone_diag(int board[], int row, int column)
{
	int diag_top;
	int diag_bottom;
	int c;

	c = 0;
	while (c < SIZE)
	{
		diag_top = row - column + c;
		diag_bottom = row + column - c;
		if (0 <= diag_top && diag_top < SIZE && board[c] == diag_top)
			return (0);
		else if (0 <= diag_bottom && diag_bottom < SIZE &&
				board[c] == diag_bottom)
			return (0);
		c++;
	}
	return (1);
}

int		is_valid(int board[], int column, int *solution_count)
{
	int i;

	if (column == SIZE)
	{
		print(board);
		*solution_count += 1;
		return (0);
	}
	i = 0;
	while (i < SIZE)
	{
		if (is_alone_row(board, i) && is_alone_diag(board, i, column))
		{
			board[column] = i;
			if (is_valid(board, column + 1, solution_count))
				return (1);
		}
		i++;
	}
	board[column] = -1;
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int	board[SIZE];
	int i;
	int	solution_count;

	i = 0;
	while (i < SIZE)
		board[i++] = -1;
	solution_count = 0;
	is_valid(board, 0, &solution_count);
	return (solution_count);
}
