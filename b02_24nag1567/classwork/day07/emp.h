struct Employee{
    char empName[20];
    int empId;
    int empSal;
    
};

typedef struct Employee EMP;

void getData(EMP *);
void display(EMP);
int findEmpName(EMP *, int, char *);

int findEmpID(EMP *, int, int);
