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
    //printf("%d��%d�η����ڣ�%.2lf\n",5,2,power(5,2)); double s;
    double radius;
    int choise;
    double width, height;
    //double s;//����Ϊȫ�ֱ���
    printf("1,Բ\n");
    printf("2,����\n");
    printf("3,������\n");
    printf("��ϵͳ֧������ͼ���������ѡ��: ");
    scanf("%d",&choise);
    switch(choise)
    {
    case 1:
        printf("������Բ�İ뾶����������Բ�������");
        s = calcCirclePeocess(radius);
        break;
    case 2:
        printf("�����볤���εĳ��Ϳ�,��������Բ�������");
        s = calcProcess(width,height);
        break;
    case 3:
        printf("�����������εĵױߺ͸�,��������Բ�������");
        s = calcProcess(width,height)/2;
        break;
    default:
        printf("Ŀǰֻ��֧����ͼ�ε����룬����1-3֮��ѡ��");
    }

    printf("the area is %.2lf",s);
    return 0;

}

//����Բ�����
double calcCircle(double radius)
{
    return 3.14 * pow(radius,2);
}

//���㳤���ε����
double calcRectangle(double width, double height)
{
    return width * height;
}

//���������ε����
double calctrangle(double width,double height)
{
    return width * height /2;
}

//�����κͳ����εļ�����̺���
double calcProcess(double width,double height)
{
   //double s;
     do{
            scanf("%lf,%lf",&width,&height);
            if(!validate(width) || !validate(height))
            {
                printf("�����������ȷ�����������룺");
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
        //��Ҫ����������ݽ����ж�,�Ǹ�
        return s = calcCircle(radius);
}


//���û���������зǸ���֤(������ȷ��ֵ)
double validate(double num)
{
    return num > 0;//���num > 0,�᷵��һ������ֵ����ʾ��
}


//���ú�����ʹ�þ���
void function1()
{
    /**
    *���������ú���һ λ�� <math.h>��
    */
    //ceil ����ȡ������һ��
    printf("%.2lf\n",ceil(98.1));
    //floor ����ȡ����ȥβ��
    printf("%.2lf\n",floor(98.9));
    //ƽ����
    printf("%.2lf\n",sqrt(16.0));
    //ƽ��
    printf("%.2lf\n",pow(5,2));
}


//���ú�����ʹ�ö�
void function2()
{
    printf("***********************\n");
    /**
    * ���������ú����� λ�� <stdlib.h>��
    */
    //1.�����������,����Ҫһ���޷������Σ����磺12345
    // 1.1 һ���ʱ�����ã���ֹ�����һֱ���Ǹ�һ
    srand(time(NULL));
    //2.ȡ�����
    int num = rand();
    printf("%d",num);
    //exit �����˳�Ӧ�ó���
    //exit(0);//0,��ʾ�����˳���û�д��󣬷����ʾ�쳣�˳�
    //system ����Ҳ�� <stdlib.h> ��
    //system(color XX) �ı���ɫ
    /**
    *��ɫ��������ʮ����������ָ������һ��Ϊ����ɫ���ڶ���Ϊǰ��ɫ
    *ÿ�����ֿ���Ϊ����ֵ֮һ��
     ��ɫ = 0 ��ɫ = 1 ��ɫ = 2 ����ɫ = 3
     ��ɫ = 4 ��ɫ = 5 ��ɫ = 6 ��ɫ = 7
     ��ɫ = 8 ����ɫ = 9 ����ɫ = A ����ɫ = C
     ����ɫ = D ����ɫ = E ����ɫ = F
    */
    printf("*****************");
    printf("��������ͨ���֣�\n");
    // /system("color 5E");
    //system(puase) ��ͣһ��
    //system(puase);
    //system("cls") ��������������������
    // /system("cls");
    //system("shutdown /r /t 180"); //180����Զ��ػ�
    //system("shutdown /a"); //ȡ���Զ��ػ�
}


//�����������飬�����������Ӧ���±�
int search()
{
    int searchNum; //�û����������
    int searchNumIndex = -1; //�û���������ֵ��������Ҳ���ʱ����-1
    int i;
    int nums[5] = {54,93,72,2,4};
    printf("��������Ҫ���ҵ����֣�");
    scanf("%d",&searchNum);
    for(i=0; i<5; i++)
    {
        if(searchNum == *(nums + i))
        {
            //����Ԫ�ض�Ӧ������
            searchNumIndex = i;
            break;
        }
    }

    //�ҵ���Ԫ���±�
    return searchNumIndex;
}

//����ð�ݷ��������������
double bubleSort()
{
    return;
}


//�û��������루6λ���������������룩�����ز���ӡ�û��������ȷ����
char * password() {
    return;
}

//����һ�����������ƽ��
double power(double num1,int num2)
{
    int i;
    double result = 1;
    for(i=0; i<num2; i++)
    {
        result *= num1; //�۳�
    }
    return result;
}


//���밢���������Զ�ת�������Ĵ�д
int digitalToChin()
{
    /*printf("%d\n",isupper('a'));
    printf("%d\n",isalpha('a'));
    printf("%d\n",isdigit(50));
    printf("%c\n",toupper('a'));
    */
    char unit[10][20] = {"��","Ҽ","��","��","��","��","½","��","��","��"};
    int input_Num;
    int count=0;
    int i=0;
    char array[10];
    printf("input you number: ");
    //�û����������
    scanf("%d",&input_Num);
    while(input_Num != 0)
    {
        array[i] = input_Num % 10;
        input_Num /= 10;
        i++;
        count++;
    }
    printf("�������%dλ��\n",count);

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


//malloc ��̬�ڴ�ռ�
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
