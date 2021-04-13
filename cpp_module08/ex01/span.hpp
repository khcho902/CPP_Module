/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:13:15 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 14:18:12 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	unsigned int n;
	std::vector<int> vec;
	Span(void);

public:
	Span(unsigned int n);
	Span(const Span& other);
	~Span();

	Span& operator=(const Span& other);

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan(void) const;
	int longestSpan(void) const;
};

#endif
