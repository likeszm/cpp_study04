/*
* 名称：运算符测试
* 
* 收获：
* ，逗号运算符强制了先算左侧再算右侧的表达式，并且返回最右侧的值
* ^ 按位异或运算
*/
#include <iostream>

void qustion_mark_test(void);
void comma_test(void);
void exclusive_or_test(void);

int main()
{
    //qustion_mark_test();
    //comma_test();
    //exclusive_or_test();



    std::cout << "\n测试完成\n";
    return 0;
}

void qustion_mark_test(void)
{
    int x = 11, y = 12;
    char anser = (x == y ? 'Y' : 'N');
    std::cout << "Anser = " << anser << std::endl;
}

void comma_test(void)
{
    int a = 1, b = 2, c = 3;
    std::cout << "a = \t" << a << std::endl
        << "b = \t" << b << std::endl
        << "c = \t" << c << std::endl;

    c = (a = 19, b = 5, a++);
    std::cout << std::endl << "c = (a = 19, b = 5, a++);" << std::endl << std::endl;

    std::cout << "a = \t" << a << std::endl
        << "b = \t" << b << std::endl
        << "c = \t" << c << std::endl;
}

void exclusive_or_test(void)
{
    int A = 5; //0101
    int B = 3; //0011
    //预期结果：0110B == 6
    std::cout << "A = 0101 " << std::endl;
    std::cout << "B = 0110 " << std::endl;
    std::cout << "A^B = " << (A ^ B) << std::endl;
}
