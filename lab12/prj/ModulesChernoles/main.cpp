#include <iostream> 
#include <string> 
#include <cmath> 
 
class ClassLab12_Chernoles { 
private: 
    double radius; 
    std::string color; 
 
public: 
    // Конструктор
    ClassLab12_Chernoles(double r, std::string c) : radius(r), color(c) {} 
 
    // Сеттери
    void setRadius(double r) { 
        if (r > 0) { 
            radius = r; 
        } 
    } 
 
    void setColor(const std::string& c) { 
        color = c; 
    } 
 
    // Геттери
    double getRadius() const { 
        return radius; 
    } 
 
    std::string getColor() const { 
        return color; 
    } 
 
    // Метод для обчислення площі
    double calculateArea() const { 
        return M_PI * radius * radius; 
    } 
 
    // Метод для зміни площі та оновлення радіуса
    void setArea(double area) { 
        if (area > 0) { 
            radius = std::sqrt(area / M_PI); 
        } 
    } 
 
    // Метод для зміни значення заданого атрибуту
    void updateAttribute(const std::string& attributeName, const std::string& value) { 
        if (attributeName == "color") { 
            setColor(value); 
        } else if (attributeName == "radius") { 
            try { 
                double r = std::stod(value); 
                setRadius(r); 
            } catch (const std::invalid_argument& e) { 
                std::cerr << "Invalid radius value: " << value << std::endl; 
            } 
        } else if (attributeName == "area") { 
            try { 
                double area = std::stod(value); 
                setArea(area); 
            } catch (const std::invalid_argument& e) { 
                std::cerr << "Invalid area value: " << value << std::endl; 
            } 
        } 
    } 
}; 
 
int main() { 
    double radius; 
    std::string color; 
 
    // Введення даних користувачем
    std::cout << "Enter radius: "; 
    std::cin >> radius; 
    std::cin.ignore(); // Щоб ігнорувати залишений символ нового рядка
    std::cout << "Enter color: "; 
    std::getline(std::cin, color); 
 
    // Створення об'єкта класу з введеними даними
    ClassLab12_Chernoles obj(radius, color); 
 
    // Вивід значень атрибутів
    std::cout << "Radius: " << obj.getRadius() << std::endl; 
    std::cout << "Color: " << obj.getColor() << std::endl; 
 
    // Обчислення та вивід площі
    std::cout << "Area: " << obj.calculateArea() << std::endl; 
 
    return 0; 
} 
