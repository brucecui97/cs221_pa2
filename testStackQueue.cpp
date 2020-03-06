#define CATCH_CONFIG_MAIN
#include <iostream>

#include "cs221util/catch.hpp"
#include "queue.h"
#include "stack.h"

using namespace std;

TEST_CASE("stack::push and pop exceed default", "[weight=1][part=stack]")
{
    // cout << "Testing Stack..." << endl;
    Stack<int> intStack;
    vector<int> result;
    vector<int> expected;
    REQUIRE(intStack.capacity()==DEFAULTCAPACITY);
    for (int i = 10; i > 0; i--)
    {
        expected.push_back(i);
    }
    for (int i = 1; i <= 10; i++)
    {
        intStack.push(i);
    }

    REQUIRE(intStack.capacity()==DEFAULTCAPACITY*EXPANSIONFACTOR*EXPANSIONFACTOR);
    
    // cout << intStack.peek() << endl;
    while (!intStack.isEmpty())
    {
        result.push_back(intStack.pop());
        // cout << intStack.pop() << " ";
    }
    REQUIRE(result == expected);
}


TEST_CASE("stack::push not exceed default", "[weight=1][part=stack]")
{
    // cout << "Testing Stack..." << endl;
    Stack<int> intStack;
    vector<int> result;
    vector<int> expected;
    for (int i = DEFAULTCAPACITY; i > 0; i--)
    {
        expected.push_back(i);
    }
    for (int i = 1; i <= DEFAULTCAPACITY; i++)
    {
        intStack.push(i);
    }
    
    REQUIRE(intStack.capacity()==DEFAULTCAPACITY);


    while (!intStack.isEmpty())
    {
        result.push_back(intStack.pop());
        // cout << intStack.pop() << " ";
    }
    REQUIRE(result == expected);
    
}

// TEST_CASE("stack::resize", "[weight=1][part=stack]")
// {
//     Stack<int> intStack;
//     vector<int> result;
//     vector<int> expected;
//     REQUIRE(intStack.capacity()==DEFAULTCAPACITY);
//     for (int i = 10; i > 0; i--)
//     {
//         expected.push_back(i);
//     }
//     for (int i = 1; i <= 10; i++)
//     {
//         intStack.push(i);
//     }

//     REQUIRE(intStack.capacity()==DEFAULTCAPACITY*EXPANSIONFACTOR*EXPANSIONFACTOR);
    
//     intStack.resize(11);

//     REQUIRE(intStack.capacity()==DEFAULTCAPACITY*EXPANSIONFACTOR*EXPANSIONFACTOR);

    
// }

TEST_CASE("queue::basic functions", "[weight=1][part=queue]")
{
    // cout << "Testing Queue..." << endl;
    Queue<int> intQueue;
    vector<int> result;
    vector<int> expected;
    for (int i = 1; i <= 10; i++)
    {
        expected.push_back(i);
    }
    for (int i = 1; i <= 10; i++)
    {
        intQueue.enqueue(i);
    }
    // cout << intStack.peek() << endl;
    while (!intQueue.isEmpty())
    {
        result.push_back(intQueue.dequeue());
        // cout << intStack.pop() << " ";
    }
    REQUIRE(result == expected);
}
