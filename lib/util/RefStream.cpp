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

#include "RefStream.h"

using namespace std;

CRefOStream::CRefOStream()
{
#ifdef DETAILED_DEBUG
    IncObjCount();
#endif
}

CRefOStream::~CRefOStream()
{
#ifdef DETAILED_DEBUG
    DecObjCount();
#endif
}

CRefOFStream::CRefOFStream()  : m_Stream()
{
#ifdef DETAILED_DEBUG
    IncObjCount();
#endif
}

CRefOFStream::CRefOFStream(char const* FileName) : m_Stream(FileName)
{
#ifdef DETAILED_DEBUG
    IncObjCount();
#endif
}

CRefOFStream::~CRefOFStream()
{
#ifdef DETAILED_DEBUG
    DecObjCount();
#endif
}
