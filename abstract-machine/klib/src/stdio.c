#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
	va_list ap;
	int n;
	char *str="0";
	va_start(ap,fmt);
	n=vsprintf(str,fmt,ap);
	va_end(ap);
	putstr(str);
	return n;
	
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	   va_list ap;
	   size_t n;
           va_start(ap, fmt);
	   n=vsprintf(out,fmt,ap);
           va_end(ap);
           return n;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
