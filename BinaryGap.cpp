 #include <algorithm>
 #include <iostream>
 
 using  namespace std; 

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int main() {
    // write your code in C++14 (g++ 6.2.0)
    int N = 51712 ;
    bool  flag = false; 
    int count_orig = 0;
    int count_tmp = 0;
    if(N == 0 )
        return 1;
    else if( N == 1 )
        return 0;
    else
    {
        while(N != 0)
        {
            if(N%2 == 0) 
            {
                if(flag == true)
                    ++count_tmp;    
                flag == false;
            }
            else 
            {
                if(count_tmp > count_orig)
                {
                    count_orig = count_tmp;
                }   
                count_tmp = 0;
                flag = true ; 
            }
            N = N/2;
        }
        return count_orig;
    }  
    
}
