#include <iostream>
#include "funset.hpp"
#include "opencv.hpp"
#include "libsvm.hpp"
#include "common.hpp"

int main()
{
	int ret = test_knn_classifier_predict();
	
	if (ret == 0) std::cout << "========== test ok ==========" << std::endl;
	else std::cout << "########## test fail ##########" << std::endl;

	return 0;
}

