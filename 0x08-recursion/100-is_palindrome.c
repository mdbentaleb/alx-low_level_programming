/**
* is_palindrome - checks string is a palindrome
* @s: pointer to string
* Return: int
*/

int is_palindrome(char *s)
{
int i = 0;
int len = 0;
int j;
int check = 1;

while (s[len] != '\0')
{
len++;
}

j = len - 1;

while (i < j)
{
if (s[i] != s[j])
{
check = 0;
break;
}
i++;
j--;
}

return (check);
}
