/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:48 by hjung             #+#    #+#             */
/*   Updated: 2021/06/20 00:15:36 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main(void)
{
	std::cout << "===== create empty array =====" << std::endl;
	Array<int>	arr;
	try
	{
		std::cout << arr[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}
	
	std::cout << "\n===== create specific size of array =====" << std::endl;
	Array<int>	arr1(10);

	for(int i=0; i<10 ; i++)
		arr1[i] = i;
	for(int i=0; i<10 ; i++)
		std::cout << arr1[i] << ' ';
	std::cout << '\n';
	
	std::cout << "size : " << arr1.size() << '\n';

	try
	{
		arr1[10] = 10;
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}

	std::cout << "\n===== copied array test =====" << std::endl;
	Array<char>	arr_original(3);
	
	arr_original[0] = 'A';
	arr_original[1] = 'B';
	arr_original[2] = 'C';

	Array<char> arr_copied(arr_original);
	
	std::cout<< "<< before >>" << std::endl;
	std::cout<< "arr_original[1] :" << arr_original[1] <<std::endl;
	std::cout<< "arr_copied[1] :" << arr_copied[1] <<std::endl;

	arr_copied[1] = 'Z';
	std::cout<< "<< after >>" << std::endl;
	std::cout<< "arr_original[1] :" << arr_original[1] <<std::endl;
	std::cout<< "arr_copied[1] :" << arr_copied[1] <<std::endl;

	std::cout << "\n===== assignment operator array test =====" << std::endl;

	Array<std::string> strArr_original(3);

	strArr_original[0] = "Seoul";
	strArr_original[1] = "Busan";
	strArr_original[2] = "JeJu";

	Array<std::string> strArr_assigned = strArr_original;
	
	std::cout<< "<< before >>" << std::endl;
	std::cout<< "strArr_original[0] :" << strArr_original[0] <<std::endl;
	std::cout<< "strArr_assigned[0] :" << strArr_assigned[0] <<std::endl;

	strArr_assigned[0] = "Paris";
	std::cout<< "<< after >>" << std::endl;
	std::cout<< "strArr_original[0] :" << strArr_original[0] <<std::endl;
	std::cout<< "strArr_assigned[0] :" << strArr_assigned[0] <<std::endl;
	
	std::cout << "\n===== const class test =====" << std::endl;
	
	const Array<double> arr3(3);

	for(unsigned int i = 0; i < arr3.size() ; i++)
		std::cout<< arr3[i] << '\n';
	std::cout<<'\n';

	return (0);
}