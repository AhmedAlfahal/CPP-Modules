/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:03:17 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/11 19:10:46 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();	
		Cure( const std::string aName );
		Cure( const Cure &aCure );
		~Cure();
		Cure & operator= ( const Cure &aCure );
		void use(ICharacter& target);
		AMateria* clone() const;	
};

#endif