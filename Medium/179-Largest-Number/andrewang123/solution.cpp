string largestNumber(vector<int>& nums) {
    /*
     PsuedoCode - 

     We know that the first place of the number determinds where it lies
     i.e a 9 in 91 is going to be greater than an 8 in 85

     We also know that if there is collision that we have to put the number less than that number to the right and less than to the left.
     i.e if the number is 5. 51 and 56.
     it would go 56 5 51 because 6 > 5 and 1 < 5

     Thought process: 
     1. I think that you can create an O(n) solution if you make 
     a hashmap with the keys being integers and the value being strings.
     2. You could create 9 keys (1. 2. 3. 4. 5..... 9)
     3. Then the only thing that you would have to worry about is sorting the values when there is a collision.
     4. Then you would go from 9...8...7....1 and concatenate the strings.
     5. return the values and you good.
    

     examples 
     3190 and 313
     3133190
     3190313 GREATER


    code
        create a hash and initialize all of the values 1-9 as keys with empty strings as values
        for each of the values of the arrays put them in the correct bucket

        THIS IS WHERE I AM STUCK HOW DO YOU ACCOUNT FOR THE COLLISION???


    Time Complexity: O(n) because 9 is a constant
    Space Complexity: O(n)    
     * /

     Ended up looking up the solution, meh

     sorting it using a variation of sort with nlog n runtime and n space.

     XY > YX

}
