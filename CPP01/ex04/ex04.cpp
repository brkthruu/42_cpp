/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 05:41:55 by hjung             #+#    #+#             */
/*   Updated: 2021/02/27 19:53:28 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << std::setw(13) << "[ORIGIN] " << str << " :: " << &str << '\n';
	std::cout << std::setw(13) << "[Pointer] " << *ptr << " :: " << ptr << '\n';
	std::cout << std::setw(13) << "[Reference] " << ref << " :: " << &ref << '\n';
}