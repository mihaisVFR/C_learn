# include <stdio.h>
# include <windows.h>


void quad(void){
    int num0 = 0 ;
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
    int num7 = 7;
    int num8 = 8;
    int num9 = 9;
    int num10 = 10;


    printf( "Число\tКвадрат\tКуб\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n"
                   " %d\t%d\t%d\n",num0, num0*num0, num0*num0*num0,
                                   num1, num1*num1,num1*num1*num1,
                                   num2, num2*num2,num2*num2*num2,
                                   num3, num3*num3,num3*num3*num3,
                                   num4, num4*num4,num4*num4*num4,
                                   num5, num5*num5,num5*num5*num5,
                                   num6, num6*num6,num6*num6*num6,
                                   num7, num7*num7,num7*num7*num7,
                                   num8, num8*num8,num8*num8*num8,
                                   num9, num9*num9,num9*num9*num9,
                                   num10, num10*num10,num10*num10*num10);
}

void separator(void){
    /*  функция разделяет порядки в заданом числе табуляцией */
    int numb;
    char string[20];

    int p1;
    int p2;
    int p3;
    int p4;
    int p5;

    scanf("%d", &numb);
    /* математический метод разделения */
    p1 = numb / 10000;
    p2 = (numb - p1*10000) / 1000;
    p3 = (numb - p1*10000 - p2*1000) / 100;
    p4 = (numb - p1*10000 - p2*1000 - p3*100) / 10;
    p5 = numb % 10;


    printf("математический: %d\t%d\t%d\t%d\t%d\n", p1, p2 , p3, p4, p5);
    sprintf(string,"%d", numb);
    printf("часть массива: %c\t%c\t%c\t%c\t%c\n", string[0], string[1] , string[2], string[3], string[4]);
}

int even_or_odd(void)
{
    int num;
    printf("Введите целое число\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Четное\n");
    }
    else{
        printf("Нечетное\n");
    }
    return 0;
}

void equal(void)
{
    int a;
    int b;
    int c;
    int d;
    int f;
    int min;

    printf("введите 5 целых чисел\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    if (a <= b){
        if ( a <= c) {
            if (a <= d) {
                if (a <= f) {
                    min = a;
                }
            }
        }
    }
    if (b <= a){
        if ( b <= c) {
            if (b <= d) {
                if (b <= f) {
                    min = b;
                }
            }
        }
    }
    if (c <= b){
        if ( c <= a) {
            if (c <= d) {
                if (c <= f) {
                    min = c;
                }
            }
        }
    }
    if (d <= b){
        if ( d <= c) {
            if (d <= a) {
                if (d <= f) {
                    min = d;
                }
            }
        }
    }
    if (f <= b){
        if ( f <= c) {
            if (f <= d) {
                if (f <= a) {
                    min = f;
                }
            }
        }
    }

    printf ("Наименьшее число %d\n", min);

}

void print_xyN(void)
{

    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", 'A','B','C','a','b','c','0','1','2','$','*', '+', '/',' ' );
    printf("                         *   \n"
           " *      *   *      *  *     *\n"
           "  *    *      *   *   *     *\n"
           "    **          **    *    **\n"
           "  *    *        *     *  *  *\n"
           " *      *      *      **    *\n");
}

void circle(void)
{
    float rad;
    const float PI = 3.14159f;
    printf("Введите радиус окружности\n");
    scanf("%f", &rad);
    printf("Диаметр = %f, Длинна окружности = %f, Площадь круга = %f\n", 2 * rad, 2 * rad * PI, PI * rad * rad );
}

void test(void)
{
    int x;
    int y;
    int z;
    int small;
    int large;


    printf("Введите 3 целых числа" );
    scanf("%d%d%d",&x,&y,&z);
    if (x<=y && x<=z) {
        small = x;
    }
    if (y<=x && y<=z) {
        small = y;
    }
    if (z<=y && z<=x){
        small = z;
        }

    if (x>=y && x>=z) {
        large = x;
    }
    if (y>=x && y>=z) {
        large = y;
    }
    if (z>=y && z>=x){
        large = z;
    }

    printf("Сумма чисел %d\nСреднее арефметическое %d\nПроизведение %d\n Наименьшее %d\nНаибольшее %d\n",
           x + y + z, (x + y + z)/3,x * y * z, small, large );
}

int multi()
/* функция multi перемножает целые числа */
{
    int x;
    int y;
    int z;
    int result;

    printf("Введите 3 целых числа\n");
    scanf("%d%d%d",&x,&y,&z);
    result = x * y * z;
    printf("Произведение чисел равно %d\n",result);
    return result;
}

int if_func()
{
    int num1;
    int num2;
    char answer;
    char yas = 'y';

    printf( "Введите 2 числа чтобы узнать их сравнение:\n \t(<>=)\n \t\tтаб тест");
    scanf( "%d%d", &num1,&num2);

    if (num1 == num2){
        printf ("%d равно %d\n", num1, num2);
    }
    if (num1 != num2){
        printf ("%d не равно %d\n", num1, num2);
    }
    if (num1 < num2){
        printf ("%d меньше %d\n", num1, num2);
    }
    if (num1 > num2){
        printf ("%d ,больше %d\n", num1, num2);
    }
    printf("сравнение чисел %d и %d завершено\n", num1, num2);
    printf("повторить? ");
    scanf(" %c", &answer);
    if (answer==yas){
        if_func();
    }else{
        return 0;
    }

    return 0;
}


/*main - основная функция программы*/
int main()
{
    /* system("chcp 65001"); */
    int integer1; /*первое число вводимое пользователем*/
    int integer2;
    int sum;
    int multi_result;

    SetConsoleOutputCP(CP_UTF8);
    quad();
    separator();
    even_or_odd();
    print_xyN();
    equal();
    circle();
    test();
    multi_result = multi();
    printf("%d\n", multi_result);
    if_func();
    printf("Введите первое число \n");
    scanf("%d", &integer1); /*записать введенное пользователем в переменную integer1*/
    printf("Введите второе число \n");
    scanf("%d", &integer2); /*записать введенное пользователем в переменную integer2*/
    sum = integer1 + integer2;
    printf("Сумма %d\n", sum);

    return 0;
}

