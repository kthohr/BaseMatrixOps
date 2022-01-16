
#ifdef BMO_ENABLE_ARMA_WRAPPERS
    #ifndef ARMA_DONT_USE_WRAPPER
        #define ARMA_DONT_USE_WRAPPER
    #endif
    
    #include "armadillo"

    using Mat_t = arma::mat;
    using Vec_t = arma::vec;
    using RowVec_t = arma::rowvec;
    using VecInt_t = arma::uvec;
#endif

//

#ifdef BMO_ENABLE_EIGEN_WRAPPERS
    #include <iostream>
    #include <random>
    #include <Eigen/Dense>

    template<typename eT, int iTr, int iTc>
    using EigenMat = Eigen::Matrix<eT,iTr,iTc>;

    using Mat_t = Eigen::MatrixXd;
    using Vec_t = Eigen::VectorXd;
    using RowVec_t = Eigen::Matrix<double,1,Eigen::Dynamic>;
    using VecInt_t = Eigen::VectorXi;
#endif

#include "BaseMatrixOps.hpp"
