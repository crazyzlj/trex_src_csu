/*---------------------------------------------------------------------
C-  Function:	OverlandChemicalVolatilization.c
C-
C-	Purpose/	Compute the volatilization flux of chemicals in the
C-	Methods:	channel network.  Chemical Volatilization only occurs
C-              for the dissolved chemical phase.
C-
C-
C-  Inputs:	    channel properties,
C-              kvltwch[], kvltsch[]
C-
C-  Outputs:    vltchemchoutflux[][][][]
C-
C-  Controls:   imask[][], vltopt[]
C-
C-  Calls:      None
C-
C-  Called by:  OverlandChemicalKinetics
C-
C-	Created:	Mark Velleux
C-              Department of Civil Engineering
C-              Colorado State University
C-              Fort Collins, CO
C-
C-	Date:		15-MAY-2005
C-
C-	Revised:
C-
C-	Date:
C-
C-	Revisions:
C-
C----------------------------------------------------------------------*/

//trex global variable declarations
#include "trex_general_declarations.h"

//trex global variable declarations for water transport
#include "trex_water_declarations.h"

//trex global variable declarations for sediment transport
#include "trex_solids_declarations.h"

//trex global variable declarations for chemical transport
#include "trex_chemical_declarations.h"

//trex global variable declarations for environmental conditions
#include "trex_environmental_declarations.h"

void OverlandChemicalVolatilization()
{

//End of function: Return to OverlandChemicalKinetics
}
