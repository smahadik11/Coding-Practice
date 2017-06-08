Source : Leetcode.com

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

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


Remove Duplicate Letters
Difficulty:Hard

Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example:
Given "bcabc"
Return "abc"

Given "cbacdcbc"
Return "acdb"