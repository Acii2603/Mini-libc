// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	/* TODO: Implement strcpy(). */
	for (; *source != '\0'; destination++, source++)
		*destination = *source;
	*destination = '\0';
	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */
	for (; len > 0 && *source != '\0'; len --, destination++, source++)
		*destination = *source;
	if(*source == '\0')
		*destination = '\0';
	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */
	destination += strlen(destination);
	strcpy(destination, source);
	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */
	destination += strlen(destination);

	for (; len > 0 && *source != '\0'; len --, destination++, source++)
		*destination = *source;
	
	*destination = '\0';

	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	for (; *str1 != '\0' && *str2 != '\0'; str1++, str2++) {
		if(*str1 != *str2) {
			return *str1 - *str2;
		}
	}

	if(*str1 != '\0') {
		return 1;
	}

	if(*str2 != '\0') {
		return -1;
	}

	return 0;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	for (; len > 0; len--, str1++, str2++) {
		if(*str1 != *str2) {
			return *str1 - *str2;
		}
	}

	return 0;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	for (; *str != '\0'; str++) {
		if(*str == c)
			return (char*)str;
	}
	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	const char *pointer = NULL;
	for (; *str != '\0'; str++) {
		if(*str == c)
			pointer = str;
	}
	return (char*)pointer;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	int length = strlen(needle);
	for(; *haystack != '\0'; haystack++) {
		if (strncmp(haystack, needle, length) == 0)
			return (char*)haystack;
	}
	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	int length = strlen(needle);
	const char *pointer = NULL;
	for(; *haystack != '\0'; haystack++) {
		if (strncmp(haystack, needle, length) == 0)
			pointer = haystack;
	}
	return (char*)pointer;
}

// sursa: https://www.geeksforgeeks.org/write-memcpy/
void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	char *src = (char *)source;
	char *dest = (char *)destination;

	for (size_t i = 0; i < num; i++)
		dest[i] = src[i];

	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	char *src = (char *)source;
	char *dest = (char *)destination;
	char temp[num];

	for (size_t i = 0; i < num; ++i)
		temp[i] = src[i];

	for (size_t i = 0; i < num; ++i)
		dest[i] = temp[i];
	
	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	char *cptr1 = (char *)ptr1;
	char *cptr2 = (char *)ptr2;

	for (size_t i = 0; i < num; i++)
		if(cptr1[i] != cptr2[i])
			return cptr1[i] - cptr2[i];
	return 0;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	char *src = (char *)source;

	for (size_t i = 0; i < num; i++)
		src[i] = value;

	return source;
}
