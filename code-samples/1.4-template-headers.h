#ifndef _SAMPLE_HEADER
#define _SAMPLE_HEADER

#include <iostream>
#include <type_traits>

namespace sample_header
{
/**
*  @brief Represents a numeric [x, y] pair.
*/
  template<typename T, 
	  std::enable_if<std::is_numeric<T>::value, T>::type>>
  class point
  {
	  T x;
	  T y;
	public:
	  typedef T value_type;
	  explicit point(T x = 0, T y = 0):x(0),y(0){}
//accessors
	  T get_x() const{
		  return x;
	  }
	  T get_y() const{
		  return y;
	  }
	  void set_x(T x){
		  this->x = x;
	  }
	  void set_y(T y){
		  this->y = y;
	  }
  };
/**
 * @brief Format [x, y]. Use std::setprecision(n) to format.
 */
  template<typename T>
  std::ostream& std::operator << (std::ostream& out, const point<T>& p){
	  return out << "[" << p.get_x() << ", " << p.get_y() << "]";
  }
} // namespace sample_header
#endif
