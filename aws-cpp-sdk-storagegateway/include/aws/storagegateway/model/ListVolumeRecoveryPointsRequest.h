﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsRequest : public StorageGatewayRequest
  {
  public:
    ListVolumeRecoveryPointsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline ListVolumeRecoveryPointsRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListVolumeRecoveryPointsRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ListVolumeRecoveryPointsRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
