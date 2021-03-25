/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:48 by hjung             #+#    #+#             */
/*   Updated: 2021/03/25 09:09:12 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main(void)
{
	Array<int>	arr1(10);
	
	for(int i=0; i<10 ; i++)
		arr1[i] = i;
	
	for(int i=0; i<10 ; i++)
		std::cout<<arr1[i]<<' ';
	std::cout<<'\n';
	
	std::cout<< "size : " << arr1.size() << '\n';

	try
	{
		arr1[10] = 10;
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}

	Array<char>	arr2(0);
	
	try
	{
		std::cout<<arr2[0];
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}

	Array<double> const arr3(3);
	
	for(int i=0; i<3 ; i++)
		std::cout<<arr3[i]<<' ';
	std::cout<<'\n';
}