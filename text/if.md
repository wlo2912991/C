# IF
```
if(條件式){執行程式碼}    
如果條件為真 則執行
else {程式碼}
不為真則執行else

else為可選

```
```
int main(void)
{
   int num;
   printf("請輸入一個整數:");
   scanf("%d",&num);
   
   if(num>0)		/* 判別num是否大於0 */
      printf("您鍵入的整數大於0\n");
   else   		/* 如果num不是大於0，則執行下面的敘述 */
      printf("您鍵入的整數小於或等於0\n");      
      
   printf("程式結束\n"); 

   system("pause");
   return 0;
}
```
## if else裡面再包含if
```
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("Your score:"); 
   scanf("%d",&score);

   if (score>=80)
      printf("%d is A\n",score);			/* 印出A */
   else if (score>=70)
            printf("%d is B\n",score);		/* 印出B */
         else if (score>=60)
                  printf("%d is C\n",score);	/* 印出C */
               else
                  printf("Failed!!\n");	/* 印出字串"Failed!!" */

   system("pause");
   return 0;
}
```

# 題目
```
輸入三個整數
由大到小進行輸出
```
```
輸入四則運算
輸出答案
```
```
輸入三個邊長
判斷是否為正三角形
```
