#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
int _putchar(char c)
{
return (write(1, &c, 1));
}
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
return ((n < 0) ? -n : n);
}

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);
}

void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}

for (; s[i] != '\0'; ++i)
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
}

return (sign *result);
}

char *_strcat(char *dest, char *src)
{
int dest_len = _strlen(dest);
int i = 0;

while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}

dest[dest_len + i] = '\0';
return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}

dest[dest_len + i] = '\0';
return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}

char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0' && _strchr(accept, *s) != NULL)
{
count++;
s++;
}
return (count);
}

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (_strchr(accept, *s) != NULL)
return (s);
s++;
}
return (NULL);
}

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);

while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
