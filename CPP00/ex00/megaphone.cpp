/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:08:35 by hjung             #+#    #+#             */
/*   Updated: 2021/02/16 14:11:01 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	return ((c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << ft_toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << '\n';
	return (0);
}