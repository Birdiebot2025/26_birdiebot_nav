from setuptools import find_packages
from setuptools import setup

setup(
    name='navigation_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('navigation_interfaces', 'navigation_interfaces.*')),
)
