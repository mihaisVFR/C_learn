# include <stdio.h>
# include <windows.h>
#include <time.h>

void encript_code(int flag){
    int numb, cript_digit, counter, cript_numb, range;

    while (1){
        counter = 1, cript_numb = 0, range = 1;
        printf("Введите 4-х значное число 0 для выхода");
        scanf("%d", &numb);
        if (numb == 0)
            break;
        else
            if (numb < 1000 || numb > 10000)
                 printf ("Число слишком велико или слишком мало\n");
            else{
             while (counter != 5) {
                 if (flag)
                     cript_digit = (numb % 10 + 7) % 10;
                 else
                     cript_digit = (numb % 10 - 7 + 10 ) % 10;

                 if (counter <= 2)
                     cript_numb += cript_digit * range * 100;
                 else
                     cript_numb += cript_digit * range / 100;

                 range *= 10;
                 numb /=10;
                 counter++;
             }
             printf("Зашифрованое число %d\n", cript_numb);
             }
    }
}


void triangle1() {
    float a, b, c;

    while (printf("Введите стороны A B C: ") &&
           scanf("%f %f %f", &a, &b, &c) == 3 &&
           a >= 0 && b >= 0 && c >= 0) {

        puts((a == b && a == c  && b == c) ?
             "Прямоугольный треугольник существует" : "Прямоугольный треугольник не существует");
    }
}

void triangle(){
    float a, b, c;
    int counter = 0;

    while (1) {
        printf("Введите сторону А ");
        scanf("%f", &a);
        if (a == 0)
            break;
        printf("Введите сторону B ");
        scanf("%f", &b);
        if (b == 0)
            break;
        printf("Введите сторону C ");
        scanf("%f", &c);
        if (c == 0)
            break;
        if (c < a+b && a < b+c && b < c+a)
            puts("такой треугольник существует");
        else
            puts("такого треугольника не может быть");

    }
}

void circle_data( float radius){
    float PI = 3.14159f;

    printf("Диаметр круга равен %.2f\n", radius * 2);
    printf("Площадь круга равнв %.2f\n", PI * radius *radius);
    printf("Периметр круга равен %.2f\n", 2 * PI * radius);
}

void insert_circle(){
    float radius;

    while(1) {
        printf("Введите радиус круга, для выхода -1 ");
        scanf("%f", &radius);
        if (radius == -1)
            break;
        circle_data(radius);
    }
}
void unless_while(){
    int i = 1;

    while (1) {
        i *= 2;
        printf("%d ,", i);
    }
}


void chess() {
    int i = 0, counter = 1;

    while (i != 64){
        printf("* ");
        i++;
        if (i % 8 == 0 ){
            printf("\n");
            counter++;
            if (counter % 2 == 0)
                printf(" ");}

    }
}

void fo1(){

    int total, num;

    while (1){
        total = num = 0;
        printf("введите число -1 для выхода ");
        scanf("%d", &num);
        if (num == -1)
            break;
        while (num){
            if(num % 10 == 7)
                total++;
            num /= 10;
        }
        printf("в числе %d цифр 7\n", total);
    }
}

void stars100()
{
    int i = 100;

    while(i){
        if (i % 10 == 0 && i != 100)
            printf("\n");
        printf("*");
        i--;
    }
    printf("\n");
    while ( i<= 100) {
        if (i % 10 )
            printf("\n");
        printf("*");
        i++;
    }
}

void speed_test()
{
    int i = 0;
    clock_t start, end;
    double cpu_time_used;
    double total_time_used;

    start = clock();
    while (i != 30000000){
        start = clock();
        if (i % 1000000 ==0) {
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printf("Время счета до %d = %.40f\n", i, cpu_time_used);
        }
        i++;
    }

    end = clock();
    total_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("***** Общее счета до %d = %.40f\n", i, total_time_used);
}


int oct_to_dec()
{
    int numb, counter, dec;

    numb = counter =  1;
    dec = 0;

    while (1) {
        printf("Введите двоичное число (для выхода -1) ");
        scanf("%d", &numb);
        if (numb == -1)
            break;
        while (numb) {
            dec += (numb % 10) * counter;
            numb /= 10;
            counter *= 2;
        }
        printf("Десятичный эквивалени = %d\n", dec);
    }

    return dec;
}

