#ifndef __OBJFILTER_H__
#define __OBJFILTER_H__

// Copyright 2007 Yoav Seginer

// This file is part of CCL-Parser.
// CCL-Parser is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// CCL-Parser is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with CCL-Parser.  If not, see <http://www.gnu.org/licenses/>.

#include "Reference.h"
#include "Objs.h"

// at the moment, this is just an interface, without any implemenation. 

class CObjFilter : public CRef
{
public:
    CObjFilter() {}
    virtual ~CObjFilter() {}

    // determines whether the given object is matched by th filter
    virtual bool Match(CObj* pObj) = 0;
};

typedef CPtr<CObjFilter> CpCObjFilter;

#endif /* __OBJFILTER_H__ */
