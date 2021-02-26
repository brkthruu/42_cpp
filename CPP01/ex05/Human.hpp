/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 06:01:57 by hjung             #+#    #+#             */
/*   Updated: 2021/02/26 12:53:28 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const	Brain	_brain;
public:
	Human();
	~Human();
	const Brain &getBrain(void) const;
	std::string	identify(void) const;
};




#endif