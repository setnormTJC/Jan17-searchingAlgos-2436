#include <iostream>
#include <vector>

//using namespace std;


using std::cout; 
using std::endl; 
using std::vector; 


template <typename T> 
int sequential_search(vector<T> someList, T someTargetValue)
{
    for (int i = 0; i < someList.size(); i++)
    {
        if (someList.at(i) == someTargetValue) //replace with subscript operator [] (if desired) 
        {
            return i; 
        }
    }

    return -1;
}

auto generateRandomVector(int N)
{
    vector<int> randomVector; 

    for (int i = 0; i < N; i++)
    {
        randomVector.push_back(rand() % N);
    }

    return randomVector;
}

template<typename T> 
void print(vector<T> list)
{
    for (auto& element : list)
    {
        cout << element << " "; //
    }
    cout << "\n";
}

int main()
{
    srand(time(0)); //a better way to do this - using 
    vector<int> nums = generateRandomVector(10);
    
    int targetValue = rand() % 10; 

    cout << "The randomly-generated vector of 10 elements is: " << endl; 
    print(nums); 

    int foundPosition = sequential_search(nums, targetValue); 
    //std::find
    cout << "The target value " << targetValue << "was? found at index number :"
        << foundPosition << endl; 

    return 0;
}