#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	   va_list ap;
           va_start(ap, fmt);
           while (*fmt)
	   {
               switch (*fmt++) {
               case 's':              /* string */
                   char * s = va_arg(ap, char *);
		   out =s;
                   break;
               case 'd':              /* int */
                   int d = va_arg(ap, int);
		   out =(char *)d;
                   break;
		}
	   }	
           va_end(ap);
           return 0;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
