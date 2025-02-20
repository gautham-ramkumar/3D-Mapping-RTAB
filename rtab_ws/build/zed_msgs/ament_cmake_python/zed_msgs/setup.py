from setuptools import find_packages
from setuptools import setup

setup(
    name='zed_msgs',
    version='4.2.2',
    packages=find_packages(
        include=('zed_msgs', 'zed_msgs.*')),
)
