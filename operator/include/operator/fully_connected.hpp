/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2017, Open AI Lab
 * Author: haitao@openailab.com
 */
#ifndef __FULLY_CONNECTED_HPP__
#define __FULLY_CONNECTED_HPP__


#include "operator.hpp"
#include "fc_param.hpp"


namespace TEngine {


class FullyConnected : public OperatorWithParam<FullyConnected,FCParam> {

public:

     FullyConnected() {name_="FullyConnected";}
     FullyConnected(const FullyConnected&)=default;
     virtual ~FullyConnected(){};

     bool InferShape(const std::vector<TEngine::TShape>&, std::vector<TEngine::TShape>&);
     float GetFops(const std::vector<TShape>& inputs, const std::vector<TShape>& outputs) override;

     void SetSchema(void) override;

};



} //namespace TEngine


#endif
