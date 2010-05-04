#ifndef VECTORIAL_SIMD4X4F_SSE_H
#define VECTORIAL_SIMD4X4F_SSE_H



vectorial_inline void simd4x4f_transpose_inplace(simd4x4f *s) {
    _MM_TRANSPOSE4_PS(s->x, s->y, s->z, s->w);
}




#endif