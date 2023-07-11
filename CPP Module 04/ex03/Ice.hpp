/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:55:43 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/11 19:10:31 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice( const std::string aName );
		Ice( const Ice &aIce );
		~Ice();
		Ice & operator= ( const Ice &aIce );
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif