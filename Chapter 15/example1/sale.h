#ifndef SALE_H
#define SALE_H

#include <iostream>
using namespace std;

namespace salebobby{
	class Sale{
	public:
		Sale();
		Sale(double the_price);
		virtual double bill() const;
		double savings(const Sale& other) const;
	protected:
		double price;
	};

	bool operator <(const Sale& first, const Sale& second);
}

#endif