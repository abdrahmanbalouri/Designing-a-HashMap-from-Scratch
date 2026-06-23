#include <iostream>


class Node
{
    std::string key;
    void *value;
    void *next;

    Node(std::string key, void *value)
    {
        key = key;
        value = value;
        next = nullptr;
    }
};
class HashMap
{
private:
    size_t size;
    int *array;

public:
    HashMap(size_t size)
        : size(size)
    {
        array = new int[size]{};
    }

    int  Hashfunction(std::string &key){
        int hash =0;

        for (size_t i=0; i< key.size();i++){


        }




    }

  
};

int main()
{

    return 0;
}