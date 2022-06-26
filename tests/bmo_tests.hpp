
#ifdef BMO_ENABLE_ARMA_WRAPPERS
    #ifndef ARMA_DONT_USE_WRAPPER
        #define ARMA_DONT_USE_WRAPPER
    #endif
    
    #include "armadillo"

    using Mat_t = arma::mat;

    using ColVec_t = arma::vec;
    using RowVec_t = arma::rowvec;

    using ColVecInt_t = arma::Col<int>;
    using RowVecInt_t = arma::Row<int>;

    using ColVecUInt_t = arma::Col<unsigned long long>;
    using RowVecUInt_t = arma::Row<unsigned long long>;
#endif

//

#ifdef BMO_ENABLE_EIGEN_WRAPPERS
    #include <iostream>
    #include <random>
    #include <Eigen/Dense>

    template<typename eT, int iTr, int iTc>
    using EigenMat = Eigen::Matrix<eT,iTr,iTc>;

    using Mat_t = Eigen::MatrixXd;

    using ColVec_t = Eigen::VectorXd;
    using RowVec_t = Eigen::Matrix<double,1,Eigen::Dynamic>;

    using ColVecInt_t = Eigen::Matrix<int, Eigen::Dynamic, 1>;
    using RowVecInt_t = Eigen::Matrix<int, 1, Eigen::Dynamic>;

    using ColVecUInt_t = Eigen::Matrix<size_t, Eigen::Dynamic, 1>;
    using RowVecUInt_t = Eigen::Matrix<size_t, 1, Eigen::Dynamic>;
#endif

#include "BaseMatrixOps.hpp"
