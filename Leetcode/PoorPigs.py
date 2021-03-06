'''
What matters is number of tests T and number of pigs x. Let us ask inverse question: how many states can we generate with x pigs and T tests to cover N scenarios? This is estimation + example problem, where we need to 1) prove, that we can not make N bigger than some number and 2) give an example, where this N is possible.

Estimation: The number of states is exactly (T+1)^x and here is why. For each pig during T tests, it has exactly T+1 states: dies at some test #i, where 1<= i <= T) or still alive eventually. For x pigs, obviously the maximum possible number of states we could have is (T+1)^x since each is independent and one pig can not influence on another one.

Example: From other side, we can construct the example, using (T+1) based numbers: at first test for i-th pig choose all numbers, where i-th digit is 0. If all pigs are dead, we can immediately say what bucket was poisoned. If k pigs are alive, there will be T^k possible options for T-1 days and k pigs, which can be solved, using induction. For better understanding, imaging the special case: let us have x=3 pigs and T=2 tests. Then our plan is the following:

We have 27 different positions:
000 001 002  100 101 102  200 201 202
010 011 012  110 111 112  210 211 212
020 021 022  120 121 122  220 221 222

On the first test, first pig will drink from first 9 bucktes: 000, 001, 002, 010, 011, 012, 020, 021, 022, if it is not dead, on the second test it drink from the second 9 buckets 100, 101, 102, 110, 111, 112, 120, 121, 122. Why we choose this bucktes? Because for the first group it always starts with 0 and second always starts with 1. What can be our results?

This pig dies after first test, so we can conclude, that our bucket has form 0**.
This pig dies after second test, so we can conclude, that our bucket has form 1**.
It will not die at all (lucky bastard), then our bucket has form 2**.
So, what was the purpuse of first pig? To understand the first digit in our bucket number.

No, let us look at the second pig: we do very similar procedure for it: on the first test it will drink from the 9 buckets from first line: 000, 001, 002, 100, 101, 102, 200, 201, 202: all buckets with second number equal to 0, on the second test, it will drink from 010, 011, 012, 110, 111, 112, 210, 211, 212: from all buckets with second number equel to 1. We again can do the following inference:

This pig dies after first test, so we can conclude, that our bucket has form *0*.
This pig dies after second test, so we can conclude, that our bucket has form *1*.
It will not die at all (lucky bastard), then our bucket has form *2*.
Finally, we have the third pig, which help us to understand if we have **0, **1 or **2.

Looking at all information we have now about the frist, the second and the third digits in our bucket number we can say what bucket we have!

Complexity: it is just O(1) time and space if we assume that we can evaluate log in O(1) time.
'''


class Solution:
    def poorPigs(self, buckets, minutesToDie, minutesToTest):
        return ceil(log(buckets)/log(minutesToTest//minutesToDie + 1))