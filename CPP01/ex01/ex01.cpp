/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:12:57 by hjung             #+#    #+#             */
/*   Updated: 2021/02/24 22:54:29 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string	*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int main(void)
{
	memoryLeak();
	return (0);
}


