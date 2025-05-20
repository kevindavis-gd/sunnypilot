# Kia Telluride Stopping Behavior Adjustment

This modification adjusts the stopping behavior of your Kia Telluride to make it stop more gradually and start stopping sooner when approaching a stopped vehicle.

## Changes Made

1. Created a custom parameters file (`selfdrive/controls/lib/longitudinal_mpc_lib/custom_long_params.py`) with the following adjustments:
   - Reduced `COMFORT_BRAKE` from 2.5 to 2.0 to make braking more gradual
   - Increased `STOP_DISTANCE` from 6.0 to 8.0 to start stopping sooner

2. Modified `long_mpc.py` to import these custom parameters

3. Created a script to set the longitudinal personality to "Relaxed" mode (`set_relaxed_mode.py`)

## How to Apply These Changes

1. The changes to the code files are already applied to your local repository.

2. To set the longitudinal personality to "Relaxed" mode, run:
   ```
   python set_relaxed_mode.py
   ```

3. Restart openpilot for the changes to take effect.

## Fine-Tuning

If you find that the stopping behavior is still not to your liking, you can further adjust the parameters in `custom_long_params.py`:

- To make stopping even more gradual, reduce `COMFORT_BRAKE` further (e.g., to 1.8 or 1.5)
- To start stopping even sooner, increase `STOP_DISTANCE` further (e.g., to 9.0 or 10.0)

After making any changes, restart openpilot for them to take effect.

## Reverting Changes

To revert to the default stopping behavior:

1. Delete the `custom_long_params.py` file
2. Set the longitudinal personality back to "Standard" in the openpilot settings menu

## Longitudinal Personality Settings

The longitudinal personality can be set in the openpilot settings menu or by using the distance button on your steering wheel:

- **Relaxed**: Follows at a greater distance (1.75 seconds) and is less aggressive with braking
- **Standard**: Default following distance (1.45 seconds)
- **Aggressive**: Follows closer (1.25 seconds) and is more aggressive with acceleration and braking
