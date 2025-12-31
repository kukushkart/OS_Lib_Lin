#include <iostream>
#include <Vector.h>
#include <cmath>

int main() {

    Vector* v1 = createVector11();
        std::cout << "Vector (1,1):" << std::endl;
        std::cout << "  getX() = " << v1->getX() << std::endl;
        std::cout << "  getY() = " << v1->getY() << std::endl;


        std::cout << "Vector (1,1):" << std::endl;
        std::cout << "  getPolarRadius() = " << v1->getPolarRadius().getValue() << std::endl;
        std::cout << "  getPolarAngle() = " << v1->getPolarAngle().getValue() << std::endl;
 

    Vector* v2 = createVector11();
        Vector result = v1->add(*v2);
        std::cout << "Vector (1,1) + Vector (1,1):" << std::endl;
        std::cout << "  Result: (" << result.getX() << "," << result.getY() << ")" <<  std::endl;
        deleteVector(v1);
        deleteVector(v2);
  

    Vector* v5 = createVector00();
        std::cout << "Vector (0,0):" << std::endl;
        std::cout << "  getX() = " << v5->getX() << std::endl;
        std::cout << "  getY() = " << v5->getY() << std::endl;
        std::cout << "  getPolarRadius() = " << v5->getPolarRadius().getValue() << std::endl;
        std::cout << "  getPolarAngle() = " << v5->getPolarAngle().getValue() << std::endl;

    Vector* v6 = createVector11();
        Vector result2 = v5->add(*v6);
        std::cout << "Vector (0,0) + Vector (1,1):" << std::endl;
        std::cout << "  Result: (" << result2.getX() << "," << result2.getY() << ")" << std::endl;
        deleteVector(v5);
        deleteVector(v6);

    return 0;
}
