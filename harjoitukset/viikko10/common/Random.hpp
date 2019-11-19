#ifndef RANDOM_HPP
#define RANDOM_HPP

/**
 * Random number generator.
 */
class Random {
public:
    Random();
    /**
     * Returns a random integer.
     * 
     * @param min Inclusive lower bound.
     * @param max Exclusive outer bound.
     * @return Random integer greater than or equal to `min` and less than `max`.
     */
    int next(int min, int max);
};

#endif
