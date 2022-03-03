int
30	STRCMP (const char *p1, const char *p2)
31	{
32	  const unsigned char *s1 = (const unsigned char *) p1;
33	  const unsigned char *s2 = (const unsigned char *) p2;
34	  unsigned char c1, c2;
35	
36	  do
37	    {
38	      c1 = (unsigned char) *s1++;
39	      c2 = (unsigned char) *s2++;
40	      if (c1 == '\0')
41	        return c1 - c2;
42	    }
43	  while (c1 == c2);
44	
45	  return c1 - c2;
46	}
