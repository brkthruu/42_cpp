/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:56:24 by hjung             #+#    #+#             */
/*   Updated: 2021/03/18 13:12:28 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main(void)
{
	ShrubberyCreationForm	shru("42 cluster");					//145, 137
	Bureaucrat				suit1("Mr.Suit", 130);
	suit1.signForm(shru);
	suit1.executeForm(shru);

	std::cout<<"=======================================\n";
	RobotomyRequestForm robo("dog");							//72, 45
	Bureaucrat			suit2("Ms.Suit", 50);
	suit2.signForm(robo);
	suit2.executeForm(robo);

	std::cout<<"=======================================\n";
	PresidentialPardonForm pres("VIP");							//25, 5
    Bureaucrat suit3("secretaty", 30);
    suit3.signForm(pres);
    suit3.executeForm(pres);
}