/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:09:52 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 17:39:55 by athiebau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fill the grd without row reptition or cloumn repetition
int	is_duplicated(int tab[4][4], int pos, int num)
{
	int	i;
//check if the part of th row that has already been filled has the new number already
	i = -1;
	while (i++ < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);

//check if the part of column that has been filled has the new nuber already
	i = -1;
	while (i++ < pos % 4)
		if(tab[pos / 4][i] == num)
			return (1);
	return (0);
}

//check if the entry arguments corespond to the grid
int	entry_check( int tab[4][4], int pos, int entry[16])
{
	if (check_rowleft(tab, pos, entry) == 1)
		return (1);
	if (check_rowright(tab, pos, entry) == 1)
		return(1);
	if (check_colup(tab, pos, entry) == 1)
		return (1);
	if (check_coldown(tab, pos, entry) ==1)
		return (1);
	return (0)
}

int	check_rowleft(int tab[4][4], int pos, int entry[16])
{ //i est un index pour verifier toute la ligne, max est la caisse la plus haute, count est le nombre de caisses //visibles.
	int	i;
	int	max;
	int	count;
	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3) //verifier que a colonne soit remplis
	{
		while (i < 4) //iteration ligne
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry [8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	checkrow_right(int tab[4][4], int pos, in entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 0)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4])
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_colup(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos % 4][i])
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[0 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_coldown(int tab[4][4], int pos, int entry[16]);
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 0)
	{
		while (i < 4)
		{
			if (tab[pos % 4][i])
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[4 + pos / 4] != count)
			return (1);
	}
	return (0);
}
