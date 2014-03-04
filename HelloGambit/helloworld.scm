
(c-declare #<<c-declare-end

#include <math.h>

c-declare-end
)

(define c-sin (c-lambda (float64) float64 "sin"))

(c-define (test-gambit s) (char-string) void "test_gambit" ""
        (println "From the gambit: ")
        (println s)
        (println (c-sin 0.75))
        )