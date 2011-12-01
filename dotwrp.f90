!g95 -fno-underscoring dotwrp.f90 -c
double complex function zdotc_(n, zx, incx, zy, incy)
double complex zx(*), zy(*), z
integer n, incx, incy

call cblas_zdotc_sub(%val(n), zx, %val(incx), zy, %val(incy), z)

zdotc_ = z
return
end

double complex function zdotu_(n, zx, incx, zy, incy)
double complex zx(*), zy(*), z
integer n, incx, incy

call cblas_zdotu_sub(%val(n), zx, %val(incx), zy, %val(incy), z)

zdotu_ = z
return
end

complex function cdotc_(n, cx, incx, cy, incy)
complex cx(*), cy(*), c
integer n, incx, incy

call cblas_cdotc_sub(%val(n), cx, %val(incx), cy, %val(incy), c)

cdotc_ = c
return
end

complex function cdotu_(n, cx, incx, cy, incy)
complex cx(*), cy(*), c
integer n, incx, incy

call cblas_cdotu_sub(%val(n), cx, %val(incx), cy, %val(incy), c)

cdotu_ = c
return
end

real function sdot_(n, sx, incx, sy, incy)
real sx(*), sy(*), s
double precision d
integer n, incx, incy

sdot_ = cblas_sdot(%val(n), sx, %val(incx), sy, %val(incy))

return
end
