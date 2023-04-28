int lastStoneWeight(int* stones,int n)
{
    while(1)
    {
        int a=stones[0],aI=0;
        for (int i=0;i<n;i++)
        {
            if(stones[i]>a)
            {
                a=stones[i];
                aI=i;
            }
        }
        stones[aI]=0;
        int b=stones[0],bI=0;
        for (int i=0;i<n;i++)
        {
            if(stones[i]>b)
            {
                b=stones[i];
                bI=i;
            }
        }
        stones[bI]=0;
        if(a==0 && b==0) return 0;
        if(a!=0 && b==0) return a;
        stones[aI]=a-b;
    }
    return 0;
}
