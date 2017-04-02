//! @Alan
//!
//! Exercise 6.54:
//! Write a declaration for a function that takes two int
//! parameters and returns an int, and declare a vector whose
//! elements have this function pointer type.
//!
//! Exercise 6.55:
//! Write four functions that add, subtract, multiply, and divide
//! two int values. Store pointers to these functions in your
//! vector from the previous exercise.
//!
//! Exercise 6.56:
//! Call each element in the vector and print their result.
//!

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

//!
//! @brief Exercise 6.54
//! @note  define the function type fp
//!
inline int f(const int, const int);
//typedef decltype(f) *fp;//fp is just a function type not a function pointer

typedef int(*fp)(const int, const int);
//!
//! @brief Exercise 6.55
//! @note  Store pointers to these functions in the vector
//!
inline int NumAdd(const int n1, const int n2)  {return n1+n2;}
inline int NumSub(const int n1, const int n2)  {return n1-n2;}
inline int NumMul(const int n1, const int n2)  {return n1*n2;}
inline int NumDiv(const int n1, const int n2)  {return n1/n2;}

vector<fp> v;// = {NumAdd, NumSub, NumMul, NumDiv};


int main()
{
    v.push_back( NumAdd );
    v.push_back( NumSub );
    v.push_back( NumMul );
    v.push_back( NumDiv );
    //!
    //! @brief Exercise 6.56
    //! @note  Call each element in the vector and print their result.
    //!
    for(vector<fp>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it)(2,2)  // here shows how to use it!
                << std::endl;
    }
    for( int i = 0; i < 5; i++ )
    {

        int m = 0;
        cout << m;
        m = 1;
    }

}

