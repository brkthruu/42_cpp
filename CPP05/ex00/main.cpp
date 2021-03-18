/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:35:36 by hjung             #+#    #+#             */
/*   Updated: 2021/03/18 12:10:51 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
	Bureaucrat A("A", 1);

	std::cout<<A;
	try
    {
        A.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

	Bureaucrat *B;
	try
	{
		B = new Bureaucrat("B", 151);
		std::cout << *B;
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}

	Bureaucrat *C;
	try
	{
		C = new Bureaucrat("C", 15);
		std::cout << *C;
	}
	catch(const std::exception& e)
	{
		std::cout<<e.what()<<'\n';
	}

    return 0;
}