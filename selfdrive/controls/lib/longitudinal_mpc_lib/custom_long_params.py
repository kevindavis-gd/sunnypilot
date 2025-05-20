#!/usr/bin/env python3
"""
Custom longitudinal control parameters for Kia Telluride
This file overrides the default parameters in long_mpc.py to make stopping more gradual
and start stopping sooner when approaching a stopped vehicle.
"""

# Original values:
# COMFORT_BRAKE = 2.5
# STOP_DISTANCE = 6.0

# Modified values:
COMFORT_BRAKE = 2.0  # Reduced from 2.5 to make braking more gradual
STOP_DISTANCE = 8.0  # Increased from 6.0 to start stopping sooner
