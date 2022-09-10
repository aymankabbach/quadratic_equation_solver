def read_the_value_from_the_user(variable):
    wrong_input=True
    while wrong_input==True:
        try:
            user_input=float(input(f"insert the value of {variable}"))
        except ValueError:
            pass
        else:
            wrong_input=False
    return user_input
variable_a=read_the_value_from_the_user("a")
variable_b=read_the_value_from_the_user("b")
variable_c=read_the_value_from_the_user("c")
def Calculate_the_discriminant():
    discriminant=(variable_b*variable_b)-(4*variable_a*variable_c)
    return discriminant
def calculate_solution_case_2(discriminant):
    print("this equation has 2 solutions")
    first_solution=(-variable_b+pow(discriminant,0.5))/(2*variable_a)
    second_solution=(-variable_b-pow(discriminant,0.5))/(2*variable_a)
    solutions=[]
    solutions.append(first_solution)
    solutions.append(second_solution)
    return solutions
def calculate_solution_case_3():
    print("this equation has only one solution")
    solution=f"x= {-variable_b/(2*variable_a)}"
    return solution
def solve_the_equation():
    if (variable_a==0):
        if (variable_b==0):
            if (variable_c==0):
                return "all numbers are solutions to this equation"
            else:
                return "this equation has no solution"
        else:
            return f"x= {-variable_c/variable_b}"
    else:
        discriminant=Calculate_the_discriminant()
        print(f"discriminant= {discriminant}")
        if (discriminant <0):
            return "this equation has no solution"
        if (discriminant >0):
            solution=calculate_solution_case_2(discriminant)
            return f"x= {solution[0]}\nx= {solution[1]}"
        if (discriminant==0):
            solution=calculate_solution_case_3()
            return solution
def print_result():
    result=solve_the_equation()
    print(result)
print_result()
