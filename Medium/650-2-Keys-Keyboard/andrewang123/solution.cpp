
int TwoKeys(int num)

    /*
    We originaly start with one a on screen
    We also have nothing in our clipboard
    Parameters is the total number of A's that we need to print out
    We must copy first because there is nothing on our clipboard

    There are two things we must keep in mind:
        1. Clipboard (what is on our copy)
        2. Screen (the items that are already displayed at first just 1 A
        

    Base cases:
        if input is less than zero return -1
        else if the input is 1 than return 0
        else if the input is greater than 1
            If the number is a prime number we must copy and paste N-1
            else we have to calculate

    When you are calculating you have to look for the highest factor and
    when you get the highest factor you must try to get to that highest factor
    and complete it the pairs time

    

    For instance:
    Input = 100
    Factor pairs are 1 100 = 101
                     2 50 = 52
                     4 25 = 29
                     5 20 = 25
                     10 10 = 20 (WINNER therefore your path in which you need to go)
    You add the two number together and that is the weight, the one with the
    lowest weight is your answer
    
    Runtime comlexity
    Big O(n)

    Space Complexity
    Big O(n)
    
    */
        if(num <= 0) return -1; // 0 or negative
        else if(num == 1) return 0; // only one option
        else {
            if(isPrime(num)) // the number is a prime number copy and paste n-1 times
            {
                return num;
            } else { // calculate the greatest factor and do it
                int times = 2; // you always have to copy in the beginning and then paste
                int first = 0; // the first factor
                int second = 0; // the second factor if you multipy first times second you get num
                for(int i = 0; i < num; i++)
                {
                    if(num % i ==0) // if it is a factor of the number
                    {
                        if(i > (num/i)) // you have reached the duplicate, 2 * 50 -> 50 * 2
                        {
                            break;
                        }
                        first = i;
                        second = num / i;
                    }
                }
                int factorFirst = TwoKeys(first);
                return factorFirst + 1 + second; // the 1 is the copy of factorFirst and the second is the num of times to paste
            }

        }        
    }

bool isPrime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}


