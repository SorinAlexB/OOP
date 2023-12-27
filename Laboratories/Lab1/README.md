# Lab1
 Introduction to the basics of C++ OOP
 <br/>

## Products
   In this laboratory you will need to create a class named **Product**. The 
   Product class should have 3 private **components** : **name** which will be 
   dinamically allocated, **producer** which will also be dinamically allocated,
   **price** which will be a float variable. The methods of this class will be 
   public and you will need to have : both **constructor**(default constructor and parametezied constructor) and **copy constructor**;   two **modification** methods(first which will have two char variables and one 
   float variable as parameters, the second one which will have as parameter a 
   Product class object); a destructor; getters and setters for every component; a print method.

### Explanations 

  We will take a look at the Product.hpp first. On the first two lines and on the last line you can see the 
  **header guards**.
  ```
  #ifndef PRODUCT_HPP
  #define PRODUCT_HPP
  .
  .
  .
  #endif
  ```
  These lines are known as include guards or header guards. They prevent the header file from being included more than once in a translation unit. If **PRODUCT_HPP** is not defined, it gets defined, and the content of the file is processed. If it's already defined, the content is skipped to avoid redefinition issues.

  Our **Product** class has the following implementation
  
  ```
  class Product{
    private:
        char *name;
        char *producer;
        float price;
    public:
        Product();
        Product(const char *new_name, const char *new_producer, const float new_price);
        Product(const Product &obj);
        void Modif(const char *new_name, const char *new_producer, const float new_price);
        void Modif(const Product &obj);
        char* get_name() const;
        char* get_producer() const;
        float get_price() const;
        void set_name(const char *new_name);
        void set_producer(const char *new_producer);
        void set_price(const float new_price);
        void print();
        ~Product();
 }
 ```

 We can see that our class has 3 private variables(name, producer and price) and 13 public methods. The first two methods are the regular constructors(default constructor and parameterized constructor) and the third method is the copy constructor. **The copy constructor will only be called when we will want to create an object based on another one**. The rest of the methods are simple ones but a tricky one is the destructor(~Product()). Because in our implementation we use pointers it means we will allocate and deallocate memory. It is important that whenever we want to use the **Modif, set_name and set_producer** we shall deallocate the memory and allocate it again. Furthermore, we should deallocate memory in the destructor. 

 ```
Product::~Product(){
    
    delete[] this->name;
    delete[] this->producer;
}
 
 ```

For compiling our code we will use a Makefile. You just need to use the command **make** in your terminal for compiling or, if you want to delete the compiled files you can use **make clean**.

