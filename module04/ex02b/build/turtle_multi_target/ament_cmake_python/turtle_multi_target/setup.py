from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_multi_target',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_multi_target', 'turtle_multi_target.*')),
)
