CK.  */
53	char *
54	STRSTR (const char *haystack, const char *needle)
55	{
56	  size_t needle_len; /* Length of NEEDLE.  */
57	  size_t haystack_len; /* Known minimum length of HAYSTACK.  */
58	
59	  /* Handle empty NEEDLE special case.  */
60	  if (needle[0] == '\0')
61	    return (char *) haystack;
62	
63	  /* Skip until we find the first matching char from NEEDLE.  */
64	  haystack = strchr (haystack, needle[0]);
65	  if (haystack == NULL || needle[1] == '\0')
66	    return (char *) haystack;
67	
68	  /* Ensure HAYSTACK length is at least as long as NEEDLE length.
69	     Since a match may occur early on in a huge HAYSTACK, use strnlen
70	     and read ahead a few cachelines for improved performance.  */
71	  needle_len = strlen (needle);
72	  haystack_len = __strnlen (haystack, needle_len + 256);
73	  if (haystack_len < needle_len)
74	    return NULL;
75	
76	  /* Check whether we have a match.  This improves performance since we avoid
77	     the initialization overhead of the two-way algorithm.  */
78	  if (memcmp (haystack, needle, needle_len) == 0)
79	    return (char *) haystack;
80	
81	  /* Perform the search.  Abstract memory is considered to be an array
82	     of 'unsigned char' values, not an array of 'char' values.  See
83	     ISO C 99 section 6.2.6.1.  */
84	  if (needle_len < LONG_NEEDLE_THRESHOLD)
85	    return two_way_short_needle ((const unsigned char *) haystack,
86	                                 haystack_len,
87	                                 (const unsigned char *) needle, needle_len);
88	  return two_way_long_needle ((const unsigned char *) haystack, haystack_len,
89	                              (const unsigned char *) needle, needle_len);
90	}
