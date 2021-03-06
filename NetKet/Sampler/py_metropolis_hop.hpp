// Copyright 2018 The Simons Foundation, Inc. - All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NETKET_PY_METROPOLISHOP_HPP
#define NETKET_PY_METROPOLISHOP_HPP

#include <pybind11/pybind11.h>
#include "metropolis_hop.hpp"

namespace py = pybind11;

namespace netket {

void AddMetropolisHop(py::module &subm) {
  using DerSampler = MetropolisHop<MachineType>;
  py::class_<DerSampler, SamplerType>(subm, "MetropolisHop")
      .def(py::init<MachineType &, int>(), py::keep_alive<1, 3>(),
           py::arg("machine"), py::arg("d_max") = 1);
}
}  // namespace netket
#endif
