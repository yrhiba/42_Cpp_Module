/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 03:08:44 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 03:19:21 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &other)
{
	static_cast<void>(other);
}

Serializer &Serializer::operator=(const Serializer &other)
{
	static_cast<void>(other);
	return *this;
}

Serializer::~Serializer()
{
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
