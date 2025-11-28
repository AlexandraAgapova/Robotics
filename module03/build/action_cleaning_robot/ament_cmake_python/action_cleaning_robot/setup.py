from setuptools import find_packages
from setuptools import setup

setup(
    name='action_cleaning_robot',
    version='0.0.0',
    packages=find_packages(
        include=('action_cleaning_robot', 'action_cleaning_robot.*')),
)
