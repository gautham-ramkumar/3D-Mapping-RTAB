# RTAB-Map SLAM Implementation with ZEDM Camera

![Screenshot from 2025-01-28 15-18-26](https://github.com/user-attachments/assets/cdd96b75-fb26-42a9-8613-8155e821fe45)


This project implemented and evaluated the RTAB-Map (Real-Time Appearance-Based Mapping) SLAM algorithm using a ZEDM stereo camera. The objective was to assess the algorithm's performance in real-world settings by generating an accurate 3D map.  

The project began with an initial evaluation of RTAB-Map using the EUROC dataset, followed by mapping a classroom at Northeastern University. The ZEDM stereo camera's depth-sensing capabilities enabled detailed 3D reconstruction.  

A key challenge was noise in the mapping process due to the limitations of stereo visual odometry. RTAB-Map estimates motion by analyzing changes between consecutive frames. When operated handheld, rapid or irregular movements introduced inconsistencies, making it difficult for the algorithm to match features accurately between frames. To address this, the camera was mounted on a rolling chair, providing a more stable platform and reducing motion noise.  

The final map showed 90% alignment with the ground truth, with significant accuracy improvements observed after the third turn as the algorithm utilized loop closure to correct prior errors. This project demonstrated the effectiveness of RTAB-Map for real-time 3D SLAM in indoor environments.  

For more information, visit:  
- [RTAB-Map Repository](https://github.com/introlab/rtabmap)  
- [RTAB-Map Website](https://introlab.github.io/rtabmap/)  
- [ZED Mini Documentation](https://www.stereolabs.com/docs/zed-mini/)  
- [EUROC Dataset](https://projects.asl.ethz.ch/datasets/doku.php?id=kmavvisualinertialdatasets)  
