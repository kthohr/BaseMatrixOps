/*################################################################################
  ##
  ##   Copyright (C) 2016-2022 Keith O'Hara
  ##
  ##   This file is part of the BaseMatrixOps C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#ifndef BMO_MATOPS_RANDI

//

#ifdef BMO_ENABLE_ARMA_WRAPPERS
    // acces columns j through k
    #define BMO_MATOPS_RANDI_VEC(j, a, b)    arma::randi<arma::vec>(j, arma::distr_param(a, b))
    #define BMO_MATOPS_RANDI_ROWVEC(j, a, b) arma::randi<arma::rowvec>(j, arma::distr_param(a, b))
    #define BMO_MATOPS_RANDI_MAT(j, k)       arma::randi<arma::mat>(j, k, arma::distr_param(a, b))
#endif

#ifdef BMO_ENABLE_EIGEN_WRAPPERS
    // acces columns j through k
    #define BMO_MATOPS_RANDI_VEC(j, a, b)    (a + (b-a) * (Eigen::VectorXd::Random(j).array() * 0.5 + 0.5)).matrix().cast<uint_t>()
    #define BMO_MATOPS_RANDI_ROWVEC(j, a, b) (a + (b-a) * (Eigen::VectorXd::Random(j).array() * 0.5 + 0.5)).matrix().transpose().cast<uint_t>()
    #define BMO_MATOPS_RANDI_MAT(j, k, a, b) (a + (b-a) * (Eigen::VectorXd::Random(j,k).array() * 0.5 + 0.5)).matrix().cast<uint_t>()
#endif

//

#endif
