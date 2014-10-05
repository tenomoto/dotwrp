// compile with: clang -c dotwrp.c
#include <complex.h>
#include <vecLib/cblas.h>

#ifdef DOTWRP_GLOBAL
#define DYLIB_LOCAL
#else
#define DYLIB_LOCAL __attribute__ ((visibility ("hidden"))) 
#endif

DYLIB_LOCAL
double complex zdotc_( const int* n, const double complex* x, const int* ix, const double complex *y, const int* iy )
{
	double complex z;
	cblas_zdotc_sub( *n, x, *ix, y, *iy, &z );
	return z;
}

DYLIB_LOCAL
double complex zdotu_( const int* n, const double complex* x, const int* ix, const double complex *y, const int* iy )
{
	double complex z;
	cblas_zdotu_sub( *n, x, *ix, y, *iy, &z );
	return z;
}

DYLIB_LOCAL
float complex cdotc_( const int* n, const float complex* x, const int* ix, const float complex *y, const int* iy )
{
	float complex z;
	cblas_cdotc_sub( *n, x, *ix, y, *iy, &z );
	return z;
}

DYLIB_LOCAL
float complex cdotu_( const int* n, const float complex* x, const int* ix, const float complex *y, const int* iy )
{
	float complex z;
	cblas_cdotu_sub( *n, x, *ix, y, *iy, &z );
	return z;
}

DYLIB_LOCAL
float sdot_( const int* n, const float* x, const int* ix, const float *y, const int* iy )
{
	return cblas_sdot( *n, x, *ix, y, *iy );
}

DYLIB_LOCAL
float sdsdot_( const int* n, const float* a, const float* x, const int* ix, const float *y, const int* iy )
{
	return cblas_sdsdot( *n, *a, x, *ix, y, *iy );
}

DYLIB_LOCAL
float snrm2_( const int* n, const float* x, const int* ix )
{
	return cblas_snrm2( *n, x, *ix );
}

DYLIB_LOCAL
float sasum_( const int* n, const float* x, const int* ix )
{
	return cblas_snrm2( *n, x, *ix );
}

DYLIB_LOCAL
float scnrm2_( const int* n, const float complex* x, const int* ix )
{
	return cblas_scnrm2( *n, x, *ix );
}

DYLIB_LOCAL
float scasum_( const int* n, const float complex* x, const int* ix )
{
	return cblas_scasum( *n, x, *ix );
}


