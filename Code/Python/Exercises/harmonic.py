import numpy as np
import matplotlib.pyplot as plt
#import math

#pi=np.pi

x = np.linspace(-1, 1, 1000)
x_pi=x*np.pi

#print(x_pi)
sinx=np.sin(x_pi)
cosx=np.cos(x_pi)
tgx=np.tan(x_pi)


plt.plot(x_pi, sinx, label='Sine')
plt.plot(x_pi, cosx, label='Cosine')
plt.plot(x_pi, tgx, label='tangent')

plt.xlabel('Theta')
plt.ylabel('Amp')
plt.title("Trigonometric Functions")
plt.legend()
plt.xlim((-3.14,3.14))
plt.ylim((5,-5))
plt.show()
ext = 'png'
figname = 'ex5.' + ext 

plt.savefig(figname)
