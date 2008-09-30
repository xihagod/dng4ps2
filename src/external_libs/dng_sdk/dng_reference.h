/*****************************************************************************/
// Copyright 2006 Adobe Systems Incorporated
// All Rights Reserved.
//
// NOTICE:  Adobe permits you to use, modify, and distribute this file in
// accordance with the terms of the Adobe license agreement accompanying it.
/*****************************************************************************/

/* $Id: //mondo/dng_sdk_1_1/dng_sdk/source/dng_reference.h#1 $ */ 
/* $DateTime: 2006/04/05 18:24:55 $ */
/* $Change: 215171 $ */
/* $Author: tknoll $ */

/*****************************************************************************/

#ifndef __dng_reference__
#define __dng_reference__

/*****************************************************************************/

#include "dng_bottlenecks.h"

/*****************************************************************************/

void RefZeroBytes (void *dPtr,
				   uint32 count);
				   
void RefCopyBytes (const void *sPtr,
				   void *dPtr,
				   uint32 count);

/*****************************************************************************/

void RefSwapBytes16 (uint16 *dPtr,
				     uint32 count);
				   
void RefSwapBytes32 (uint32 *dPtr,
				     uint32 count);
				   
/*****************************************************************************/

void RefSetArea8 (uint8 *dPtr,
				  uint8 value,
				  uint32 rows,
				  uint32 cols,
				  uint32 planes,
				  int32 rowStep,
				  int32 colStep,
				  int32 planeStep);
				   
void RefSetArea16 (uint16 *dPtr,
				   uint16 value,
				   uint32 rows,
				   uint32 cols,
				   uint32 planes,
				   int32 rowStep,
				   int32 colStep,
				   int32 planeStep);

void RefSetArea32 (uint32 *dPtr,
				   uint32 value,
				   uint32 rows,
				   uint32 cols,
				   uint32 planes,
				   int32 rowStep,
				   int32 colStep,
				   int32 planeStep);

/*****************************************************************************/

void RefCopyArea8 (const uint8 *sPtr,
				   uint8 *dPtr,
				   uint32 rows,
				   uint32 cols,
				   uint32 planes,
				   int32 sRowStep,
				   int32 sColStep,
				   int32 sPlaneStep,
				   int32 dRowStep,
				   int32 dColStep,
				   int32 dPlaneStep);

void RefCopyArea16 (const uint16 *sPtr,
					uint16 *dPtr,
					uint32 rows,
					uint32 cols,
					uint32 planes,
					int32 sRowStep,
					int32 sColStep,
					int32 sPlaneStep,
					int32 dRowStep,
					int32 dColStep,
					int32 dPlaneStep);

void RefCopyArea32 (const uint32 *sPtr,
					uint32 *dPtr,
					uint32 rows,
					uint32 cols,
					uint32 planes,
					int32 sRowStep,
					int32 sColStep,
					int32 sPlaneStep,
					int32 dRowStep,
					int32 dColStep,
					int32 dPlaneStep);

void RefCopyArea8_16 (const uint8 *sPtr,
					  uint16 *dPtr,
					  uint32 rows,
					  uint32 cols,
					  uint32 planes,
					  int32 sRowStep,
					  int32 sColStep,
					  int32 sPlaneStep,
					  int32 dRowStep,
					  int32 dColStep,
					  int32 dPlaneStep);

void RefCopyArea8_S16 (const uint8 *sPtr,
					   int16 *dPtr,
					   uint32 rows,
					   uint32 cols,
					   uint32 planes,
					   int32 sRowStep,
					   int32 sColStep,
					   int32 sPlaneStep,
					   int32 dRowStep,
					   int32 dColStep,
					   int32 dPlaneStep);

void RefCopyArea8_32 (const uint8 *sPtr,
					  uint32 *dPtr,
					  uint32 rows,
					  uint32 cols,
					  uint32 planes,
					  int32 sRowStep,
					  int32 sColStep,
					  int32 sPlaneStep,
					  int32 dRowStep,
					  int32 dColStep,
					  int32 dPlaneStep);

