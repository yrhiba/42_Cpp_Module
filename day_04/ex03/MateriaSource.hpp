/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:38:39 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/09 04:01:23 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria **inventory;

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	~MateriaSource();

	// interfaces methodes
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	// guess i need to 
	bool isInventoryFull(void);
};
