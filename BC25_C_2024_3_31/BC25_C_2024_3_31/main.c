#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告
/*BC25  计算体重指数
	@author:liang
	time:2024年3月31日16点20分
	题目描述:{问题：计算BMI指数（身体质量指数）。
	BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass Index，简称BMI）
	是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
	主要用于统计用途,当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
	数据范围：输入的数据满足 50≤n≤180 
	BMI = 体重数 / 身高（以米为单位）
	}
*/

/*输入描述
	一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。	
*/

/*输出描述
	一行，BMI指数（保留两位小数）。
*/

/*示例
	输入:70 170
	输出:24.22
*/

#include <stdio.h>
#include "math.h"
int main()
{
	int weight = 0;						//创建体重变量
	int highth = 0;						//创建身高变量
	float ret = 0.0;					//创建接受结果变量
	scanf("%d %d", &weight, &highth);	//输入weight, highth
	if ((50 <= weight && weight <= 180) && (50 <= highth && highth <= 180)) {	//范围判断
		ret = weight / (float)(pow(highth, 2)/10000);				//计算
	}
	printf("%.2f\n", ret);									//printf
	return 0;
}