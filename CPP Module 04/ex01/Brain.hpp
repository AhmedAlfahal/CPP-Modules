/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:23:06 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 22:24:55 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain( const Brain &aBrain );
		~Brain();
		Brain & operator= ( const Brain &aBrain );
};

#endif