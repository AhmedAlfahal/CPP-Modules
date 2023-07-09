/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:26:55 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/09 20:43:29 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource{
	private:
		std::string name;
		static AMateria *memory[4];
	public:
		MateriaSource();
		MateriaSource( const std::string name );
		MateriaSource( const MateriaSource &aMateriaSource );
		~MateriaSource();
		MateriaSource & operator= ( const MateriaSource &aMateriaSource );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
};

#endif