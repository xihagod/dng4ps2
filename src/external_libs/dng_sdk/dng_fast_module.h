/*****************************************************************************/
// Copyright 2006 Adobe Systems Incorporated
// All Rights Reserved.
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in
// accordance with the terms of the Adobe license agreement accompanying it.
/*****************************************************************************/

/* $Id: //mondo/dng_sdk_1_1/dng_sdk/source/dng_fast_module.h#2 $ */ 
/* $DateTime: 2006/04/12 14:23:04 $ */
/* $Change: 216157 $ */
/* $Author: stern $ */

/** \file
 * Include file to set optimization to highest level for performance-critical routines.
 * Normal files should have otpimization set to normal level to save code size as there is less
 * cache pollution this way.
 */ 
 
/*****************************************************************************/

// Include this file in modules that contain routines that should be as fast
// as possible, even at the expense of slight code size increases.

/*****************************************************************************/

#ifdef __MWERKS__
#pragma optimize_for_size off
#pragma inline_max_size (2048)
#pragma inline_depth (16)
#endif

#ifdef _MSC_VER
#pragma optimize ("t", on)
#endif

/*****************************************************************************/