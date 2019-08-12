unsigned char reverse_bits(unsigned char b)
{
	unsigned char	res;
	int				count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char) (octet % 2);
		octet = octet / 2;
		count--;
	}
	return (res);;
}
