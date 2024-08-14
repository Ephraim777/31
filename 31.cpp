#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void square(T& value) 
{
value = value * value;
}

template<typename T>
void square(std::vector<T>& values)
{
    for (auto& val : values)
     {
        val = val * val;
     }
}

int main()
{
    int a = 6;
    
    square(a);
    
    cout << "Squared value of a: " << a << endl;
    
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    square(vec);
    
    cout << "Squared values of vector: ";
    
    for (const auto& val : vec)
    {
        cout << val << " ";
    }
    
    cout << endl;
    
    return 0;
}
