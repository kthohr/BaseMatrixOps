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

#ifndef BMO_INCLUDES
#define BMO_INCLUDES

//

#include "misc/bmo_options.hpp"

//

#include "core/abs.hpp"
#include "core/abs_max.hpp"
#include "core/accu.hpp"
#include "core/access.hpp"
#include "core/array_add.hpp"
#include "core/array_div.hpp"
#include "core/as_scalar.hpp"
#include "core/cos.hpp"
#include "core/cout.hpp"
#include "core/diagmat.hpp"
#include "core/diagvec.hpp"
#include "core/dot.hpp"
#include "core/endl.hpp"
#include "core/eval.hpp"
#include "core/exp.hpp"
#include "core/eye.hpp"
#include "core/hadamard.hpp"
#include "core/is_finite.hpp"
#include "core/inv.hpp"
#include "core/log.hpp"
#include "core/max.hpp"
#include "core/min.hpp"
#include "core/ncol.hpp"
#include "core/norm.hpp"
#include "core/ones.hpp"
#include "core/pow.hpp"
#include "core/randi.hpp"
#include "core/randn.hpp"
#include "core/randu.hpp"
#include "core/set_size.hpp"
#include "core/size.hpp"
#include "core/solve.hpp"
#include "core/sqrt.hpp"
#include "core/sum.hpp"
#include "core/transpose.hpp"
#include "core/zeros.hpp"

//

#ifdef BMO_EXTRA_FEATURES

#include "extra/get_sort_index.hpp"
#include "extra/index_min.hpp"
#include "extra/reset_negative_values.hpp"
#include "extra/unit_vec.hpp"

#endif

#endif
