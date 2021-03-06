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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API DisassociateTagOptionFromResourceRequest : public ServiceCatalogRequest
  {
  public:
    DisassociateTagOptionFromResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the resource from which to disassociate the TagOption.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline const Aws::String& GetTagOptionId() const{ return m_tagOptionId; }

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline void SetTagOptionId(const Aws::String& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = value; }

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline void SetTagOptionId(Aws::String&& value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId = std::move(value); }

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline void SetTagOptionId(const char* value) { m_tagOptionIdHasBeenSet = true; m_tagOptionId.assign(value); }

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(const Aws::String& value) { SetTagOptionId(value); return *this;}

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(Aws::String&& value) { SetTagOptionId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the TagOption to disassociate from the resource.</p>
     */
    inline DisassociateTagOptionFromResourceRequest& WithTagOptionId(const char* value) { SetTagOptionId(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_tagOptionId;
    bool m_tagOptionIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
