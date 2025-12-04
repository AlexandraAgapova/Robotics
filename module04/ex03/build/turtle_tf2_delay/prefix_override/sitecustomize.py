import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/alexandra/Robotics/module04/ex03/install/turtle_tf2_delay'
