# RTAB-Map SLAM Implementation with ZEDM Camera

This project implemented and evaluated the RTAB-Map (Real-Time Appearance-Based Mapping) SLAM algorithm using a ZEDM stereo camera. The objective was to assess the algorithm's performance in real-world settings by generating an accurate 3D map.  

The project began with an initial evaluation of RTAB-Map using the EUROC dataset, followed by mapping a classroom at Northeastern University. The ZEDM stereo camera's depth-sensing capabilities enabled detailed 3D reconstruction. However, vibrations from the carpeted floor introduced noise, affecting map alignment. To address this, the camera was mounted on a rolling chair to reduce environmental noise.  

The final map showed 90% alignment with the ground truth, with significant accuracy improvements observed after the third turn as the algorithm utilized loop closure to correct prior errors. This project demonstrated the effectiveness of RTAB-Map for real-time 3D SLAM in indoor environments.  

For more information, visit:  
- [RTAB-Map Repository](https://github.com/introlab/rtabmap)  
- [RTAB-Map Website](https://introlab.github.io/rtabmap/)  
- [ZED Mini Documentation](https://www.stereolabs.com/docs/zed-mini/)  
- [EUROC Dataset](https://projects.asl.ethz.ch/datasets/doku.php?id=kmavvisualinertialdatasets)  
