#include <iostream>

class Figure {
    public:
        Figure() {
            this->name = "Фигура";
            this->sides = 0;
        }
        std::string get() {
            return this->name;
        }
        int count() {
            return this->sides;
        }
        virtual int get_a() { return 0; }
        virtual int get_b() { return 0; }
        virtual int get_c() { return 0; }
        virtual int get_d() { return 0; }
        virtual int get_A() { return 0; }
        virtual int get_B() { return 0; }
        virtual int get_C() { return 0; }
        virtual int get_D() { return 0; }

    protected:
        std::string name;
        int sides;
};

class Triangle : public Figure {
    public:
        Triangle() {
            this->name = "Треугольник";
            this->sides = 3;
            this->a = 1;
            this->b = 2;
            this->c = 3;
            this->A = 30;
            this->B = 60;
            this->C = 90;
        }
        Triangle(int a, int b, int c, int A, int B, int C) {
            this->name = "Треугольник";
            this->sides = 3;
            this->a = a;
            this->b = b;
            this->c = c;
            this->A = A;
            this->B = B;
            this->C = C;
        }
        int get_a() {
            return a;
        }
        int get_b() {
            return b;
        }
        int get_c() {
            return c;
        }
        int get_A() {
            return A;
        }
        int get_B() {
            return B;
        }
        int get_C() {
            return C;
        }
    protected:
        int a, b, c;
        int A, B, C;
};

class Quadrangle : public Figure {
    public:
        Quadrangle() {
            this->name = "Четырехугольник";
            this->sides = 4;
            this->a = 1;
            this->b = 2;
            this->c = 3;
            this->d = 4;
            this->A = 20;
            this->B = 40;
            this->C = 60;
            this->D = 80;
        }
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
            this->name = "Четырехугольник";
            this->sides = 4;
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
            this->A = A;
            this->B = B;
            this->C = C;
            this->D = D;
        }
        int get_a() {
            return a;
        }
        int get_b() {
            return b;
        }
        int get_c() {
            return c;
        }
        int get_d() {
            return d;
        }
        int get_A() {
            return A;
        }
        int get_B() {
            return B;
        }
        int get_C() {
            return C;
        }
        int get_D() {
            return D;
        }
    protected:
        int a, b, c, d;
        int A, B, C, D;
};

class RightTriangle : public Triangle {
    public:
        RightTriangle() {
            this->name = "Прямоугольный треугольник";
            this->C = 90;
        }
        RightTriangle(int a, int b, int c, int A, int B) {
            this->name = "Прямоугольный треугольник";
            this->a = a;
            this->b = b;
            this->c = c;
            this->A = A;
            this->B = B;
            this->C = 90;
        }
};

class IsoscelesTriangle : public Triangle {
    public:
        IsoscelesTriangle() {
            this->name = "Равнобедренный треугольник";
            this->a = 1;
            this->c = 1;
            this->A = 40;
            this->B = 80;
            this->c = 40;
        }
        IsoscelesTriangle(int ac, int b, int AC, int B) {
            this->name = "Равнобедренный треугольник";
            this->a = ac;
            this->b = b;
            this->c = ac;
            this->A = AC;
            this->B = B;
            this->C = AC;
        }
};

class EquilateralTriangle : public Triangle {
    public:
        EquilateralTriangle() {
            this->name = "Равносторонний  треугольник";
            this->a = 1;
            this->b = 1;
            this->c = 1;
            this->A = 60;
            this->B = 60;
            this->C = 60;
        }
        EquilateralTriangle(int abc) {
            this->name = "Равносторонний  треугольник";
            this->a = abc;
            this->b = abc;
            this->c = abc;
            this->A = 60;
            this->B = 60;
            this->C = 60;
        }
};

class Rectangle : public Quadrangle {
    public:
        Rectangle() {
            this->name = "Прямоугольник";
            this->a = 2;
            this->b = 3;
            this->c = 2;
            this->d = 3;
            this->A = 90;
            this->B = 90;
            this->C = 90;
            this->D = 90;
        }
        Rectangle(int ac, int bd) {
            this->name = "Прямоугольник";
            this->a = ac;
            this->c = ac;
            this->b = bd;
            this->d = bd;
            this->A = 90;
            this->B = 90;
            this->C = 90;
            this->D = 90;
        }
};

class Square : public Quadrangle {
    public:
        Square() {
            this->name = "Квадрат";
            this->a = 2;
            this->b = 2;
            this->c = 2;
            this->d = 2;
            this->A = 90;
            this->B = 90;
            this->C = 90;
            this->D = 90;
        }
        Square(int a) {
            this->name = "Квадрат";
            this->a = a;
            this->c = a;
            this->b = a;
            this->d = a;
            this->A = 90;
            this->B = 90;
            this->C = 90;
            this->D = 90;
        }
};

class Parallelogram : public Quadrangle {
    public:
        Parallelogram() {
            this->name = "Параллелограмм";
            this->a = 2;
            this->b = 3;
            this->c = 2;
            this->d = 3;
            this->A = 80;
            this->B = 100;
            this->C = 80;
            this->D = 100;
        }
        Parallelogram(int ac, int bd, int AC, int BD) {
            this->name = "Параллелограмм";
            this->a = ac;
            this->c = ac;
            this->b = bd;
            this->d = bd;
            this->A = AC;
            this->B = BD;
            this->C = AC;
            this->D = BD;
        }
};

class Rhombus : public Quadrangle {
    public:
        Rhombus() {
            this->name = "Ромб";
            this->a = 2;
            this->b = 2;
            this->c = 2;
            this->d = 2;
            this->A = 80;
            this->B = 100;
            this->C = 80;
            this->D = 100;
        }
        Rhombus(int a, int AC, int BD) {
            this->name = "Ромб";
            this->a = a;
            this->c = a;
            this->b = a;
            this->d = a;
            this->A = AC;
            this->B = AC;
            this->C = BD;
            this->D = BD;
        }
};

void print(Figure &figure) {
    int count = figure.count();
    std::cout << figure.get() << ":\n";
    if (count == 3) {
        std::cout << "Стороны:" << " a=" << figure.get_a() << " b=" << figure.get_b() << " c=" << figure.get_c() << "\n";
        std::cout << "Углы:" << " A=" << figure.get_A() << " B=" << figure.get_B() << " C=" << figure.get_C() << "\n";
    }
    if (count == 4) {
        std::cout << "Стороны:" << " a=" << figure.get_a() << " b=" << figure.get_b() << " c=" << figure.get_c() << " d=" << figure.get_d() << "\n";
        std::cout << "Углы:" << " A=" << figure.get_A() << " B=" << figure.get_B() << " C=" << figure.get_C() << " D=" << figure.get_D() << "\n";
    }
}

int main() {
    Triangle t0;
    Quadrangle q0;

    RightTriangle t1(1, 1, 1, 30, 60);
    IsoscelesTriangle t2(2, 1, 40, 100);
    EquilateralTriangle t3(3);

    Rectangle q1(2, 4);
    Square q2(2);
    Parallelogram q3(2, 4, 60, 120);
    Rhombus q4(4, 60, 40);

    print(t0);
    print(q0);
    print(t1);
    print(t2);
    print(t3);
    print(q1);
    print(q2);
    print(q3);
    print(q4);

    return 0;
}