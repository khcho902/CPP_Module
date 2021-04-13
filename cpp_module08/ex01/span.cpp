/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:13:20 by kycho             #+#    #+#             */
/*   Updated: 2021/04/13 14:32:01 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span& other) : n(other.n), vec(other.vec) {}

Span::~Span() {}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	n = other.n;
	vec = other.vec;

	return *this;
}

void Span::addNumber(int num)
{
	if (vec.size() == n)
		throw std::runtime_error("Span is already full!");
	
	vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter = begin;
	
	while (iter != end) {
    	if (vec.size() == n)
			throw std::runtime_error("Span is already full!");
    	
		vec.push_back(*iter);
    	iter++;
	}
}

int Span::shortestSpan(void) const
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty or contains only one element!");

	std::vector<int> copy = vec;
	std::sort(copy.begin(), copy.end());
	
	int min_diff = INT_MAX;
	int prev = *copy.begin();
	for (std::vector<int>::iterator iter = copy.begin() + 1; iter != copy.end(); iter++)
	{
		min_diff = std::min(min_diff, *iter - prev);
		prev = *iter;
	}

	return min_diff;
}

int Span::longestSpan(void) const
{
	if (vec.empty() || vec.size() == 1)
		throw std::runtime_error("Span is empty or contains only one element!");

	std::vector<int> copy = vec;
	std::sort(copy.begin(), copy.end());

	return copy.back() - copy.front();
}
