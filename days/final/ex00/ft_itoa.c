
#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int nbr)
{
	int num;
	int count;
	int is_signed;
	char *str;

	num = nbr;
	count = 0;
	is_signed = 1;
	// Count the number of elements.
	while(num != 0)
	{
		num = num / 10;
		count++;
	}
	// Check if the number entered is signed.
	if(nbr < 0)
		is_signed = -1;
	// Add one Byte if nbr == 0 or nbr < 0.
	count  = count + (nbr <=  0);
	str = (char *) malloc(sizeof(char) * (count + 1));
	// Secure our allocation proccess.
	if(!str)
		return (str);
	// return a '0' character + a NULL char if nbr == 0;
	if(nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while(nbr != 0)
	{
		str[--count] = (char)((nbr % 10) * is_signed + '0');
		nbr = nbr / 10;
	}
	if (nbr < 0)
	{
		str[--count] = '-';
	}
	return (str);
}
int main()
{
	char *str = ft_itoa(-12345);
	printf("%s\n" , str);
	return (0);
}