t rem, i=1, octal=0;
    while (n!=0)
    {
        rem = n% 8;
        n /= 8;
        octal+=rem*i;
        i*=10;