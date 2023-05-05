int maxVowels(char * s, int k){
    int n=strlen(s);
    int a[n];
    int vo=0,len=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||  s[i]=='o' ||  s[i]=='u')
        {
            vo++;
        }
        a[i]=vo;
        if(i>=k) len=a[i]-a[i-k];
        else len=a[i];
        if (len>ans) ans=len;
    }
    return ans;
}
