/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:17:16 by hjung             #+#    #+#             */
/*   Updated: 2021/03/18 12:40:24 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void)
{
	Form 		*f1;
	try
	{
		f1 = new Form("f1", 0, 10);
	}
	catch(const std::exception &e)
	{
		std::cout<<e.what()<<'\n';
	}

	Bureaucrat	b("b", 50);
	Form 		f2("f2", 60, 10);	//b can sign
	Form 		f3("f3", 40, 10);	//b cannot sign
	try
	{
		b.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		b.signForm(f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
    return 0;
}