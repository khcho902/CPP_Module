/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:41:23 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 15:22:30 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(const MutantStack<T>& other);
	~MutantStack();

	MutantStack<T>& operator=(const MutantStack<T> & other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(void);
	iterator	end(void);
};

#endif
