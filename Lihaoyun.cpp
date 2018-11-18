#include <stdio.h>                                                                     //声明  
#include <string>                                                                      //声明 
#include <iostream>                                                                    //声明
using namespace std;                                                                   
int main() {
    int i;                                                                             //定义i
    char s[300],t[300];                                                                //定义s和t
	cout<<"pleace input one string:";                                                  //输入提示
	cin>>s;                                                                            //输入
    for(i = 0; s[i]; ++i) {                                                            //for的循环执行
        if(s[i] >= 'v'&&s[i]<='z'||s[i]>='V'&&s[i]<='Z') t[i] = s[i]-21;               //如果有字母符合'v'<=s[i]<='Z'或'V'<=s[i]<='Z'那么s[i]中符合的字母-21，否则进入下一条语句
        else if (s[i]>='a'&&s[i]<='u'||s[i]>='A'&&s[i]<='Z') t[i] = s[i] + 5;          //如果有字母符合'a'<=s[i]<='u'或'A'<=s[i]<='U'那么s[i]中符合的字母+5，否则进入下一条语句
		else t[i]=s[i];                                                                //如果都不符合的则直接输出
		
    }
    t[i] = '\0';
    printf("%s\n",t);                                                                  //输出
    return 0;
}