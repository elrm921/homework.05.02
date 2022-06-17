#include <iostream>

class Figure {
    public:
        Figure() {
            this->name = "Фигура";
            this->sides = 0;
        }
        void print() {
            std::cout << name << "\n";
            print_side_values();
            print_angle_values();
        }
    protected:
        Figure(std::string name, int sides) {
            this->name = name;
            this->sides = sides;
        }
        virtual void print_side_values() {}
        virtual void print_angle_values() {}
    private:
        std::string name;
        int sides;
};

class Triangle : public Figure {
    public:
        Triangle() : Figure("Треугольник", 3) {
            this->a = 1;
            this->b = 2;
            this->c = 3;
            this->A = 40;
            this->B = 60;            
            this->C = 80;
        }
        Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник", 3) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->A = A;
            this->B = B;            
            this->C = C;
        }
        void print_side_values() {
            std::cout << "a = " << a << " b = " << b << " c = " << c << "\n";
        }
        void print_angle_values() {
            std::cout << "A = " << A << " B = " << B << " C = " << C << "\n";
        }
    protected:
        Triangle(std::string name, int a, int b, int c, int A, int B, int C) : Figure(name, 3) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->A = A;
            this->B = B;            
            this->C = C;            
        }
    private:
        int a, b, c;
        int A, B, C;
};

class Quadrangle : public Figure {
    public:
        Quadrangle() : Figure("Четырехугольник", 4) {
            this->a = 1;
            this->b = 2;
            this->c = 3;
            this->d = 4;
            this->A = 20;
            this->B = 40;            
            this->C = 60;
            this->D = 80;
        }
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырехугольник", 4) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
            this->A = A;
            this->B = B;
            this->C = C;
            this->D = D;
        }
        void print_side_values() {
            std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
        }
        void print_angle_values() {
            std::cout << "A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n";
        }
    protected:
        Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(name, 4) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
            this->A = A;
            this->B = B;
            this->C = C;
            this->D = D;
        }
    private:
        int a, b, c, d;
        int A, B, C, D;
};

class RightTriangle : public Triangle {
    public:
        RightTriangle(int a, int b, int c, int A, int B) : Triangle("Прямоугольный треугольник", a, b, c, A, B, 90) {}
};

class IsoscelesTriangle : public Triangle {
    public:
        IsoscelesTriangle(int ac, int b, int AC, int B) : Triangle("Равнобедренный треугольник", ac, b, ac, AC, B, AC) {}
};

class EquilateralTriangle : public Triangle {
    public:
        EquilateralTriangle(int abc) : Triangle("Равносторонний  треугольник", abc, abc, abc, 60, 60, 60) {}
};

class Rectangle : public Quadrangle {
    public:
        Rectangle(int ac, int bd) : Quadrangle("Прямоугольник", ac, bd, ac, bd, 90, 90, 90, 90) {}
};

class Square : public Quadrangle {
    public:
        Square(int a) : Quadrangle("Квадрат", a, a, a, a, 90, 90, 90, 90) {}
};

class Parallelogram : public Quadrangle {
    public:
        Parallelogram(int ac, int bd, int AC, int BD) : Quadrangle("Параллелограмм", ac, bd, ac, bd, AC, BD, AC, BD) {}
};

class Rhombus : public Quadrangle {
    public:
        Rhombus(int a, int AC, int BD) : Quadrangle("Ромб", a, a, a, a, AC, BD, AC, BD) {}
};

void print(Figure &figure) {
    figure.print();
}

int main() {
    Triangle t0;
    Quadrangle q0;

    RightTriangle t1(1, 2, 3, 30, 60);
    IsoscelesTriangle t2(2, 1, 30, 90);
    EquilateralTriangle t3(3);

    Rectangle q1(1, 4);
    Square q2(4);
    Parallelogram q3(1, 4, 60, 120);
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