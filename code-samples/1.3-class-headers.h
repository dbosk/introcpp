#ifndef _SAMPLE_HEADER
#define _SAMPLE_HEADER

#include <iostream>

namespace sample_header
{
	
/**
*  @brief Represents a floating point [x, y] pair.
*/
  class point
  {
	  double x;
	  double y;
	public:
/**
 * @brief Constructs a point instance.
 * @param x, default value 0, double.
 * @param y, default value 0, double.
 */
	  explicit point(double x = 0, double y = 0);
//accessors
	  double get_x() const;
	  double get_y() const;
	  void set_x(double x);
	  void set_y(double y);
  };

/**
 * @brief Format [x, y]. Use std::setprecision(n) to format.
 *
 */
  std::ostream& std::operator << (std::ostream& out, const point&);

} // namespace sample_header

#endif
