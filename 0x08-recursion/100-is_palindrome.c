/**
* is_palindrome - checks string is a palindrome
* @s: pointer to string
* Return: int
*/

int ft_strlen(char *s);
int is_palindrome_recursive(char *s, int i, int j);


int is_palindrome(char *s)
{
int len = ft_strlen(s);
return (is_palindrome_recursive(s, 0, len - 1));
}

/**
* ft_strlen - calculates the string length
* @s: pointer to string
* Return: int
*/

int ft_strlen(char *s)
{
int len = 0;
if (*s != '\0')
{
len = len + ft_strlen(s + 1) + 1;
}
return (len);
}

/**
* is_palindrome_recursive - calculates the string length
* @s: pointer to string
* @i: int
* @j: int
* Return: int
*/

int is_palindrome_recursive(char *s, int i, int j)
{
if (i >= j)
{
return (1);
}
if (s[i] != s[j])
{
return (0);
}
return (is_palindrome_recursive(s, i + 1, j - 1));
}
