#include <iostream>

class Figure {
    public:
        Figure() {
            this->name = "Фигура";
            this->sides = 0;
        }
        std::string get_name() {
            return name;
        }
        int count_sides() {
            return sides;
        }
        virtual int* get_side_values() {
            return dum;
        }
        virtual int* get_angle_values() {
            return dum;
        }

    protected:
        std::string name;
        int sides;
        int* dum;
};

class Triangle : public Figure {
    public:
        Triangle() {
            this->name = "Треугольник";
            this->sides = 3;
            this->side_vals[0] = 1;
            this->side_vals[1] = 2;
            this->side_vals[2] = 3;
            this->angle_vals[0] = 40;
            this->angle_vals[1] = 60;            
            this->angle_vals[2] = 80;
        }
        Triangle(int a, int b, int c, int A, int B, int C) {
            this->name = "Треугольник";
            this->sides = 3;
            this->side_vals[0] = a;
            this->side_vals[1] = b;
            this->side_vals[2] = c;
            this->angle_vals[0] = A;
            this->angle_vals[1] = B;            
            this->angle_vals[2] = C;
        }
        int* get_side_values() {
            return side_vals;
        }
        int* get_angle_values() {
            return angle_vals;
        }
    protected:
        int side_vals[3];
        int angle_vals[3];
};

class Quadrangle : public Figure {
    public:
        Quadrangle() {
            this->name = "Четырехугольник";
            this->sides = 4;
            this->side_vals[0] = 1;
            this->side_vals[1] = 2;
            this->side_vals[2] = 3;
            this->side_vals[3] = 4;
            this->angle_vals[0] = 20;
            this->angle_vals[1] = 40;            
            this->angle_vals[2] = 60;
            this->angle_vals[3] = 80;
        }
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
            this->name = "Четырехугольник";
            this->sides = 4;
            this->side_vals[0] = a;
            this->side_vals[1] = b;
            this->side_vals[2] = c;
            this->side_vals[3] = d;
            this->angle_vals[0] = A;
            this->angle_vals[1] = B;
            this->angle_vals[2] = C;
            this->angle_vals[3] = D;
        }
        int* get_side_values() {
            return side_vals;
        }
        int* get_angle_values() {
            return angle_vals;
        }
    protected:
        int side_vals[4];
        int angle_vals[4];
};

class RightTriangle : public Triangle {
    public:
        RightTriangle(int a, int b, int c, int A, int B) {
            this->name = "Прямоугольный треугольник";
            this->side_vals[0] = a;
            this->side_vals[1] = b;
            this->side_vals[2] = c;
            this->angle_vals[0] = A;
            this->angle_vals[1] = B;            
            this->angle_vals[2] = 90;
        }
};

class IsoscelesTriangle : public Triangle {
    public:
        IsoscelesTriangle(int ac, int b, int AC, int B) {
            this->name = "Равнобедренный треугольник";
            this->side_vals[0] = ac;
            this->side_vals[1] = b;
            this->side_vals[2] = ac;
            this->angle_vals[0] = AC;
            this->angle_vals[1] = B;            
            this->angle_vals[2] = AC;
        }
};

class EquilateralTriangle : public Triangle {
    public:
        EquilateralTriangle(int abc) {
            this->name = "Равносторонний  треугольник";
            this->side_vals[0] = abc;
            this->side_vals[1] = abc;
            this->side_vals[2] = abc;
            this->angle_vals[0] = 60;
            this->angle_vals[1] = 60;            
            this->angle_vals[2] = 60;
        }
};

class Rectangle : public Quadrangle {
    public:
        Rectangle(int ac, int bd) {
            this->name = "Прямоугольник";
            this->side_vals[0] = ac;
            this->side_vals[1] = bd;
            this->side_vals[2] = ac;
            this->side_vals[3] = bd;
            this->angle_vals[0] = 90;
            this->angle_vals[1] = 90;
            this->angle_vals[2] = 90;
            this->angle_vals[3] = 90;
        }
};

class Square : public Quadrangle {
    public:
        Square(int a) {
            this->name = "Квадрат";
            this->side_vals[0] = a;
            this->side_vals[1] = a;
            this->side_vals[2] = a;
            this->side_vals[3] = a;
            this->angle_vals[0] = 90;
            this->angle_vals[1] = 90;
            this->angle_vals[2] = 90;
            this->angle_vals[3] = 90;        
        }
};

class Parallelogram : public Quadrangle {
    public:
        Parallelogram(int ac, int bd, int AC, int BD) {
            this->name = "Параллелограмм";
            this->side_vals[0] = ac;
            this->side_vals[1] = bd;
            this->side_vals[2] = ac;
            this->side_vals[3] = bd;
            this->angle_vals[0] = AC;
            this->angle_vals[1] = BD;
            this->angle_vals[2] = AC;
            this->angle_vals[3] = BD;
        }
};

class Rhombus : public Quadrangle {
    public:
        Rhombus(int a, int AC, int BD) {
            this->name = "Ромб";
            this->side_vals[0] = a;
            this->side_vals[1] = a;
            this->side_vals[2] = a;
            this->side_vals[3] = a;
            this->angle_vals[0] = AC;
            this->angle_vals[1] = BD;
            this->angle_vals[2] = AC;
            this->angle_vals[3] = BD;
        }
};

void print_info(Figure &figure) {
    int count_sides = figure.count_sides();
    int* sides = figure.get_side_values();
    int* angles = figure.get_angle_values();
    std::cout << figure.get_name() << ":\n";

    if (count_sides == 3) {
        std::cout << "Стороны:" << " a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << "\n";
        std::cout << "Углы:" << " A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << "\n";
    }
    if (count_sides == 4) {
        std::cout << "Стороны:" << " a=" << sides[0] << " b=" << sides[1] << " c=" << sides[2] << " d=" << sides[3] << "\n";
        std::cout << "Углы:" << " A=" << angles[0] << " B=" << angles[1] << " C=" << angles[2] << " D=" << angles[3] << "\n";
    }
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

    print_info(t0);
    print_info(q0);
    print_info(t1);
    print_info(t2);
    print_info(t3);
    print_info(q1);
    print_info(q2);
    print_info(q3);
    print_info(q4);

    return 0;
}