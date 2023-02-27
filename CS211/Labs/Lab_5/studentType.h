class studentType
{

    private:
    string firstName;
    string lastName;
    double GPA;

public:

    void setFirstName(string fn){
        firstName = fn;
    }
    void setLastName(string ln){
        lastName = ln;
    }

    void setGPA(double gp){
        GPA = gp;
    }

    void print(){
        cout << firstName << " " << lastName << " " << GPA << endl;
    }


}; 