void RefCopyArea16_S16 (const uint16 *sPtr,
					    int16 *dPtr,
					    uint32 rows,
					    uint32 cols,
					    uint32 planes,
					    int32 sRowStep,
					    int32 sColStep,
					    int32 sPlaneStep,
					    int32 dRowStep,
					    int32 dColStep,
					    int32 dPlaneStep);

void RefCopyArea16_32 (const uint16 *sPtr,
					   uint32 *dPtr,
					   uint32 rows,
					   uint32 cols,
					   uint32 planes,
					   int32 sRowStep,
					   int32 sColStep,
					   int32 sPlaneStep,
					   int32 dRowStep,
					   int32 dColStep,
					   int32 dPlaneStep);

void RefCopyArea8_R32 (const uint8 *sPtr,
					   real32 *dPtr,
					   uint32 rows,
					   uint32 cols,
					   uint32 planes,
					   int32 sRowStep,
					   int32 sColStep,
					   int32 sPlaneStep,
					   int32 dRowStep,
					   int32 dColStep,
					   int32 dPlaneStep,
					   uint32 pixelRange);

void RefCopyArea16_R32 (const uint16 *sPtr,
					    real32 *dPtr,
					    uint32 rows,
					    uint32 cols,
					    uint32 planes,
					    int32 sRowStep,
					    int32 sColStep,
					    int32 sPlaneStep,
					    int32 dRowStep,
					    int32 dColStep,
					    int32 dPlaneStep,
						uint32 pixelRange);

void RefCopyAreaS16_R32 (const int16 *sPtr,
					     real32 *dPtr,
					     uint32 rows,
					     uint32 cols,
					     uint32 planes,
					     int32 sRowStep,
					     int32 sColStep,
					     int32 sPlaneStep,
					     int32 dRowStep,
					     int32 dColStep,
					     int32 dPlaneStep,
						 uint32 pixelRange);

void RefCopyAreaR32_8 (const real32 *sPtr,
					   uint8 *dPtr,
					   uint32 rows,
					   uint32 cols,
					   uint32 planes,
					   int32 sRowStep,
					   int32 sColStep,
					   int32 sPlaneStep,
					   int32 dRowStep,
					   int32 dColStep,
					   int32 dPlaneStep,
					   uint32 pixelRange);

void RefCopyAreaR32_16 (const real32 *sPtr,
					    uint16 *dPtr,
					    uint32 rows,
					    uint32 cols,
					    uint32 planes,
					    int32 sRowStep,
					    int32 sColStep,
					    int32 sPlaneStep,
					    int32 dRowStep,
					    int32 dColStep,
					    int32 dPlaneStep,
						uint32 pixelRange);

void RefCopyAreaR32_S16 (const real32 *sPtr,
					     int16 *dPtr,
					     uint32 rows,
					     uint32 cols,
					     uint32 planes,
					     int32 sRowStep,
					     int32 sColStep,
					     int32 sPlaneStep,
					     int32 dRowStep,
					     int32 dColStep,
					     int32 dPlaneStep,
						 uint32 pixelRange);

/*****************************************************************************/

void RefRepeatArea8 (const uint8 *sPtr,
					 uint8 *dPtr,
					 uint32 rows,
					 uint32 cols,
					 uint32 planes,
					 int32 rowStep,
					 int32 colStep,
					 int32 planeStep,
					 uint32 repeatV,
					 uint32 repeatH,
					 uint32 phaseV,
					 uint32 phaseH);

void RefRepeatArea16 (const uint16 *sPtr,
					  uint16 *dPtr,
					  uint32 rows,
					  uint32 cols,
					  uint32 planes,
					  int32 rowStep,
					  int32 colStep,
					  int32 planeStep,
					  uint32 repeatV,
					  uint32 repeatH,
					  uint32 phaseV,
					  uint32 phaseH);