int palindrom()
{
    int numb, p1,p2,p3,p4,p5;

    numb = 0;

    while (numb != -1 ) {
        printf("Введите 5-ти значное целое число > 0 (для выхода -1)");
        scanf("%d", &numb);

        if (numb != -1) {
            if (9 > numb % 10000 || numb < 1) {
                puts("Ошибка! Введите 5-ти значное число > 0");
            }
            else {
                p1 = numb / 10000;
                p2 = (numb - p1 * 10000) / 1000;
                p3 = (numb - p1 * 10000 - p2 * 1000) / 100;
                p4 = (numb - p1 * 10000 - p2 * 1000 - p3 * 100) / 10;
                p5 = numb % 10;

                if (p1 == p5 && p2 == p4)
                    printf("%d - Полиндром\n", numb);
                else
                    printf("%d - Не полиндром\n", numb);
            }
        }
        else
            printf("Всего доброго\n");
    }
    return 0;
}



int square()
{
    int a, b, input;

    printf("введите число от 1 до 21 ");
    scanf("%d", &input);
    a=1;
    while(a <= input){
        b=1;
        while (b <= input){
            printf("%s", (a == 1 || a == input) ? "* " : (b == 1 || b == input) ? "* " : "  ");
            b++;}
        printf("\n");
        a++;}
    return 0;
}


int else_flying()
{
    int x = 11;
    int y = 9;

    if ( x < 10 )
        if ( y > 10 )
            printf( "*****\n" );
        else
            printf( "#####\n" );
    printf( "$$$$$\n" );

    printf("\n\n");

    if ( x < 10 ) {
        if (y > 10)
            printf("*****\n");
        }else {
            printf("#####\n");
            printf("$$$$$\n");
        }
    return 0;
}



int table( void )

{
    int row = 10; /* инициализировать row */
    int column; /* определить column */
        while ( row >= 1 ) { /* цикл, пока row не станет < 1 */
            column = 1; /* в начале прохода установить column = 1 */
            while (column <= 10) { /* 10 проходов цикла */
                printf("%s", row % 2 ? "<" : ">"); /* вывод */
                column++; /* приращение счетчика*/
            }
            row--; /* уменьшить row */
            printf("\n");
        }
    return 0; /* показывает успешное завершение */
}

void while_test()
{
    int counter;
    counter = 1;

    printf("N\t10*N\t100*N\t1000*N\n");
    while ( counter <=10){
        printf("%d\t%d\t%d\t%d\n", counter, counter*10, counter*100, counter*1000);
        counter++;
    }
}

void max_number()
{
    int number, counter, largest, prelargest;
    largest = prelargest = -2147483648;
    counter = 1;

    while (counter <=10){
        printf("Введите целлое число : ");
        scanf("%d", &number);
        prelargest = largest ;
        if (number > largest)
            largest = number;

        counter++;
    }
    printf("наибольшее число из введённых это %d, второе самое большое чило %d\n", largest, prelargest);
}

void increm()
{
    int a = 1;
    printf("Применяю постдекрименант a = %d\n", a--);
    printf("a стало равно  %d\n", a);
    printf("Применяю предекрименант a = %d\n", a--);
    printf("a стало равно  %d\n", a);

    a = 1;
    while (a <= 10){
        printf("%d   ", a++);

    }
    puts("\n");
}


void week_salary()
{
    int hours;
    float hour_salary;

    while (1)
    {
        printf("Введите # отработанных часов (-1 для выхода): ");
        scanf("%d", &hours);
        if (hours == -1)
            break;
        printf("введите почасовой тариф $00.00 : ");
        scanf("%f", &hour_salary);
        if (hours <= 0 || hour_salary <= 0)
            puts("Ошибка, все значения должны быть >= 0");
        else
            if (hours <= 40)
                printf("Зарплата составит $%.2f\n", (float) hours * hour_salary);
            else
                printf("Зарплата составит $%.2f\n", (float)hours * hour_salary * 1.5);

    }
}


void credit_rate()
{
    float interest, principal, rate;
    unsigned int days;

    while (1){
        printf("Введите основную сумму ссуды (-1, если ввод закончен) : ");
        scanf("%f", &principal);
        if (principal == -1)
            break;
        printf("Введите процентную ставку : ");
        scanf("%f", &rate);
        rate /= 100;
        printf("Введите срок в днях : ");
        scanf("%d", &days);
        if (principal <= 0  || rate <= 0 || days <= 0){
            puts("Ошибка, все значения должны быть >= 0");
        }else{
            interest = principal * rate * (float)days / 365;
            printf("Проценты от ссуды составят $%.2f\n", interest);
        }

    }
}

