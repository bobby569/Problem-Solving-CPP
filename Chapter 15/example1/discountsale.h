#ifndef DISCOUNT_H
#define DISCOUNT_H

#include "sale.h"

namespace salebobby{
	class DiscountSale : public Sale{
	public:
		DiscountSale();
		DiscountSale(double the_price, double the_discount);
		virtual double bill() const;
	protected:
		double discount;
	}
}

#endif