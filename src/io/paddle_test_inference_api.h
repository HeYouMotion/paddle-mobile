/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

/*
 * This file contains the definition of a simple Inference API for Paddle.
 *
 * ATTENTION: It requires some C++ features, for lower version C++ or C, we
 * might release another API.
 */

#pragma once
#include "common/types.h"
#include "string"
namespace paddle_mobile {
template <typename Dtype, Precision P = Precision::FP32>
class PaddleTester {
 public:
  double CaculatePredictTime(std::string *cl_path = nullptr);
};

}  // namespace paddle_mobile