void RefRepeatArea32 (const uint32 *sPtr,
					  uint32 *dPtr,
					  uint32 rows,
					  uint32 cols,
					  uint32 planes,
					  int32 rowStep,
					  int32 colStep,
					  int32 planeStep,
					  uint32 repeatV,
					  uint32 repeatH,
					  uint32 phaseV,
					  uint32 phaseH);

/*****************************************************************************/

void RefShiftRight16 (uint16 *dPtr,
					  uint32 rows,
					  uint32 cols,
					  uint32 planes,
					  int32 rowStep,
					  int32 colStep,
					  int32 planeStep,
					  uint32 shift);

/*****************************************************************************/

void RefBilinearRow16 (const uint16 *sPtr,
					   uint16 *dPtr,
					   uint32 cols,
					   uint32 patPhase,
					   uint32 patCount,
					   const uint32 * kernCounts,
					   const int32  * const * kernOffsets,
					   const uint16 * const * kernWeights,
					   uint32 sShift);

void RefBilinearRow32 (const real32 *sPtr,
					   real32 *dPtr,
					   uint32 cols,
					   uint32 patPhase,
					   uint32 patCount,
					   const uint32 * kernCounts,
					   const int32  * const * kernOffsets,
					   const real32 * const * kernWeights,
					   uint32 sShift);

/*****************************************************************************/

void RefBaselineABCtoRGB (const real32 *sPtrA,
						  const real32 *sPtrB,
						  const real32 *sPtrC,
						  real32 *dPtrR,
						  real32 *dPtrG,
						  real32 *dPtrB,
						  uint32 count,
						  const dng_vector &cameraWhite,
						  const dng_matrix &cameraToRGB);

void RefBaselineABCDtoRGB (const real32 *sPtrA,
						   const real32 *sPtrB,
						   const real32 *sPtrC,
						   const real32 *sPtrD,
						   real32 *dPtrR,
						   real32 *dPtrG,
						   real32 *dPtrB,
						   uint32 count,
						   const dng_vector &cameraWhite,
						   const dng_matrix &cameraToRGB);

/*****************************************************************************/

void RefBaselineRGBtoGray (const real32 *sPtrR,
						   const real32 *sPtrG,
						   const real32 *sPtrB,
						   real32 *dPtrG,
						   uint32 count,
						   const dng_matrix &matrix);

void RefBaselineRGBtoRGB (const real32 *sPtrR,
						  const real32 *sPtrG,
						  const real32 *sPtrB,
						  real32 *dPtrR,
						  real32 *dPtrG,
						  real32 *dPtrB,
						  uint32 count,
						  const dng_matrix &matrix);

/*****************************************************************************/

void RefBaseline1DTable (const real32 *sPtr,
						 real32 *dPtr,
						 uint32 count,
						 const dng_1d_table &table);

/*****************************************************************************/

void RefBaselineRGBTone (const real32 *sPtrR,
						 const real32 *sPtrG,
						 const real32 *sPtrB,
						 real32 *dPtrR,
						 real32 *dPtrG,
						 real32 *dPtrB,
						 uint32 count,
						 const dng_1d_table &table);

/*****************************************************************************/

void RefResampleDown16 (const uint16 *sPtr,
						uint16 *dPtr,
						uint32 sCount,
						int32 sRowStep,
						const int16 *wPtr,
						uint32 wCount,
						uint32 pixelRange);

void RefResampleDown32 (const real32 *sPtr,
						real32 *dPtr,
						uint32 sCount,
						int32 sRowStep,
						const real32 *wPtr,
						uint32 wCount);

/*****************************************************************************/

void RefResampleAcross16 (const uint16 *sPtr,
						  uint16 *dPtr,
						  uint32 dCount,
						  const int32 *coord,
						  const int16 *wPtr,
						  uint32 wCount,
						  uint32 wStep,
						  uint32 pixelRange);
						
void RefResampleAcross32 (const real32 *sPtr,
						  real32 *dPtr,
						  uint32 dCount,
						  const int32 *coord,
						  const real32 *wPtr,
						  uint32 wCount,
						  uint32 wStep);

/*****************************************************************************/

#endif
	
/*****************************************************************************/
