//https://www.lintcode.com/problem/complex-number-multiplication/description

class Solution {
public:
    /**
     * @param a: a string
     * @param b: a string
     * @return: a string representing their multiplication
     */
     
    string complexNumberMultiply(string &a, string &b) {
        // Write your code here
        string a1="",a2="",b1="",b2="", result;
        int x1,y1,x2,y2,x,y;
        
        int i=0;
        while(a[i]!='+')
            a1+=a[i++];
            i++;
        while(a[i]!='i')
            a2+=a[i++];
            
        i=0;
        while(b[i]!='+')
            b1+=b[i++];
        i++;
        while(b[i]!='i')
            b2+=b[i++];
            
            
        x1=stoi(a1);
        y1=stoi(a2);
        x2=stoi(b1);
        y2=stoi(b2);
        
        x=x1*x2-y1*y2;
        y=x1*y2+x2*y1;
        
        result = to_string(x)+"+"+to_string(y)+"i";
        return result;
            
    }
};
