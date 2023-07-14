/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:26:55 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/13 23:40:33 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		std::string name;
		AMateria *memory[4];
	public:
		MateriaSource();
		MateriaSource( const std::string name );
		MateriaSource( const MateriaSource &aMateriaSource );
		~MateriaSource();
		MateriaSource & operator= ( const MateriaSource &aMateriaSource );
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		
};

#endif