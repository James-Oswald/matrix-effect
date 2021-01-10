
#ifndef _whatever
#define _whatever

#define __POSIX
//                         R   G   B
#define tipCol "\033[38;2;240;248;255m"
#define bodyCol "\033[38;2;0;191;255m"

/* -----------------start---------------------*/
/* how big the gap between two following snakes has to be */
#define SNAKES_MIN_GAP      3
/* how like it as a for a new snake to start per move in percent */
#define SNAKES_LIKELIHOOD   3
/* the minimum length of a snake in percent */
#define SNAKES_LENGTH_MIN   25
/* the maximum length of a snake in percent */
#define SNAKES_LENGTH_MAX   70
/* speed in ms */
#define SNAKES_SPEED        80
/* -----------------stop----------------------*/

#endif
