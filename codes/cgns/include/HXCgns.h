/*---------------------------------------------------------------------------*\
    OneFLOW - LargeScale Multiphysics Scientific Simulation Environment
	Copyright (C) 2017-2019 He Xin and the OneFLOW contributors.
-------------------------------------------------------------------------------
License
    This file is part of OneFLOW.

    OneFLOW is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OneFLOW is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OneFLOW.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/


#pragma once
#include "Configure.h"
#include "HXVector.h"
#include <string>
using namespace std;

BeginNameSpace( ONEFLOW )

#include "cgnslib.h"

typedef HXVector< cgsize_t > CgnsIntField;

class CgnsTraits
{
public:
	typedef char char33[ 33 ];
};

string GetCgnsPointSetName         ( int cgnsPointSetType );
string GetCgnsBcName( int cgnsBcType );
string GetCgnsGridLocationName     ( int cgnsGridLocation );
string GetCgnsZoneTypeName         ( int cgnsZoneType );

EndNameSpace