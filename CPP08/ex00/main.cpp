/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:18:15 by hjung             #+#    #+#             */
/*   Updated: 2021/03/25 18:19:39 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int     main(void)
{
	std::vector<int>	vec1(5);
	std::vector<char>	vec2(5);

	for(unsigned int i=0; i<vec1.size(); i++)
		vec1[i] = i+1;

	for(unsigned int i=0; i<vec2.size(); i++)
		vec2[i] = 'a'+i;
	
	try
	{
		easyfind(vec1, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		easyfind(vec1, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		easyfind(vec2, 'a');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		easyfind(vec2, 'z');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}