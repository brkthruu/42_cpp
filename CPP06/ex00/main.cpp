/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:55:32 by hjung             #+#    #+#             */
/*   Updated: 2021/03/22 15:57:06 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int     main(int argc, char** argv)
{
    double input;

    if (argc != 2)
        return 0;
    try
    {
        input = std::stof(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Invalid Argument" << std::endl;
        return 0;
    }

    Convert C(argv[1], input);
    try
    {
        C.toChar();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C.toInt();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C.toFloat();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C.toDouble();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}