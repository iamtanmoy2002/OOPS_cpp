//1704. Determine if String Halves Are Alike
class Solution {
public:
    bool is_vowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            return true;
        }
        else return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int a=0,b=0;
        for(int i=0;i<n/2;i++){
            if(is_vowel(s[i])==true)
            {
                a++;
            }
        }
        for(int j=n/2;j<n;j++){
            if(is_vowel(s[j])==true)
            {
                b++;
            }
        }
        return a==b;
    }
};