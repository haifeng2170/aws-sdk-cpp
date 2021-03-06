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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class AWS_ATHENA_API GetQueryExecutionRequest : public AthenaRequest
  {
  public:
    GetQueryExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = value; }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::move(value); }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId.assign(value); }

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryExecutionRequest& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryExecutionRequest& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query execution.</p>
     */
    inline GetQueryExecutionRequest& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}

  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
