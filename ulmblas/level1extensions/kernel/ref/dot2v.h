#ifndef ULMBLAS_LEVEL1EXTENSIONS_KERNEL_REF_DOT2V_H
#define ULMBLAS_LEVEL1EXTENSIONS_KERNEL_REF_DOT2V_H 1

namespace ulmBLAS { namespace ref {

template <typename IndexType, typename VX0, typename VX1, typename VY,
          typename Result>
    void
    dotu2v(IndexType      n,
           const VX0      *x0,
           IndexType      incX0,
           const VX1      *x1,
           IndexType      incX1,
           VY             *y,
           IndexType      incY,
           Result         *result,
           IndexType      resultInc);

} } // namespace ref, ulmBLAS

#endif // ULMBLAS_LEVEL1EXTENSIONS_KERNEL_REF_DOT2V_H 1

#include <ulmblas/level1extensions/kernel/ref/dot2v.tcc>
