//
//  main.c
//  qqq
//
//  Created by s20181106117 on 2019/9/24.
//  Copyright © 2019 yxy. All rights reserved.
//

#include <stdio.h>
int main() {
    int i = 5;
    char *p,*q;
    int j=10;
    p=(char *)&i;
    q=(char *)&j;
    printf("p=%x\n",p);
    printf("&i=%x\n",&i);
    printf("*(p+3)=%x\n",*(p+3));
    printf("*p=%x\n",*p);
    printf("sum=%d\n",*p+*q);
    return 0;
}
