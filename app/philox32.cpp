//
// Created by notoraptor on 20-01-30.
//

#include <Random123/philox.h>
#include <iostream>
#include <sstream>

#define EXAMPLE_SEED1_U32   uint32_t(0xdeadbeef12345678)
typedef r123::Philox2x32 CBRNG;

int main(int n, char **args) {
	CBRNG::key_type::value_type seed = EXAMPLE_SEED1_U32; // example of user-settable seed

	if (n == 2) {
		std::istringstream iss(args[1]);
		iss >> seed;
	}

	CBRNG::key_type key = {{seed}};
	CBRNG::ctr_type ctr = {{0,0}};
	CBRNG g;
	std::cout << std::hex << "Philox2x64 with hex key " << key << " (C++)" << std::endl;
	for(int i=0; i < 10; ++i) {
		// ctr[0] = i;
		ctr[1] = i;
		CBRNG::ctr_type rand = g(ctr, key);
		std::cout << "ctr: " << ctr << ", rand: " << rand << "\n";
	}
	return 0;
}
