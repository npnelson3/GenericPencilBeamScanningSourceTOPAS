//
// ********************************************************************
// *                                                                  *
// *  TOPAS Y2 Custom component                                      *
// *                                                                  *
// *  Original Code written by: Nicholas P. Nelson on 9/9/2019        *
// *  Edits and TOPAS compatibility added by: Nicholas P. Nelson      *
// *  University of Wisconsin Medical Radiation Research Center       *	 	                    
// *                                                                  *
// ********************************************************************
//

#ifndef Y2_hh
#define Y2_hh

#include "TsVGeometryComponent.hh"

class Y2 : public TsVGeometryComponent
{    
public:
	Y2(TsParameterManager* pM, TsExtensionManager* eM, TsMaterialManager* mM, TsGeometryManager* gM,
				  TsVGeometryComponent* parentComponent, G4VPhysicalVolume* parentVolume, G4String& name);
	~Y2();
	
	G4VPhysicalVolume* Construct();
};

#endif
