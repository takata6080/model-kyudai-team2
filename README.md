# gnc: An example project of BridgePoint for controlling quad copter for APRIS Robot Challange

## How to run

1. Download this project in catkin_ws/src in the conatiner
```
cd ~/catkin_ws/src
git clone https://github.com/takata6080/gnc-kyudai-team2.git
```

2. Import to your bridgepoint workspace

* launch bridgepoint (just type 'bridgepoint' on termianl in the container)
* File menu -> Import -> General/Existing Project into Workspace -> Select root directory
* and select imported directory (it should be ~/catkin_ws/src/gnc)
* Build on BridgePoint (Ctrl+B or Project menu -> Build all)

3. Run in terminal

* Before executing gnc, run simulator.sh, sitl.sh, and apm accroding to README.md of the container.
```
cd gazebo_models_worlds_collection/pbl/
```

```
$ roscore
$ ./simulator_pbl.sh
$ ~/Desktop/sitl.sh
$ roslaunch iq_sim apm.launch
$ rosrun gnc ctrl
```
