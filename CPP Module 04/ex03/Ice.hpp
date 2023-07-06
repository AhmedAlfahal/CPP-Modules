/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:54 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/06 23:14:12 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria, public ICharacter{
	public:
		Ice();
		Ice( const Ice &aIce); 
		~Ice();
		Ice & operator=( const Ice &aIce );
		AMateria* clone() const;
		void use(ICharacter& target);
		std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif