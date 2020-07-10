        # DEPC-02
Debug Entity Programming Contest 2
        Editorial
 
Problem A: Multiplication
Idea: just check if the number is greater than the last 6 digit number or not.

Problem B: Pair of Dumbbells
Idea: Observations:
1. If the number of dumbbells for the current weight is even. Then you can take n/2 dumbbells.
2. If the number of dumbbells for the current weight is odd. Then you can take n/2 dumbbells and for the
remaining 1 dumbbell, you have to pair it with the next weight dumbbells immediately (if next weight
frequency > 0), subtract 1 from the next weight dumbbell and repeat.

Problem C: Independent Number
Idea: Just check if the number is prime or not

Problem D: Sort the Numbers 1
Idea: Any sorting algorithm with worst case time complexity O( n*log(n) ) or less will pass.

Problem E: Sort the numbers 2
Idea: https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
You can read this article to know better, I’m too lazy to write an article on this topic.

Problem F: Register the names
Idea: Straightforward implementation. I used C++'s std::map to implement this problem.

Problem G: Programming Camp
Idea: This kind of problem is often known as interval scheduling or Activity selection problem (both also known
as Greedy algorithm). You can read more about it on youtube or search it on GOOGLE.
Let’s take and array of 10^6+2 filled with zeros(as this is the highest time). If a class is starting on time X, lets
increment the index, and if the class is ending on Y lets decrement the Y+1th (as the instructor is free from Y+1)
cell of the array. Now let’s perform a cumulative sum operation on the array. Then the answer is the maximum
value of the whole array.

Problem H: GCD plus LCM
Idea: Just implement what it says and be careful with the overflow issue.

Problem I: Check the password
Idea: When the query is Register, first generate the password by the given formula. And then use std::map to
store it. Then add the 10 characters and do the same.
When the query is Login you’ll print 1 if the value if already in the map, otherwise 0.

Problem J: Visiting Friend’s House
Idea: This is a graph related problem and straight forward implementation of BFS traversal. And as the graph is
unweighted a BFS traversal will always lead you to the shortest path.