int salary()
{
    char sales[100];
    float float_sales;

    while (1)
    {
        printf("ввведите сумму продаж в долларах (q если ввод закончен) : ");
        scanf("%s", &sales);
        if (sales[0] == 'q'){
            break;
        }
        sscanf(sales, "%f", &float_sales);
            if (float_sales <= 0.0f){
                puts("Значение должно быть >= 0\n");
            }
            else{
                printf("Зарплата $%.2f\n", 200.00 + float_sales * 0.09);
            }
    }
    return 0;
}

int credit_control()
{
    int account;
    float start_balance, cash, credit, limit, new_balance;

    account = 0;

    while (1){
        printf("\nВведите номер счета (-1 если ввод окончен) : ");
        if (account == -1){
            break;}
        scanf("%d", &account);
        printf("Введите начальный баланс : ");
        scanf("%f", &start_balance);
        printf("Введите общую сумму расходов : ");
        scanf("%f", &cash);
        printf("Из них кредитных : ");
        scanf("%f", &credit);
        printf("Введите предельный размер кредита : ");
        scanf("%f", &limit);

        new_balance = start_balance + cash - credit;
        if (limit < new_balance)
        {
            printf("Счет: %d\nПредельный размер кредита: %f\nБаланс: %f\n"
                   "ПРЕВЫШЕН ЛИМИТ КРЕДИТА!!!\n\n", account, limit, new_balance);
        }


    }

    return 0;
}

int gas_control1()
{
    int miles, counter;
    float gas, total;

    gas = total = 0;
    miles = counter = 0;

    while (gas != -1){
        printf("Введите расход бензина (-1 если ввод закончен) :");
        scanf("%f", &gas);
        if (gas > 0){
            printf("Введите пройденное растояние :");
            scanf("%d", &miles);
            printf("Для этой поездки миль с галона пройдено %.6f\n", (float)miles / gas);
            ++counter;
            total += (float)miles / gas;
        }

    }
    printf("Средний пробег с одного галона %f\n", total / (float)counter);
    return 0;
}

int gas_control()
{
    int miles, counter = 0;
    float gas, total;
    char input[50];

    gas = total = 0;

    while (input[0] != 'q' ){
        printf("Введите расход бензина (q если ввод закончен) :");
        scanf("%s", &input);
        if (input[0] == 'q')
            break;
        gas = atof(input);
        printf("Введите пройденное растояние :");
        scanf("%d", &miles);
        printf("Для этой поездки миль с галона пройдено %f\n", (float)miles / gas);
        ++counter;
        total += (float)miles / gas;
    }
    printf("Средний пробег с одного галона %f", total / (float)counter);
    return 0;
}

void chap2_2(void)
{
    int x, y, i, power ;


    i = 1;
    power = 1;

    puts("Введите число для возведения в степень");
    scanf("%d",&x);
    puts("Введите степень в которуюхотите возвести число");
    scanf("%d", &y);

    while (i <= y){
        power *= x;
        printf("%d\n", power);
        i++;
    }
    printf ("%d в степени %d равно %d\n", x, y, power);

}


void chap2_1(void)
{
    int x = 1;
    int sum = 0;
    int d;

    while (x != 11){
        printf("%d\n", x);
        sum += x++;
    }

    printf("Сумма %d\n", sum);
    scanf("%d", &d);
}

void chap2(void)
{
    int x = 1;
    int y = 2;
    int z;
    int d;
    float total  = 101.1234F;

    total += (float)x--;
    // total = total + x--;
    printf("%.2f\n", total);
    printf("%d\n", x);
    z = y + x++;
    z *= 2;

    (z < 10) ? puts("z меньше 10") :  puts("z больше 10");

    printf("%d\n", z);
    printf("%d\n", x);
    scanf("%d", &d);
}


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
    encript_code(0);
    triangle1();
    insert_circle();
//    unless_while();
//    chess();
//    fo1();
//    stars100();
//    speed_test();
//    oct_to_dec();
//    palindrom();
//    square();
//    else_flying();
//    table();
//    max_number();
//    while_test();
//    increm();
//    week_salary();
//    credit_rate();
//    salary();
//    credit_control();
//    gas_control1();
//    chap2_2();
//    chap2();
//    quad();
//    separator();
//    even_or_odd();
//    print_xyN();
//    equal();
//    circle();
//    test();
//    multi_result = multi();
//    printf("%d\n", multi_result);
//    if_func();
//    printf("Введите первое число \n");
//    scanf("%d", &integer1); /*записать введенное пользователем в переменную integer1*/
//    printf("Введите второе число \n");
//    scanf("%d", &integer2); /*записать введенное пользователем в переменную integer2*/
//    sum = integer1 + integer2;
//    printf("Сумма %d\n", sum);

    return 0;
}

