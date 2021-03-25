/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:35:41 by hjung             #+#    #+#             */
/*   Updated: 2021/03/25 19:40:59 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span	sp(5);

	sp.addNumber(3);
	try
	{
		std::cout<<sp.shortestSpan()<<'\n';
	}
	catch(const std::exception &e)
	{
		std::cerr<<e.what()<<'\n';
	}

	sp.addNumber(10);
	sp.addNumber(6);
	sp.addNumber(16);
	sp.addNumber(1);
	try
	{
		sp.addNumber(21);
	}
	catch(const std::exception &e)
	{
		std::cerr<<e.what()<<'\n';
	}
    std::cout<<sp.shortestSpan()<<'\n';
    std::cout<<sp.longestSpan()<<'\n';  



	std::vector<int>	temp;
	Span sp2(10000);

	for(int i=0; i<10000; i++)
		temp.push_back(i*3);
	sp2.addNumber(temp.begin(), temp.end());
    std::cout<<sp2.shortestSpan()<<'\n';
    std::cout<<sp2.longestSpan()<<'\n';  
}