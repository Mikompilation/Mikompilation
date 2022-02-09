#pragma once

#include "sgdTypes.h"

void SgMapUnit(SGDFILEHEADER *pSGDHead);

bool isValidSGDFile(SGDFILEHEADER *pSGDHead);

void initializeVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeParentVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeSGDProcUnitHeader(SGDFILEHEADER *pSGDHead);