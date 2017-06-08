bool isNumber(char* s) {
    
    bool isDigit = 0;
    bool isLetter = 0;
    unsigned int i = 0;  
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
            isDigit = 1;
        else
           isLetter = 1;
 
    }
    if(isLetter == 0)
        return 1;
    return 0;
}