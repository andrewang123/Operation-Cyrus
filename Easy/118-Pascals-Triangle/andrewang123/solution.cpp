// Pascal's Triangle - LC # 118

/*
  0  1  2  3  4  5  6
0 1    
 
1 1  1  
 
2 1  2  1
 
3 1  3  3  1
 
4 1  4  6  4  1

5 1  5  10 10

6 1  6  15 20
 
 =1  +1 
        prev
        row
        +
        Col
           prevcol
           + 
            
 

Make a vector of size n and set all to 1
Make a vectorTwo empty

for 0 until n
    push n - 1 to vector //[2, 3...]
for i = 0 until n
    print 1
    push 1 onto vectorTwo // [1]
    print vector[i]
        for (col = 2 until end)
            print vector[col - 2] + vectorTwo[col - 2] 
            push vector[col] + vectorTwo[col] onto vectorTwo
        clear vectorTwo
        print 1

GOT STUCK ATTEMPTED SOLUTION, SHOULD WORK, BUT DOESNT



 */


void printPascals(int number)
{



}
