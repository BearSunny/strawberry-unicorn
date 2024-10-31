import math
def f(x):
    return math.cos(x) - x

def lim_f(x):
    - math.sin(x) - 1

def newton():
    tol = 0.005
    x0 = 3
    epsilon = 0.000001

    if lim_f(x0) == 0:
        break
    else:
        x1 = x0 - (f(x0) / lim_f(x0))

        if abs(x1 - x0) < tol:
            return x1
        else:
            
