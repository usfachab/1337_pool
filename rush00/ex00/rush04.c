/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:01:19 by yachaab           #+#    #+#             */
/*   Updated: 2022/06/13 16:06:12 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col_max, int row_max)
{
	int	row;
	int	col;

	row = 1;
	while (row <= row_max)
	{
		col = 1;
		while (col <= col_max)
		{
			if ((row == 1 && col == col_max)
				|| (row == row_max && col == 1))
				ft_putchar('C');
			else if ((row == 1 && col == 1)
				|| (row == row_max && col == col_max))
				ft_putchar('A');
			else if ((row == 1 || row == row_max)
				|| (col == 1 || col == col_max))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
