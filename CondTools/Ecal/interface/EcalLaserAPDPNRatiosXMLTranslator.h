/**
   Translates a EcalLaserAPDPNRatios record to XML
   and vice versa   
   \author Stefano Argiro'
   \version $Id: EcalLaserAPDPNRatiosXMLTranslator.h,v 1.1 2009/10/20 13:48:05 argiro Exp $
   \date 29 Jul 2008
*/

#ifndef __EcalLaserAPDPNRatiosXMLTranslator_h_
#define __EcalLaserAPDPNRatiosXMLTranslator_h_

#include "CondFormats/EcalObjects/interface/EcalLaserAPDPNRatios.h"
#include "CondTools/Ecal/interface/EcalCondHeader.h"
#include "CondTools/Ecal/interface/XMLTags.h"
#include "CondTools/Ecal/interface/XercesString.h"
#include <string>
#include <xercesc/dom/DOMNode.hpp>

static const char CVSId__EcalLaserAPDPNRatiosXMLTranslator[] = 
"$Id: EcalLaserAPDPNRatiosXMLTranslator.h,v 1.1 2009/10/20 13:48:05 argiro Exp $";




class EcalLaserAPDPNRatiosXMLTranslator {

public:

  static int readXML  (const std::string& filename,
		       EcalCondHeader& header,
		       EcalLaserAPDPNRatios& record);

  static int writeXML (const std::string& filename,
		       const EcalCondHeader& header,
		       const EcalLaserAPDPNRatios& record);

  static std::string dumpXML(const EcalCondHeader& header,
			     const EcalLaserAPDPNRatios& record);  

};



#endif // __EcalLaserAPDPNRatiosXMLTranslator_h_

// Configure (x)emacs for this file ...
// Local Variables:
// mode:c++
// compile-command: "cd ..; scram b"
// End:
