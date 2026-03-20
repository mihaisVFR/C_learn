# include <stdio.h>
# include <windows.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>


void depositProfit(){
    unsigned int n;
    float a;
    a = (float)1000;
    printf("%3s\t%5s\n", "Год", "Сумма");

    for(n = 1 ; n <= 10; n++) {
        a += a * (float) 0.05;
        printf("%d\t%2f\n",n, a);
    }
}

void e_in_range(float x){
    double total_e = 1;
    float counter_factorial = 1, x_in_range = 1;
    int  n = 1;

    while (n < 10){
        counter_factorial *= (float)n--;
        n+=2;
        total_e += x_in_range / counter_factorial;
        x_in_range *= x;
    }
    printf("Число е в степени %.0f = %.10f\n",x, total_e);
}


void e_const(){
    double total_e = 1, counter_factorial = 1;
    int  n = 1;

    while (n < 20){
        counter_factorial *= n--;
        printf("%f\n", counter_factorial);
        n+=2;
        total_e += 1 / counter_factorial;
    }
    printf("%.20f\n", total_e);
}

void math1(){
    int n, total = 1;

    printf("Введите неотрицательное целое число : ");
    scanf("%d", &n);
    if (n < 0){
        printf("Число %d отрицательное и будет взято по модулю\n", n);
        n %= 1;
    }
    while (n >= 1){
        total *= n--;
    }
    printf("Факториал %d\n", total);

}

void encrypt() {
    int number;

    printf("Введите четырехзначное число для шифрования: ");
    scanf("%d", &number);

    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;

    // Шифрование
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // Обмен
    int temp = d1; d1 = d3; d3 = temp;
    temp = d2; d2 = d4; d4 = temp;

    int encrypted = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    printf("Зашифрованное число: %04d\n", encrypted);
}

void decrypt() {
    int encrypted;

    printf("Введите зашифрованное четырехзначное число: ");
    scanf("%d", &encrypted);

    int d1 = encrypted / 1000;
    int d2 = (encrypted / 100) % 10;
    int d3 = (encrypted / 10) % 10;
    int d4 = encrypted % 10;

    // Обратный обмен
    int temp = d1; d1 = d3; d3 = temp;
    temp = d2; d2 = d4; d4 = temp;

    // Дешифрование
    d1 = (d1 - 7 + 10) % 10;
    d2 = (d2 - 7 + 10) % 10;
    d3 = (d3 - 7 + 10) % 10;
    d4 = (d4 - 7 + 10) % 10;

    int original = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    printf("Исходное число: %04d\n", original);
}

int ma() {
    int choice;

    printf("1 - Шифрование\n");
    printf("2 - Дешифрование\n");
    printf("Выберите режим: ");
    scanf("%d", &choice);

    if (choice == 1) {
        encrypt();
    } else if (choice == 2) {
        decrypt();
    } else {
        printf("Неверный выбор\n");
    }

    return 0;
}

