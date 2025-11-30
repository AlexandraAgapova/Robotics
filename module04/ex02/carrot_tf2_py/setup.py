import os
from glob import glob
from setuptools import setup

package_name = 'carrot_tf2_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.rviz')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Alexandra',
    maintainer_email='a.agapova1@g.nsu.ru',
    description='Carrot TF2 demo',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_tf2_broadcaster = carrot_tf2_py.turtle_tf2_broadcaster:main',
            'carrot_broadcaster = carrot_tf2_py.carrot_broadcaster:main',
            'turtle_tf2_listener = carrot_tf2_py.turtle_tf2_listener:main',
        ],
    },
)
