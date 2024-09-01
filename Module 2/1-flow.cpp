int main() {
    while (true) {
        //Do something forever
    }

    do {
        //Do something forever
    } while (true);

    for (int i = 0; i < 10; i++) {
        //Do something 10 times
    }

    for (/*initial condition*/; /*condition*/; /*increment*/) {
        //Do something until condition is false
    }

    for (;;) {
        //Do something forever (infinite loop)
    }

    if (true) {
        //Do something if true
    } else {
        //Do something if false
    }

    if (true) {
        //Do something if true
    } else if (false) {
        //Do something if false
    } else {
        //Do something if none of the above
    }

    //Fast way to do if else
    switch (5) {
        case 1:
            //Do something if 1
            break;
        case 2:
            //Do something if 2
            break;
        case 3: {
            //You may need to scope your cases, all cases are in the same scope
            break;
        }
        default:
            //Do something if none of the above
            break;
    }

    if (0 < 5)
        return;

    if (1 < 9)
        return;
    else
        return;

    if (0.1 <= 0.2) {
        return;
    } else
        return;

    if (0.1 >= 0.2) return;

    if (true); //This is a valid statement

    if (true || false);

    if (false && true);
}