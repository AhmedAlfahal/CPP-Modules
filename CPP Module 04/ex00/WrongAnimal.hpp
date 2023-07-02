/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 23:27:17 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/02 19:13:41 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &WrongaAnimal );
		virtual ~WrongAnimal();
		WrongAnimal & operator= ( const WrongAnimal &WrongaAnimal );
		void makeSound() const;
		std::string getType() const;
};

#endif