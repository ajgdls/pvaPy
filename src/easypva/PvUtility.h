#ifndef PV_UTILITY_H
#define PV_UTILITY_H

#include "pv/pvData.h"

namespace epics { namespace pvaPy { namespace PvUtility {

size_t fromString(const epics::pvData::PVStructurePtr& pvStructure, const epics::pvData::StringArray& from, size_t fromStartIndex = 0);
size_t fromString(const epics::pvData::PVScalarArrayPtr& pv, const epics::pvData::StringArray& from, size_t fromStartIndex = 0);
size_t fromString(const epics::pvData::PVStructureArrayPtr& pv, const epics::pvData::StringArray& from, size_t fromStartIndex = 0);

}}}
#endif
