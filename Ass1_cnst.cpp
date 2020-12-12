#include <iostream>
//Try to modify x1 & x2 and see the compilation output

int main()
{
    using namespace std;
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;   
    const int &ref_x2 = x ;
    std::cout << ref_x1 << " " << ref_x2 <<std::endl;
    ref_x1 = 10;
    //ref_x2 = 20; Cannot be changed because it is an only read reference.
    std::cout << ref_x1 << " " << ref_x2 <<std::endl;

#if 1   //Parte 2
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    std::cout <<"Example 2: "<<std::endl;
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;

    std::cout << *ptr1 << " " << ref_x2 <<std::endl;
    //*ptr1 = 5; Read only, protected by const pointer
    ptr1 = &ref_x2; 

    *ptr2 = 10;
    //ptr2 = &ref_x1; Read, only pointer cannot change reference.
    std::cout << *ptr2 << " " << ref_x2 <<std::endl;

#endif
#if 1   //Parte 3
    //Find which declarations are valid. If invalid, correct the declaration
    //const int *const ptr3 = &MAX ;
    const int *ptr4 = &MAX ;
    
    const int &r1 = ref_x1 ;
    const int &r2 = ref_x2 ;
    
    const int *&p_ref1 = ptr1 ; //i.e address of ptr (&ptr) which is 200 after dereferencing *(&ptr) -> ×(200) -> 100
    int*const&p_ref2 = ptr2 ;   //pointer with reference fixed.  
#endif
}