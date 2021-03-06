#ifndef __STRINGUTIL_H__
#define __STRINGUTIL_H__

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

#include <string>
#include <cctype>

// Converts the given string to lower case

extern void ToLower(std::string& Str);

// Remove leading white space
extern void RemoveLeadingWS(std::string& Str);
// Remove trailing white space
extern void RemoveTrailingWS(std::string& Str);
// Remove leading and trailing white space
extern void RemoveLeadingAndTrailingWS(std::string& Str);

// Return true if the string only contains white space
extern bool IsWhiteSpace(std::string const& Str);

// Return the current eol character(s)
extern std::string const& EoLDelimiter();
// Return a string containing all white space characters
extern std::string const& WhiteSpace();

// Determine whether an input line is a comment line
bool IsCommentLineStr(std::string const& Line);

#endif /* __STRINGUTIL_H__ */
