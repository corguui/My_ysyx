#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
	if(s==NULL)
	{
	  return 0;
	}
	size_t n=0;	
	while(s[n]!='\0')
	{
		n++;
	}
	return n;
}

char *strcpy(char *dst, const char *src) {
	if(dst==NULL||src==NULL)
	{
		return 0;
	}
	char* str=dst;
	while(*src!='\0')	
	{
		*dst=*src;
		dst++;
		src++;
	}
	*dst='\0';
	return str;
}

char *strncpy(char *dst, const char *src, size_t n) {
	if(dst==NULL||src==NULL)
	{
		return 0;
	}
	char* str=dst;
	for(int i=0;i<n;i++)
	{
		if(*src!='\0')
		{
			*dst=*src;
			dst++;
			src++;
		}
		else
		{
			*dst='\0';
		}

	}
	return str;
  
 // panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
	if(dst==NULL||src==NULL)
	{
		return 0;
	}
	char* str=dst;
	while(*dst!='\0')	
	{
		dst++;
	}
	while(*src!='\0')	
	{
		*dst=*src;
		dst++;
		src++;
	}
	*dst='\0';
	return str;

}

int strcmp(const char *s1, const char *s2) {
	while(*s1!='\0'||*s2!='\0')
	{
		if(*s1>*s2)
		{
			return 1;
		}
		else if(*s1<*s2)
		{
			return -1;
		}
		s1++;
		s2++;
	}
	if(*s1!='\0'&&*s2=='\0')
		return 1;
	else if(*s2!='\0'&&*s1=='\0')
		return -1;
	else 
		return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
	while(n!=0&&(*s1!='\0'||*s2!='\0'))
	{
		if(*s1>*s2)
		{
			return 1;
		}
		else if(*s1<*s2)
		{
			return -1;
		}
		s1++;
		s2++;
		n--;
	}
	if(*s1!='\0'&&*s2=='\0'&&n!=0)
		return 1;
	else if(*s2!='\0'&&*s1=='\0'&&n!=0)
		return -1;
	else 
		return 0;

}

void *memset(void *s, int c, size_t n) {
	char ch=(char) c;
	char * sr=(char *)s;
	while(n!=0)
	{
		*sr=ch;
		sr++;
		n--;
	}
	return (void *) sr;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
