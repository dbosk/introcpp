#ifndef _SAMPLE_HEADER
#define _SAMPLE_HEADER

#include <string>

namespace sample_header
{
/**
*  @brief Reverses the contents of the string.
*  @param source The source string.
*  @return The reversed string.
*
*  This function reverses a string. The operation is O(N), where 
*  N = source.size(). 
*/

  std::string reverse(const std::string& source);

} // namespace sample_header

#endif
