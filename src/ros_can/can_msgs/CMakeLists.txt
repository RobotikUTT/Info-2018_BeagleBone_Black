cmake_minimum_required(VERSION 2.8.3)
project(can_msgs)

find_package(catkin REQUIRED
  COMPONENTS
    message_generation
    std_msgs
)

add_message_files(DIRECTORY msg
  FILES
    ActionPliers.msg
    CurrSpeed.msg
    Finish.msg
    Frame.msg
    ObjectOnMap.msg
    PID.msg
    PWMs.msg
    Point.msg
    RobotBlocked.msg
    STMParam.msg
    SonarDistance.msg
    Speed.msg
    Status.msg
    ThrowBalls.msg
    WheelsDistance.msg


)

generate_messages(
  DEPENDENCIES
    std_msgs
)

catkin_package(
  CATKIN_DEPENDS
    message_runtime
    std_msgs
)
