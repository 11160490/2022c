# 2022c
資傳一甲 程式設計 程式倉庫

# Week06
## 06-1 搭鷹架
```cpp
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;i++)
    {
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```

## 06-2 金字塔
```cpp
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;i++)
    {
        int space=5-i;
        int star=i*2-1;
        for(int k=0; k<space; k++)
        {
            printf(" ");
        }
        for(int k=0; k<star; k++)
        {
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```

## 06-3 暴力找因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數:");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```

## 06-4 輾轉相除
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1)
    {
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if (c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```

## 06-5 if成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立,所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西,幾乎都成立\n");
}
```

## 08-1 用for畫直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for (int k=1;k<=n;k++)
        {
            if (k<=n-i) printf(" ");
            else printf("*");
        }
    printf("\n");
    }
}
```

## 08-2 用while畫直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n,i=1,h=1;
	scanf("%d",&n);
	int space=n-1;
	while (i<=n)
	{
		int h=1;
		while (h<=n)
		{
			if (h<=space)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			h++;
		}
		printf("\n");
		i++;
		space--;
	}
}
```

## 08-3 判斷質數
```cpp
#include <stdio.h>
int main()
{
    printf("判斷輸入的數字是不是質數:");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++)
    {
        if (n%i==0) bad=1;
    }
    if (bad==0) printf("%d 是質數",n);
    else printf("%d 不是質數",n);
}
```

## 08-4 質數判斷並列出
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2;n<=a;n++)
	{
		int bad=0;
		for (int i=2;i<n;i++)
		{
			if (n%i==0) bad=1;
		}
		if (bad==0) printf("%d ",n);
	}
}
```
