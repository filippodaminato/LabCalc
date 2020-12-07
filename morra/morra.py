import matplotlib.pyplot as plt
import numpy as np

x,y = np.loadtxt("punti.dat",unpack=True,usecols=(0,1))
plt.plot(x,y, '-o')

x,y = np.loadtxt("punti.dat",unpack=True,usecols=(0,2))
plt.plot(x,y, '-o')

plt.show()