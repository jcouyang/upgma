#ifndef MY_DEALLOC_H
#define MY_DEALLOC_H
//#include "de_alloc_routines.h"
/*
template <class Type2> void DE_ALLOC_2D( Type2 **arr , int num );


template <class Type> void DE_ALLOC_1D( Type *arr ) ;
*/
template <class Type2>
void DE_ALLOC_2D( Type2 **arr , int num )
{
       for( int i = 0 ; i < num ; i++ )
              delete[] arr[i] ;
       delete[] arr ;
}

template <class Type3>
void DE_ALLOC_3D( Type3 ***arr , int dim1 , int dim2 )
{
       for( int i = 0 ; i < dim1 ; i++ )
              for( int j = 0 ; j < dim2 ; j++ )
                     delete[] arr[i][j] ;
       for( int i = 0 ; i < dim1 ; i++ )
              delete[] arr[i] ;
       
       delete[] arr ;
}

template <class Type>
void DE_ALLOC_1D( Type *arr ) 
{
       delete[] arr ;
}
//*/

#endif
