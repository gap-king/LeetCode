class ClimbingStairs {
public:
    // Recursion will time out because it will do many repetitive work when computing func(n - 1) and func(n - 2).
    // Of course, the problem above can be solved by using a reference of a hash map that records computed steps.
    int operator()(int n);
};