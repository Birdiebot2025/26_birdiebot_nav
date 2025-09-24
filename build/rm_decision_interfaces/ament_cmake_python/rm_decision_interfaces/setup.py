from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_decision_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rm_decision_interfaces', 'rm_decision_interfaces.*')),
)