void encript_code(int flag){
    int numb, cript_digit, counter, cript_numb, range;

    while (1){
        counter = 1, cript_numb = 0, range = 1;
        printf("Введите 4-х значное число 0 для выхода");
        scanf("%d", &numb);
        if (numb == 0)
            break;
        else
            if (numb < 1000 || numb > 9999)
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

int compound()
{
    unsigned int n = 1;
    double r = 0.05, p;
    for(p=1000; n<=10; n++) {
        p += p * r;
        printf("На конец года на счете %.2f\n", p);}
    printf("Общая сумма после 10 лет %.2f", p);
    scanf("Press enter");
    return 0;
}

int compound12()
{
    double amount; /*сумма на счете*/
    double principal = 1000.0; /*начальный капитал*/
    int rate; /*годовая процентная ставка*/
    unsigned int year; /* счетчик лет */
    for (rate = 5; rate <= 10; rate++) {
        printf("\nРасчет для %d%% ставки\n", rate);
        printf("%8s%41s\n", "Год", "Остаток на счете");
        for (year = 1; year <= 10; year++) {
            amount = principal * pow(1 + (double)rate / 100, year);
            printf("%4d%21.2f.\n", year, amount);
        }
    }
    return 0;
}



void oneToHundred(){
    unsigned int count, sum = 0;
    double shlumpa = 333.546372;
    char * tab;

    for (count = 1; count<=99; count+=2){
        printf("%d + %d", sum, count);
        sum+=count;
        printf(" = %d\n", sum);
    }
    printf("Сумма нечетных чисел от 1 до 99 равнв %d\n", sum);
    for (count = 1; count<=5; count++)
        printf("%15.*f\n",count, shlumpa);
    printf("%-10.2f\n",pow(2.5,3));
    count = 1;
    while(count <=20){
        if (count % 5 == 0) {
            tab = "\n";
        }else{
            tab = "\t";
        }
        printf("%d%s",count++, tab);}
    }

void input_test1() {
    int intVal, charval = 0;
    scanf("%d", &intVal);
    while (charval != EOF) {
        charval = getchar();
        switch (charval) {
            case '\n': /* игнорировать перевод строки */
            case '\t': /* табуляции */
            case ' ': /* и пробелы */
                break;
            default:
                printf("Integer: %d\nCharacter: %c\nr", intVal, charval);
                scanf("Enter");
        }
    }
}

void do_check(void){
    unsigned int digit = 0;
    do{
        printf("%d ", digit+=2);
        if (digit % 5 == 0)
            puts("");
    } while(digit < 100);
    scanf("Enter");
}

void ex_for_six(void){
    int x=0;
    for ( x = 19; x <= 51; x += 8 )
        printf( "%d ", x ) ;
    scanf("%d", x);
}

void add_for_ten(void){
    int limit, user_digit, sum = 0 , counter;
    puts("введите число слогаемых");
    scanf("%d", &limit);
    for (counter = 1; limit >= counter; counter++){
        printf("Введите слогаемое %d ", counter);
        scanf("%d", &user_digit);
        sum += user_digit;
    }
    printf("Сумма чисел равна %d\n", sum );
    scanf("%d" , &counter);
}

int ten_for(void){
    int user_digit=0, counter = 0;
    double sum = 0;
    do {
        scanf("%d", &user_digit);
        if (user_digit == 9999)
            break;
        sum += user_digit;
        counter++;
    }while(user_digit != 9999);
    sum = sum / counter;
    printf("Среднее аривметическое %.2f\n", sum);
    return 0;
}

void add_for_eleven(void){
    int limit, user_digit, min, counter = 1;

    puts("введите число слогаемых");
    scanf("%d", &limit);
    printf("Введите слогаемое %d ", counter);
    scanf("%d", &min);
    for (counter = 2; limit >= counter; counter++){
        printf("Введите слогаемое %d ", counter);
        scanf("%d", &user_digit);
        if (min >= user_digit)
            min = user_digit;
    }
    printf("Минимальное число %d\n", min );
    scanf("%d" , &counter);
}

void for_twelf(void){
    int n , sum = 1;
    for(n = 1; n<=15; n++){
        if (n % 2 != 0){
            printf("%d" , sum);
            sum *= n;
            printf(" * %d = %d\n",n, sum);
        }
    }
    printf("Произведение нечетных чисел от 1 до 15 = %d\n", sum);
}

void for_forteen(void){
    int total, n = 1, counter;
    printf("_________________________________________\n|"); /* 30*/
    for (counter = 1; counter<=5; counter++){
        printf("   %d!\t|",counter);
    }
    printf("\n_________________________________________\n|");
    for (counter = 1; counter<=5; counter++){
        n *= counter;
        printf("   %d\t|",n);

    }printf("\n_________________________________________\n|");
}

void for_stars(void){
    int n, i, j;
    for(n=1; n<=10; n++){
        for(j = n; j>=0; j--)
            printf(" ");
        for(i=10; i>=n; i--)
            printf("*");
        printf("\n");
    }
}

int client_division(void){
    int account1 = 40702810 , account2 = 40802810, account3 = 40902810;
    int max_credit1 = 5000, max_credit2 = 4000, max_credit3 = 3000;
    double money1 = 1234.21, money2 = 6294.51, money3 = 2233.44;
    double money[3] = {money1, money2, money3};
    int clients[3] = {account1,account2, account3};
    int max_credit[3] = {max_credit1, max_credit2, max_credit3};
    int counter, i, n;
    char * answer;
    n = 0;
    int *arr = (int*)malloc(3 * sizeof(int));

    for(counter = 0 ; (counter <= sizeof(clients) / sizeof(clients[0]) -1); counter++){
        if ((double )max_credit[counter] / 2<= money[counter]){
            answer = "Да";
            arr[n] = clients[counter];
            n++;
        }else answer = "Нет";
        printf("%d. Клиент - %d, Макс_кредит_до - %d, Макс_кредит_после - %d,кредит по счету %f,"
               " Превышение кредита %s\n",counter+1, clients[counter], max_credit[counter], max_credit[counter]/2,
               money[counter], answer);

    }
    printf("список клиентов с превышением:\n");
    for (i=0 ; i < n; i++){
        printf("%d\n", arr[i]);
    }
    free(arr);
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

    SetConsoleOutputCP(CP_UTF8);//   compound12();
    client_division();
    for_stars();
  //  compound12();
 //   for_forteen();
//    for_twelf();
    add_for_eleven();
//    ten_for();
//    ex_for_six();
//    add_for_ten();
//    do_check();
//    input_test1();
//    oneToHundred();
//    depositProfit();
//    e_in_range(2.0);
//    e_const();
//    math1();
//    encript_code(1);
//    triangle1();
//    insert_circle();
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

