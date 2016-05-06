/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis/model/ShardIteratorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kinesis
  {
    namespace Model
    {
      namespace ShardIteratorTypeMapper
      {

        static const int AT_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AT_SEQUENCE_NUMBER");
        static const int AFTER_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AFTER_SEQUENCE_NUMBER");
        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");


        ShardIteratorType GetShardIteratorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AT_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AT_SEQUENCE_NUMBER;
          }
          else if (hashCode == AFTER_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AFTER_SEQUENCE_NUMBER;
          }
          else if (hashCode == TRIM_HORIZON_HASH)
          {
            return ShardIteratorType::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return ShardIteratorType::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShardIteratorType>(hashCode);
          }

          return ShardIteratorType::NOT_SET;
        }

        Aws::String GetNameForShardIteratorType(ShardIteratorType enumValue)
        {
          switch(enumValue)
          {
          case ShardIteratorType::AT_SEQUENCE_NUMBER:
            return "AT_SEQUENCE_NUMBER";
          case ShardIteratorType::AFTER_SEQUENCE_NUMBER:
            return "AFTER_SEQUENCE_NUMBER";
          case ShardIteratorType::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case ShardIteratorType::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ShardIteratorTypeMapper
    } // namespace Model
  } // namespace Kinesis
} // namespace Aws
