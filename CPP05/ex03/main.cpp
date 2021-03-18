/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:26:54 by hjung             #+#    #+#             */
/*   Updated: 2021/03/18 13:37:21 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int     main(void)
{
	Intern a, b, c, d;
	Bureaucrat boss = Bureaucrat("boss", 1);

	std::cout<<"===================================\n";
	Form *f1 = a.makeForm("shrubbery creation", "42 cluster");
	boss.signForm(*f1);
	boss.executeForm(*f1);

	std::cout<<"===================================\n";
	Form *f2 = b.makeForm("robotomy request", "dog");
	boss.signForm(*f2);
	boss.executeForm(*f2);

	std::cout<<"===================================\n";
	Form *f3 = c.makeForm("presidential pardon", "VIP");
	boss.signForm(*f3);
	boss.executeForm(*f3);

	std::cout<<"===================================\n";
	try
	{
		d.makeForm("Something", "NULLTarget");
	}
	catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

	delete f1;
	delete f2;
	delete f3;

    return (0);    
}