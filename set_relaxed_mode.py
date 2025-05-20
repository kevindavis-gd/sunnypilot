#!/usr/bin/env python3
"""
Script to set the longitudinal personality to "Relaxed" mode
This will make the car follow at a greater distance and be less aggressive with braking
"""

import os
from common.params import Params

# Set longitudinal personality to "Relaxed" (0 = relaxed, 1 = standard, 2 = aggressive)
params = Params()
params.put("LongitudinalPersonality", "0")

print("Longitudinal personality set to 'Relaxed' mode")
print("This will make the car follow at a greater distance and be less aggressive with braking")
