/**
 * @file stack.h
 * Definition of the Stack class.
 *
 * You **should not** modify this file for the PA!
 *
 */
#ifndef _STACK_H_
#define _STACK_H_

#define DEFAULTCAPACITY 4 // Initial capacity of the array.
#define EXPANSIONFACTOR 2 // Factor to multiply or divide current size by when resizing.
#define SHRINKRATE 4      // When the size of the array is less than equal 1 over this value the array should resize

#include "ordering_structure.h"

template <class T> class Stack : public OrderingStructure<T>
{
  public:
    Stack();

    ~Stack();

    /**
     * Adds the parameter object to the top of the Stack.
     *
     * @param newItem The object to be added to the Stack.
     */
    void push(const T &newItem);

    /**
     * Removes the object on top of the Stack, and returns it.
     *
     * @return The element that used to be at the top of the Stack.
     */
    T pop();

    /**
     * Adds an element to the ordering structure.
     *
     * @see OrderingStructure::add()
     */
    void add(const T &theItem);

    /**
     * Removes an element from the ordering structure.
     *
     * @see OrderingStructure::remove()
     */
    T remove();

    /**
     * Finds the object on top of the Stack, and returns it to the caller.
     * Unlike pop(), this operation does not alter the Stack itself.
     *
     * @return The element at the top of the Stack.
     */
    T peek();

    /**
     * Determines if the Stack is empty.
     *
     * @return Whether or not the stack is empty (bool).
     */
    bool isEmpty() const;

    /**
     * Return the maximum number of items the stack can hold.
     *
     * Note: This is an implementation detail we would normally hide.
     * We include it here for testing purposes.
     */
    size_t capacity() const;

    /**
     * Return the number of items on the stack.
     */
    size_t size() const;

  private:
    /**
     * The maximum number of items the stack can store without a resize
     */
    size_t max_items;

    /**
     * The number of items currently in the stack
     */
    size_t num_items;

    /**
     * The dynamic array representing our Stack
     */
    T *items;

    /**
     * Resize the the member variable `items`.
     * Don't forget to free up any memory that is no longer used.
     *
     * @param n The size of the stack after resizing
     */
    void resize(size_t n);
};

/**
 * @file stack.cpp
 * Implementation of the Stack class.
 *
 */

/**
 * Default constructor. Remember to initialize any variables you need
 * and allocate any required memory. The initial size of `items` should
 * be DEFAULTCAPACITY defined in stack.h.
 *
 */
template <class T> Stack<T>::Stack()
{
    /**
     * @todo Your code here!
     */
    items = new T[DEFAULTCAPACITY];
    num_items = 0;
    max_items = DEFAULTCAPACITY;

    
}

/**
 * Destructor. Remember to free any memory allocated.
 *
 */
template <class T> Stack<T>::~Stack()
{
    /**
     * @todo Your code here!
     */

    delete items;
}

/**
 * Adds the parameter object to the top of the Stack. That is, the
 * element should go at the beginning of the list. If the dynamic array
 * holding the stack elements is full the array should be resized. Resize should be
 * called by multiplying  current capacity EXPANSIONFACTOR defined in stack.h.
 * To be clear resize should happen before adding the element to the stack and only
 * when the stack is completely full.
 *
 * @param value The object to be added to the Stack.
 */
template <class T>
void Stack<T>::push(const T &newItem){
    /**
     * @todo Your code here!
     */
    if (num_items<max_items){
        items[num_items] = newItem;
    }
};

/**
 * Removes the object on top of the Stack, and returns it. That is, remove
 * the element at the beginning of the list. You may assume this function
 * is only called when the Stack is not empty. If the size of the stack changes
 * to strictly less than 1 / SHRINKRATE (where SHRINKRATE is defined in stack.h)
 * after the item is removed the Stack should be resized to 1 / EXPANSIONFACTOR.
 *
 * @return The element that used to be at the top of the Stack.
 */
template <class T>
T Stack<T>::pop(){
    /**
     * @todo Your code here!
     */
};

/**
 * Adds an element to the ordering structure.
 *
 * @see OrderingStructure::add()
 */
template <class T> void Stack<T>::add(const T &theItem)
{
    /**
     * @todo Your code here! Hint: this should call another Stack function
     *  to add the element to the Stack.
     */
}

/**
 * Removes an element from the ordering structure.
 *
 * @see OrderingStructure::remove()
 */
template <class T> T Stack<T>::remove()
{
    /**
     * @todo Your code here! Hint: this should call another Stack function
     * to remove an element from the Stack and return it.
     */
}

/**
 * Finds the object on top of the Stack, and returns it to the caller.
 * Unlike pop(), this operation does not alter the Stack itself. It should
 * look at the beginning of the list. You may assume this function is only
 * called when the Stack is not empty.
 *
 * @return The element at the top of the Stack.
 */
template <class T>
T Stack<T>::peek(){
    /**
     * @todo Your code here!
     */
};

/**
 * Determines if the Stack is empty.
 *
 * @return Whether or not the stack is empty (bool).
 */
template <class T>
bool Stack<T>::isEmpty() const {
    /**
     * @todo Your code here!
     */
};

/**
 * Return the maximum number of items the stack can hold.
 *
 * Note: This is an implementation detail we would normally hide.
 * We include it here for testing purposes.
 *
 * @return Maximum number of items the stack can hold (int)
 */
template <class T>
size_t Stack<T>::capacity() const {
    /**
     * @todo Your code here!
     */
};

/**
 * Return the number of items on the stack.
 *
 * @return Number of items on the stack (int)
 */
template <class T>
size_t Stack<T>::size() const {
    /**
     * @todo Your code here!
     */
};

/**
 * Resize the the member variable `items`.
 * Don't forget to free up any memory that is no longer used.
 *
 * @param n The size of the stack after resizing
 */
template <class T>
void Stack<T>::resize(size_t n){
    /**
     * @todo Your code here!
     */
};

//#include "stack.cpp" // needed for template instantiation

#endif
