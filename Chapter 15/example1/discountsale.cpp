#include "discountsale.h"

namespace salebobby{
	DiscountSale::DiscountSale() : Sale(), discount(0){
	}

	DiscountSale::DiscountSale(double the_price, double the_discount) : Sale(the_price), discount(the_discount){
	}

	double DiscountSale::bill() const{
		double fraction = discount / 100.0;
		return (1 - fraction) * price;
	}
}