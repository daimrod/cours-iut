````sh
    # 1 fichier
    gcc -o test test.c -Wall -Wextra -pedantic -std=c99 && ./test
    
    # X fichiers
    gcc -o test test1.c test2.c test3.c .... -Wall -Wextra -pedantic -std=c99
    
    # Compilation séparée
    gcc -c test1.c -Wall -Wextra -pedantic -std=c99
    gcc -c test2.c -Wall -Wextra -pedantic -std=c99
    gcc -o test test1.o test2.o -Wall -Wextra -pedantic -std=c99
````
