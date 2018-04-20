# telef

C++ Library for Facial Performance Capture with Kinect 

## Setup

### Dependency

1. Install Eigen (>=3.3)
1. Install VTK (>=8.1.0)
1. Install OpenCV (2.4.X)
1. Install OpenNI, OpenNI2
1. Clone and install libfreenect's latest master branch(https://github.com/OpenKinect/libfreenect) and OpenNI2-FreenectDriver.
    Remember to copy the driver into OpenNI2's repository folder(Check (https://github.com/OpenKinect/libfreenect/tree/master/OpenNI2-FreenectDriver))
1. Clone and install PCL's latest master branch (https://github.com/PointCloudLibrary/pcl) (> 1.8.1).
    Their lastest binary release(1.8.1) has bugs with kinect v1. Don't use it.

### Additional Setup for Temporary Implementation

1. put your LIB.a into lib/libface.a
1. put your MODELLOADINGCODE.cpp into src/io/modelio.cpp
1. put your MODELS into models/
1. put your LIBHEADERS into include/face/


## Build

```
mkdir build
cd build
cmake ../
make
```

## Reference

Face model samples
* Tianye Li*, Timo Bolkart*, Michael J. Black, Hao Li, and Javier Romero. 2017. Learning a model of facial shape and expression from 4D scans. ACM Trans. Graph. 36, 6, Article 194 (November 2017), 17 pages. https://doi.org/10.1145/3130800.3130813

Landmark detection temporary implementation
X. Xiong and F. De la Torre. 2013. Supervised descent method and its applications to face alignment. In Conference on Computer Vision and Pattern Recognition. 532–539
