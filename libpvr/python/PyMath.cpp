//----------------------------------------------------------------------------//

/*! \file PyMath.cpp
  Contains python bindings for math functions in PVR.
 */

//----------------------------------------------------------------------------//
// Includes
//----------------------------------------------------------------------------//

// System includes

#include <boost/python.hpp>

// Library includes

#include <pvr/Math.h>

#include "Common.h"

//----------------------------------------------------------------------------//
// Namespaces
//----------------------------------------------------------------------------//

using namespace std;
using namespace pvr;

//----------------------------------------------------------------------------//
// Exceptions
//----------------------------------------------------------------------------/



//----------------------------------------------------------------------------//
// Helper classes
//----------------------------------------------------------------------------//



//----------------------------------------------------------------------------//
// Helper functions
//----------------------------------------------------------------------------//



//----------------------------------------------------------------------------//
// Pvr python module
//----------------------------------------------------------------------------//

void exportMath()
{
  using namespace boost::python;

  def("trsTransform", &Math::trsTransform<double>);

}

//----------------------------------------------------------------------------//
