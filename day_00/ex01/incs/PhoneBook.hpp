/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:44 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 02:12:40 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

#include "header.hpp"

class PhoneBook
{
private:
	int		contacts_count;
	int		_x;
	Contact	contacts[8];

public:
	PhoneBook();

	bool	add();

	void	shearch();

	~PhoneBook();
};

#endif