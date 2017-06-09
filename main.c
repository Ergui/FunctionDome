#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int searchNum();
double bubleSort();
char * password();
double power(double,int);
double calcCircle(doube);
double calcRectangle(double,double);
double calctrangle(double,double);
double validate(double);
double calcProcess(double,double);
double calcCirclePeocess(double);
int digitalToChin();
int malloc_MOm();
int search();
double s;
int main()
{
    //printf("%d的%d次方等于：%.2lf\n",5,2,power(5,2)); double s;
    double radius;
    int choise;
    double width, height;
    //double s;//定义为全局变量
    printf("1,圆\n");
    printf("2,矩形\n");
    printf("3,三角形\n");
    printf("本系统支持三种图形面积，请选择: ");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
        printf("请输入圆的半径，我来计算圆的面积：");
        s = calcCirclePeocess(radius);
        break;
    case 2:
        printf("请输入长方形的长和宽,我来计算圆的面积：");
        s = calcProcess(width,height);
        break;
    case 3:
        printf("请输入三角形的底边和高,我来计算圆的面积：");
        s = calcProcess(width,height)/2;
        break;
    default:
        printf("目前只持支三种图形的输入，请在1-3之间选择！");
    }

    printf("the area is %.2lf",s);
    return 0;

}

//返回圆的面积
double calcCircle(double radius)
{
    return 3.14 * pow(radius,2);
}

//计算长方形的面积
double calcRectangle(double width, double height)
{
    return width * height;
}

//计算三角形的面积
double calctrangle(double width,double height)
{
    return width * height /2;
}

//三角形和长方形的计算过程函数
double calcProcess(double width,double height)
{
   //double s;
     do{
            scanf("%lf,%lf",&width,&height);
            if(!validate(width) || !validate(height))
            {
                printf("输入的数不正确，请重新输入：");
            }
        }while(!validate(width) || !validate(height));
        return s = calcRectangle(width,height);
}

double calcCirclePeocess(double radius)
{
      //double s;
      do
        {
            scanf("%lf",&radius);
            if(!validate(radius))
            {
                printf("the number is wrong again:");
            }
        }
        while(!validate(radius));
        //需要对输入的数据进行判断,非负
        return s = calcCircle(radius);
}


//对用户的输入进行非负验证(输入正确的值)
double validate(double num)
{
    return num > 0;//如果num > 0,会返回一个非零值，表示真
}


//内置函数的使用举例
void function1()
{
    /**
    *常见的内置函数一 位于 <math.h>中
    */
    //ceil 想上取整（进一）
    printf("%.2lf\n",ceil(98.1));
    //floor 向下取整（去尾）
    printf("%.2lf\n",floor(98.9));
    //平方根
    printf("%.2lf\n",sqrt(16.0));
    //平方
    printf("%.2lf\n",pow(5,2));
}


//内置函数的使用二
void function2()
{
    printf("***********************\n");
    /**
    * 常见的内置函数二 位于 <stdlib.h>中
    */
    //1.设置随机种子,它需要一个无符号整形，例如：12345
    // 1.1 一般和时间联用，防止随机数一直是那个一
    srand(time(NULL));
    //2.取随机数
    int num = rand();
    printf("%d",num);
    //exit 正常退出应用程序
    //exit(0);//0,表示正常退出，没有错误，非零表示异常退出
    //system 函数也在 <stdlib.h> 中
    //system(color XX) 改变颜色
    /**
    *颜色是由两个十六进制数字指定，第一个为背景色，第二个为前景色
    *每个数字可以为下列值之一：
     黑色 = 0 蓝色 = 1 绿色 = 2 湖蓝色 = 3
     红色 = 4 紫色 = 5 黄色 = 6 白色 = 7
     灰色 = 8 淡蓝色 = 9 淡绿色 = A 淡红色 = C
     淡紫色 = D 淡黄色 = E 亮白色 = F
    */
    printf("*****************");
    printf("这里是普通文字：\n");
    // /system("color 5E");
    //system(puase) 暂停一下
    //system(puase);
    //system("cls") 清屏（可以制作动画）
    // /system("cls");
    //system("shutdown /r /t 180"); //180秒后自动关机
    //system("shutdown /a"); //取消自动关机
}


//函数查找数组，并输出该数对应的下标
int search()
{
    int searchNum; //用户输入的数字
    int searchNumIndex = -1; //用户输入的数字的索引，找不到时返回-1
    int i;
    int nums[5] = {54,93,72,2,4};
    printf("请输入所要查找的数字：");
    scanf("%d",&searchNum);
    for(i=0; i<5; i++)
    {
        if(searchNum == *(nums + i))
        {
            //输入元素对应的索引
            searchNumIndex = i;
            break;
        }
    }

    //找到的元素下标
    return searchNumIndex;
}

//利用冒泡法对数组进行排序
double bubleSort()
{
    return;
}


//用户输入密码（6位，错误则重新输入），返回并打印用户输入的正确密码
char * password() {
    return;
}

//输入一个数输出它的平方
double power(double num1,int num2)
{
    int i;
    double result = 1;
    for(i=0; i<num2; i++)
    {
        result *= num1; //累乘
    }
    return result;
}


//输入阿拉伯数字自动转换成中文大写
int digitalToChin()
{
    /*printf("%d\n",isupper('a'));
    printf("%d\n",isalpha('a'));
    printf("%d\n",isdigit(50));
    printf("%c\n",toupper('a'));
    */
    char unit[10][20] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
    int input_Num;
    int count=0;
    int i=0;
    char array[10];
    printf("input you number: ");
    //用户输入的数字
    scanf("%d",&input_Num);
    while(input_Num != 0)
    {
        array[i] = input_Num % 10;
        input_Num /= 10;
        i++;
        count++;
    }
    printf("这个数有%d位。\n",count);

    for(i=0; i<10; i++)
    {
        printf("%d, ",array[i]);
    }

    printf("\n");
    for(i=0; i<10; i++)
    {
        printf("%d -> %s \t\n",array[i],unit[array[i]]);

    }
}


//malloc 动态内存空间
int malloc_MOm()
{
    int i;
    int * nums;
    nums = (int *)malloc(20);
    for(i=0; i<5; i++)
    {
        printf("input the %d number:",i+1);
        scanf("%d",nums+i);

    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",*(nums + i));
    }


}
