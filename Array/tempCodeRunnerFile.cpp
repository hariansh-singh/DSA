

    double step = 0.1;
    double final_ans = ans;
    
    for(int i=0; i<precision; i++) {
        for(double j=final_ans; j*j < n; j += step) {