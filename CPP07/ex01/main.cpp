/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:37 by hjung             #+#    #+#             */
/*   Updated: 2021/03/23 20:47:37 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::cout << "====== int Array =======" << std::endl;
    int arr1[2] = {1, 2};
    iter<int>(arr1, 2, func);
    iter(arr1, 2, func);

    std::cout << "====== String Array =======" << std::endl;
    std::string arr2[3] = {"HTML", "CSS", "JavaScript"};
    iter(arr2, 3, func);

    std::cout << "====== int Array =======" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    iter(tab, 5, print);

    std::cout << "====== Class Array =======" << std::endl;
	Awesome tab2[5];
    iter(tab2, 5, print);
    return 0;
}