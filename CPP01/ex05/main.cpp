/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 06:01:22 by hjung             #+#    #+#             */
/*   Updated: 2021/02/26 12:49:15 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}