bool isOddAge(int age){
        
    if ((age % 2) == 0){         
        return false;
    }
    return true;
}

bool isTeenage(int age){

    if ((age >= 13) && (age <= 19)){
        return true;
    }
    else{
        return false;
    }
}