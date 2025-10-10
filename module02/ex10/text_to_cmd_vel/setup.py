from setuptools import setup

package_name = 'text_to_cmd_vel'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='alexandra',
    maintainer_email='a.agapova1@g.nsu.ru',
    description='Node converting text commands into geometry_msgs/Twist messages',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'text_to_cmd_vel = text_to_cmd_vel.text_to_cmd_vel:main',
        ],
    },
)
