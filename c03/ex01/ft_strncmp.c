
31	int
32	STRNCMP (const char *s1, const char *s2, size_t n)
33	{
34	  unsigned char c1 = '\0';
35	  unsigned char c2 = '\0';
36	
37	  if (n >= 4)
38	    {
39	      size_t n4 = n >> 2;
40	      do
41	        {
42	          c1 = (unsigned char) *s1++;
43	          c2 = (unsigned char) *s2++;
44	          if (c1 == '\0' || c1 != c2)
45	            return c1 - c2;
46	          c1 = (unsigned char) *s1++;
47	          c2 = (unsigned char) *s2++;
48	          if (c1 == '\0' || c1 != c2)
49	            return c1 - c2;
50	          c1 = (unsigned char) *s1++;
51	          c2 = (unsigned char) *s2++;
52	          if (c1 == '\0' || c1 != c2)
53	            return c1 - c2;
54	          c1 = (unsigned char) *s1++;
55	          c2 = (unsigned char) *s2++;
56	          if (c1 == '\0' || c1 != c2)
57	            return c1 - c2;
58	        } while (--n4 > 0);
59	      n &= 3;
60	    }
61	
62	  while (n > 0)
63	    {
64	      c1 = (unsigned char) *s1++;
65	      c2 = (unsigned char) *s2++;
66	      if (c1 == '\0' || c1 != c2)
67	        return c1 - c2;
68	      n--;
69	    }
70	
71	  return c1 - c2;
72	}
