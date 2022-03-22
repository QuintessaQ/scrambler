#pragma once

namespace cs5150 {
    /**
     * Interpret a valid CipherString character as an integer modulo 35.
     *
     * @param c Character to convert to integer (must be in '0-9A-Z').
     * @return Integer corresponding to character (in 0..35).
     */
    int charToInt(char const c);

    /**
     * Interpret an integer modulo 35 as a CipherString character.
     *
     * @param i Integer to convert to character (must be in 0..35).
     * @return Character corresponding to integer (in '0-9A-Z').
     */
    char intToChar(int const i);

    /**
     * Return the argument modulo 36, assuming it is no more than one modulus
     * from its canonical value.
     *
     * @param i Number to interpret modulo 36 (must be in -35..70).
     * @return The value of `i` modulo 36 (in 0..35).
     */
    int mod36(int const i);
}
