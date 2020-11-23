import matplotlib.pyplot as plt
import numpy as np

x,y = np.loadtxt("medie.dat",unpack=True,usecols=(0,1))
plt.bar(x,y,1,None, align="center")
plt.show()