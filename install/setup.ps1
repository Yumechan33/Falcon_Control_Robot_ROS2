# generated from colcon_powershell/shell/template/prefix_chain.ps1.em

# This script extends the environment with the environment of other prefix
# paths which were sourced when this file was generated as well as all packages
# contained in this prefix path.

# function to source another script with conditional trace output
# first argument: the path of the script
function _colcon_prefix_chain_powershell_source_script {
  param (
    $_colcon_prefix_chain_powershell_source_script_param
  )
  # source script with conditional trace output
  if (Test-Path $_colcon_prefix_chain_powershell_source_script_param) {
    if ($env:COLCON_TRACE) {
      echo ". '$_colcon_prefix_chain_powershell_source_script_param'"
    }
    . "$_colcon_prefix_chain_powershell_source_script_param"
  } else {
    Write-Error "not found: '$_colcon_prefix_chain_powershell_source_script_param'"
  }
}

# source chained prefixes
_colcon_prefix_chain_powershell_source_script "/opt/ros/foxy\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/open_topic/falcon_ros2/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/lab3_ws/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/lab2_ws/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/MBSE/for_seding_v1/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/pun_ws/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/lab1_ws/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/fra333_lab2_ex/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/lab3_example/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/lab4_ws/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/ROS2_Directory/velocity_example/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/open_topic/test_build_lib/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/test_cpp/install\local_setup.ps1"
_colcon_prefix_chain_powershell_source_script "/home/ayumayume/turtlebot3_ws/install\local_setup.ps1"

# source this prefix
$env:COLCON_CURRENT_PREFIX=(Split-Path $PSCommandPath -Parent)
_colcon_prefix_chain_powershell_source_script "$env:COLCON_CURRENT_PREFIX\local_setup.ps1"
