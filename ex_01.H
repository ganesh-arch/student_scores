{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 2,
   "id": "5c63349f",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "'/home/student'"
      ]
     },
     "execution_count": 2,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "pwd"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 5,
   "id": "3cfe3cde",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Collecting pandas\n",
      "  Downloading pandas-1.3.2-cp39-cp39-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (11.5 MB)\n",
      "\u001b[K     |████████████████████████████████| 11.5 MB 10.5 MB/s eta 0:00:01\n",
      "\u001b[?25hRequirement already satisfied: python-dateutil>=2.7.3 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from pandas) (2.8.2)\n",
      "Requirement already satisfied: numpy>=1.17.3 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from pandas) (1.21.1)\n",
      "Requirement already satisfied: pytz>=2017.3 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from pandas) (2021.1)\n",
      "Requirement already satisfied: six>=1.5 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from python-dateutil>=2.7.3->pandas) (1.15.0)\n",
      "Installing collected packages: pandas\n",
      "Successfully installed pandas-1.3.2\n",
      "Note: you may need to restart the kernel to use updated packages.\n"
     ]
    }
   ],
   "source": [
    "pip install pandas\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "id": "085c6eb0",
   "metadata": {},
   "outputs": [],
   "source": [
    "import pandas as pd"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "id": "5375be91",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Collecting matplotlib\n",
      "  Downloading matplotlib-3.4.3-cp39-cp39-manylinux1_x86_64.whl (10.3 MB)\n",
      "\u001b[K     |████████████████████████████████| 10.3 MB 11.5 MB/s eta 0:00:01\n",
      "\u001b[?25hRequirement already satisfied: python-dateutil>=2.7 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from matplotlib) (2.8.2)\n",
      "Collecting pillow>=6.2.0\n",
      "  Downloading Pillow-8.3.2-cp39-cp39-manylinux_2_17_x86_64.manylinux2014_x86_64.whl (3.0 MB)\n",
      "\u001b[K     |████████████████████████████████| 3.0 MB 10.6 MB/s eta 0:00:01\n",
      "\u001b[?25hRequirement already satisfied: pyparsing>=2.2.1 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from matplotlib) (2.4.7)\n",
      "Requirement already satisfied: numpy>=1.16 in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from matplotlib) (1.21.1)\n",
      "Collecting kiwisolver>=1.0.1\n",
      "  Downloading kiwisolver-1.3.2-cp39-cp39-manylinux_2_12_x86_64.manylinux2010_x86_64.whl (1.6 MB)\n",
      "\u001b[K     |████████████████████████████████| 1.6 MB 5.9 MB/s eta 0:00:01\n",
      "\u001b[?25hCollecting cycler>=0.10\n",
      "  Downloading cycler-0.10.0-py2.py3-none-any.whl (6.5 kB)\n",
      "Requirement already satisfied: six in ./anaconda3/envs/tf2/lib/python3.9/site-packages (from cycler>=0.10->matplotlib) (1.15.0)\n",
      "Installing collected packages: pillow, kiwisolver, cycler, matplotlib\n",
      "Successfully installed cycler-0.10.0 kiwisolver-1.3.2 matplotlib-3.4.3 pillow-8.3.2\n",
      "Note: you may need to restart the kernel to use updated packages.\n"
     ]
    }
   ],
   "source": [
    "pip install matplotlib"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "id": "9ff31eb3",
   "metadata": {},
   "outputs": [],
   "source": [
    "import matplotlib.pyplot as plt"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "id": "53500ec7",
   "metadata": {},
   "outputs": [],
   "source": [
    "data=pd.read_csv(\"student_scores.csv\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 12,
   "id": "2e9ea150",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/html": [
       "<div>\n",
       "<style scoped>\n",
       "    .dataframe tbody tr th:only-of-type {\n",
       "        vertical-align: middle;\n",
       "    }\n",
       "\n",
       "    .dataframe tbody tr th {\n",
       "        vertical-align: top;\n",
       "    }\n",
       "\n",
       "    .dataframe thead th {\n",
       "        text-align: right;\n",
       "    }\n",
       "</style>\n",
       "<table border=\"1\" class=\"dataframe\">\n",
       "  <thead>\n",
       "    <tr style=\"text-align: right;\">\n",
       "      <th></th>\n",
       "      <th>Hours</th>\n",
       "      <th>Scores</th>\n",
       "    </tr>\n",
       "  </thead>\n",
       "  <tbody>\n",
       "    <tr>\n",
       "      <th>0</th>\n",
       "      <td>2.5</td>\n",
       "      <td>21</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>1</th>\n",
       "      <td>5.1</td>\n",
       "      <td>47</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>2</th>\n",
       "      <td>3.2</td>\n",
       "      <td>27</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>3</th>\n",
       "      <td>8.5</td>\n",
       "      <td>75</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>4</th>\n",
       "      <td>3.5</td>\n",
       "      <td>30</td>\n",
       "    </tr>\n",
       "  </tbody>\n",
       "</table>\n",
       "</div>"
      ],
      "text/plain": [
       "   Hours  Scores\n",
       "0    2.5      21\n",
       "1    5.1      47\n",
       "2    3.2      27\n",
       "3    8.5      75\n",
       "4    3.5      30"
      ]
     },
     "execution_count": 12,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "data.head()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "id": "7a65e653",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "Hours     0\n",
       "Scores    0\n",
       "dtype: int64"
      ]
     },
     "execution_count": 13,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "data.isnull().sum()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 14,
   "id": "2a89f678",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "<class 'pandas.core.frame.DataFrame'>\n",
      "RangeIndex: 25 entries, 0 to 24\n",
      "Data columns (total 2 columns):\n",
      " #   Column  Non-Null Count  Dtype  \n",
      "---  ------  --------------  -----  \n",
      " 0   Hours   25 non-null     float64\n",
      " 1   Scores  25 non-null     int64  \n",
      "dtypes: float64(1), int64(1)\n",
      "memory usage: 528.0 bytes\n"
     ]
    }
   ],
   "source": [
    "data.info()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 17,
   "id": "8dac1f4e",
   "metadata": {},
   "outputs": [],
   "source": [
    "x=data.Hours"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 18,
   "id": "7e167354",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "0    2.5\n",
       "1    5.1\n",
       "2    3.2\n",
       "3    8.5\n",
       "4    3.5\n",
       "Name: Hours, dtype: float64"
      ]
     },
     "execution_count": 18,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "x.head()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 19,
   "id": "de68fd59",
   "metadata": {},
   "outputs": [],
   "source": [
    "y=data.Scores"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 20,
   "id": "6e08a917",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "0    21\n",
       "1    47\n",
       "2    27\n",
       "3    75\n",
       "4    30\n",
       "Name: Scores, dtype: int64"
      ]
     },
     "execution_count": 20,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "y.head()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 25,
   "id": "651948d5",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "9.775803390787635 2.4836734053722633\n"
     ]
    }
   ],
   "source": [
    "n=len(x)\n",
    "m=0\n",
    "c=0\n",
    "L=0.001\n",
    "loss=[]\n",
    "for i in range(100000):\n",
    "    ypred=m*x+c\n",
    "    mse=(1/n)*sum((ypred-y)**2)\n",
    "    dm=(2/n)*sum(x*(ypred-y))\n",
    "    dc=(2/n)*sum(ypred-y)\n",
    "    c=c-L*dc\n",
    "    m=m-L*dm\n",
    "    loss.append(mse)\n",
    "print(m,c)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 26,
   "id": "965c713f",
   "metadata": {},
   "outputs": [],
   "source": [
    "y_pred=m*x+c"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 27,
   "id": "b51554e5",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "0     26.923182\n",
       "1     52.340271\n",
       "2     33.766244\n",
       "3     85.578002\n",
       "4     36.698985\n",
       "5     17.147378\n",
       "6     92.421065\n",
       "7     56.250592\n",
       "8     83.622842\n",
       "9     28.878343\n",
       "10    77.757360\n",
       "11    60.160913\n",
       "12    46.474789\n",
       "13    34.743825\n",
       "14    13.237057\n",
       "15    89.488324\n",
       "16    26.923182\n",
       "17    21.057700\n",
       "18    62.116074\n",
       "19    74.824618\n",
       "20    28.878343\n",
       "21    49.407530\n",
       "22    39.631726\n",
       "23    69.936717\n",
       "24    78.734940\n",
       "Name: Hours, dtype: float64"
      ]
     },
     "execution_count": 27,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "y_pred"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 31,
   "id": "4b224dd5",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "Text(0.5, 1.0, 'Study hours vs Scores')"
      ]
     },
     "execution_count": 31,
     "metadata": {},
     "output_type": "execute_result"
    },
    {
     "data": {
      "image/png": "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\n",
      "text/plain": [
       "<Figure size 432x288 with 1 Axes>"
      ]
     },
     "metadata": {
      "needs_background": "light"
     },
     "output_type": "display_data"
    }
   ],
   "source": [
    "plt.scatter(x,y,color=\"violet\")\n",
    "plt.plot(x,y_pred,color=\"blue\")\n",
    "plt.xlabel(\"Study hours\")\n",
    "plt.ylabel(\"Scores\")\n",
    "plt.title(\"Study hours vs Scores\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 32,
   "id": "f50427cd",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "Text(0, 0.5, 'loss')"
      ]
     },
     "execution_count": 32,
     "metadata": {},
     "output_type": "execute_result"
    },
    {
     "data": {
      "image/png": "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\n",
      "text/plain": [
       "<Figure size 432x288 with 1 Axes>"
      ]
     },
     "metadata": {
      "needs_background": "light"
     },
     "output_type": "display_data"
    }
   ],
   "source": [
    "plt.plot(loss)\n",
    "plt.xlabel(\"iterations\")\n",
    "plt.ylabel(\"loss\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 35,
   "id": "f4eac4fa",
   "metadata": {},
   "outputs": [],
   "source": [
    "dat=pd.read_csv(r\"/home/student/Downloads/student_scores.csv\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 36,
   "id": "5ca36f09",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/html": [
       "<div>\n",
       "<style scoped>\n",
       "    .dataframe tbody tr th:only-of-type {\n",
       "        vertical-align: middle;\n",
       "    }\n",
       "\n",
       "    .dataframe tbody tr th {\n",
       "        vertical-align: top;\n",
       "    }\n",
       "\n",
       "    .dataframe thead th {\n",
       "        text-align: right;\n",
       "    }\n",
       "</style>\n",
       "<table border=\"1\" class=\"dataframe\">\n",
       "  <thead>\n",
       "    <tr style=\"text-align: right;\">\n",
       "      <th></th>\n",
       "      <th>Hours</th>\n",
       "      <th>Scores</th>\n",
       "    </tr>\n",
       "  </thead>\n",
       "  <tbody>\n",
       "    <tr>\n",
       "      <th>0</th>\n",
       "      <td>2.5</td>\n",
       "      <td>21</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>1</th>\n",
       "      <td>5.1</td>\n",
       "      <td>47</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>2</th>\n",
       "      <td>3.2</td>\n",
       "      <td>27</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>3</th>\n",
       "      <td>8.5</td>\n",
       "      <td>75</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>4</th>\n",
       "      <td>3.5</td>\n",
       "      <td>30</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>5</th>\n",
       "      <td>1.5</td>\n",
       "      <td>20</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>6</th>\n",
       "      <td>9.2</td>\n",
       "      <td>88</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>7</th>\n",
       "      <td>5.5</td>\n",
       "      <td>60</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>8</th>\n",
       "      <td>8.3</td>\n",
       "      <td>81</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>9</th>\n",
       "      <td>2.7</td>\n",
       "      <td>25</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>10</th>\n",
       "      <td>7.7</td>\n",
       "      <td>85</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>11</th>\n",
       "      <td>5.9</td>\n",
       "      <td>62</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>12</th>\n",
       "      <td>4.5</td>\n",
       "      <td>41</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>13</th>\n",
       "      <td>3.3</td>\n",
       "      <td>42</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>14</th>\n",
       "      <td>1.1</td>\n",
       "      <td>17</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>15</th>\n",
       "      <td>8.9</td>\n",
       "      <td>95</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>16</th>\n",
       "      <td>2.5</td>\n",
       "      <td>30</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>17</th>\n",
       "      <td>1.9</td>\n",
       "      <td>24</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>18</th>\n",
       "      <td>6.1</td>\n",
       "      <td>67</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>19</th>\n",
       "      <td>7.4</td>\n",
       "      <td>69</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>20</th>\n",
       "      <td>2.7</td>\n",
       "      <td>30</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>21</th>\n",
       "      <td>4.8</td>\n",
       "      <td>54</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>22</th>\n",
       "      <td>3.8</td>\n",
       "      <td>35</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>23</th>\n",
       "      <td>6.9</td>\n",
       "      <td>76</td>\n",
       "    </tr>\n",
       "    <tr>\n",
       "      <th>24</th>\n",
       "      <td>7.8</td>\n",
       "      <td>86</td>\n",
       "    </tr>\n",
       "  </tbody>\n",
       "</table>\n",
       "</div>"
      ],
      "text/plain": [
       "    Hours  Scores\n",
       "0     2.5      21\n",
       "1     5.1      47\n",
       "2     3.2      27\n",
       "3     8.5      75\n",
       "4     3.5      30\n",
       "5     1.5      20\n",
       "6     9.2      88\n",
       "7     5.5      60\n",
       "8     8.3      81\n",
       "9     2.7      25\n",
       "10    7.7      85\n",
       "11    5.9      62\n",
       "12    4.5      41\n",
       "13    3.3      42\n",
       "14    1.1      17\n",
       "15    8.9      95\n",
       "16    2.5      30\n",
       "17    1.9      24\n",
       "18    6.1      67\n",
       "19    7.4      69\n",
       "20    2.7      30\n",
       "21    4.8      54\n",
       "22    3.8      35\n",
       "23    6.9      76\n",
       "24    7.8      86"
      ]
     },
     "execution_count": 36,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "dat"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "349f4636",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.9.6"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
