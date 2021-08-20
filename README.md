# gnc: An example project of BridgePoint for controlling quad copter for APRIS Robot Challange

## How to run

0. If you have a gnc directory in catkin_ws/src and want to make a backup
(It will be saved as a folder named gnc.bak in the Home directory.)
```
mv ~/catkin_ws/src/gnc ~/gnc.bak
```

1. Download this project in catkin_ws/src in the conatiner
```
cd ~/catkin_ws/src
git clone https://github.com/takata6080/model-kyudai-team2.git
mv model-kyudai-team2/ gnc
```

2. Rebuild catkin.
```
cd ~/catkin_ws
catkin clean
catkin build
```

3. Import to your bridgepoint workspace

* launch bridgepoint (just type 'bridgepoint' on termianl in the container)
* File menu -> Import -> General/Existing Project into Workspace -> Select root directory
* and select imported directory (it should be ~/catkin_ws/src/gnc)
* Build on BridgePoint (Ctrl+B or Project menu -> Build all)

4. Run in terminal

* Before you run, please finish exercise b-2.

- Enter the working directory
```
cd gazebo_models_worlds_collection
git pull
cd pbl
```

- Open five terminals with "file -> New Tab" and execute the following five commands in each
```
$ roscore
$ ./pbl_task.sh
$ ~/Desktop/sitl.sh
$ roslaunch iq_sim apm.launch
$ rosrun gnc ctrl
```
