/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "itkImageFileReader.h"

#include "PhaseSymmetryFilterCLP.h"

template< unsigned int VDimension >
int PhaseSymmetryFilter( int argc, char * argv[] )
{
  PARSE_ARGS;
  return EXIT_SUCCESS;
}

int main( int argc, char * argv[] )
{
  PARSE_ARGS;

  itk::ImageIOBase::Pointer imageIO = itk::ImageIOFactory::CreateImageIO(
    inputImage.c_str(), itk::ImageIOFactory::ReadMode );
  imageIO->SetFileName( inputImage );
  imageIO->ReadImageInformation();

  const unsigned int dimension = imageIO->GetNumberOfDimensions();
  switch( dimension )
    {
  case 2:
    return PhaseSymmetryFilter< 2 >( argc, argv );
  case 3:
    return PhaseSymmetryFilter< 3 >( argc, argv );
  default:
    std::cerr << "Error: Unsupported image dimension." << std::endl;
    return EXIT_FAILURE;
    }

  return EXIT_SUCCESS;
}
