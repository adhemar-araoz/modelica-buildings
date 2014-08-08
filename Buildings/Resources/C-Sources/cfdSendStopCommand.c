///////////////////////////////////////////////////////////////////////////////
///
/// \file   cfdSendStopCommand.c
///
/// \brief  Function to send a stop command to terminate the CFD simulation
///
/// \author Wangda Zuo
///         University of Miami
///         W.Zuo@miami.edu
///
/// \date   8/3/2013
///
///////////////////////////////////////////////////////////////////////////////
#include "cfdCosimulation.h"

///////////////////////////////////////////////////////////////////////////////
/// Send a stop command to terminate the CFD simulation
///
///\return No return needed
///////////////////////////////////////////////////////////////////////////////
void cfdSendStopCommand( ) {
  int verbose = 0;

  cosim->para->flag = 0;
<<<<<<< HEAD
=======
  
  if(verbose==1) {
    sprintf(msg, "sendStopCommand( ): Set cosim->para->flag = %d\n", 
         cosim->para->flag);
    ModelicaMessage(msg);
  }
>>>>>>> upstream/ffd_miami
} // End of cfdSendStopCommand 