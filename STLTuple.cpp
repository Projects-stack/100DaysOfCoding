#include<iostream>
#include<tuple>
using namespace std;

/* Tuple :->
   -----
        1. Just like in pair, we can pair two heterogeneous objects, in tuple we can pair
         multiple objects.
        2. tuple<string, string, int> t;
        3. t = make_tuple(values you want to insert based on specified type)
        4. Comparator operators can be used to compare two tuples  */


int main()
{
    //make tuple t1 with three fields
    tuple<string, int, int> t1;

    //inserting data in tuple
    t1 = make_tuple("Rahul",20,99);

    //printing tuple using get method
    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << endl;

    return 0;
}
