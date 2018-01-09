/** \file Mainpage.h 
 * \mainpage Mainpage 
 * \image html rbdl_logo.png
 *
 * This is the documentation of RBDL, the Rigid Body Dynamics Library. The
 * library contains highly efficient code for both forward and inverse
 * dynamics for kinematic chains and branched models. It includes:
 *
 * \li Recursive Newton Euler Algorithm (RNEA)
 * \li Composite Rigid Body Algorithm (CRBA)
 * \li Articulated Body Algorithm (ABA).
 *
 * Furthermore it contains code for forward and inverse kinematics,
 * computations of Jacobians, contact handling. \link
 * RigidBodyDynamics::Model Models \endlink can be loaded from Lua scripts
 * or URDF files.
 * 
 * The code is developed by <a
 * href="mailto:martin.felis@iwr.uni-heidelberg.de">Martin Felis
 * <martin.felis@iwr.uni-heidelberg.de></a> at the research group <a
 * href="http://orb.iwr.uni-heidelberg.de/">Optimization in Robotics and
 * Biomechanics (ORB)</a> of the <a
 * href="http://www.iwr.uni-heidelberg.de"> Interdisciplinary Center for
 * Scientific Computing (IWR)</a> at <a
 * href="http://www.uni-heidelberg.de">Heidelberg University</a>. The code
 * is heavily inspired by the pseudo code of the book "Rigid Body Dynamics
 * Algorithms" of <a href="http://royfeatherstone.org" target="_parent">Roy
 * Featherstone</a>.
 *  
 * The code has no external dependencies but for optimal performance it is
 * advised to use version 3 of the <a href="http://eigen.tuxfamily.org/"
 * target="_parent">Eigen</a> math library. More information about it can
 * be found here: <a href="http://eigen.tuxfamily.org/"
 * target="_parent">http://eigen.tuxfamily.org/</a>. The Eigen3 library
 * must be obtained and installed separately.
 * 
 * \section download Download
 *
 * You can download the most recent stable version as zip file from
 * here:<br>
 *   <a href="https://bitbucket.org/rbdl/rbdl/get/default.zip">https://bitbucket.org/rbdl/rbdl/get/default.zip</a>
 *
 * All development takes place on Bitbucket and you can follow RBDL's
 * development here:<br>
 *   <a href="https://bitbucket.org/rbdl/rbdl">https://bitbucket.org/rbdl/rbdl</a>
 *
 * \section recent_changes Recent Changes
 * <ul>
 * <li>28 April 2016: New release 2.5.0:
 *   <ul>
 *     <li> Added an experimental Cython based Python wrapper of RBDL. The API is
 *       very close to the C++ API. For a brief glimpse of the API see 
 *       \ref PythonExample "Python Example"</li>
 *     <li> Matthew Millard added CustomJoints which allow to create different joint
 *       types completely by user code. They are implemented as proxy joints for
 *       which their behaviour is specified using virtual functions.</li>
 *     <li> Added CalcMInvTimesTau() that evaluates multiplication of the inverse of
 *       the joint space inertia matrix with a vector in O(n) time.</li>
 *     <li> Added JointTypeFloatingBase which uses TX,TY,TZ and a spherical joint for
 *       the floating base joint.</li>
 *     <li> Loading of floating base URDF models must now be specified as a third
 *       parameter to URDFReadFromFile() and URDFReadFromString()</li>
 *     <li> Added the URDF code from Bullet3 which gets used when ROS is not found.
 *       Otherwise use the URDF libraries found via Catkin.</li>
 *     <li> Added CalcPointVelocity6D, CalcPointAcceleration6D, and CalcPointJacobian6D
 *       that compute both linear and angular quantities</li>
 *     <li> Removed Model::SetFloatingBase (body). Use a 6-DoF joint or
 *       JointTypeFloatingBase instead.</li>
 *     <li> Fixed building issues when building DLL with MSVC++.</li>
 *   </ul>
 * </li>
 * <li>20 March 2016: New bugfix version 2.4.1:
 *   <ul>
 *     <li> <b>critical</b>: fixed termination criterion for
 *     InverseKinematics(). The termination criterion would be evaluated too
 *     early and thus report convergence too early. This was reported
 *     independently by Kevin Stein, Yun Fei, and Davide Corradi. Thanks
 *     for the reports!</li>
 *     <li> <b>critical</b>: fixed CompositeRigidBodyAlgorithm() when using
 *     spherical joints (thanks to Sébastien Barthélémy for
 *     reporting!)</li>
 *     </li>
 *   </ul>
 * </li>
 * <li>23 February 2015: New version 2.4.0:
 *   <ul>
 *    <li>Added sparse range-space method ForwardDynamicsContactsRangeSpaceSparse() and ComputeContactImpulsesRangeSpaceSparse()</li>
 *    <li>Added null-space method ForwardDynamicsContactsNullSpace() and ComputeContactImpulsesNullSpace()</li>
 *    <li>Renamed ForwardDynamicsContactsLagrangian() to ForwardDynamicsContactsDirect() and ComputeContactImpulsesLagrangian() to ComputeContactImpulsesDirect()</li>
 *    <li>Renamed ForwardDynamicsContacts() to ForwardDynamicsContactsKokkevis()</li>
 *    <li>Removed/Fixed CalcAngularMomentum(). The function produced wrong values. The functionality has been integrated into CalcCenterOfMass().</li>
 *    <li>CalcPointJacobian() does not clear the argument of the result anymore.  Caller has to ensure that the matrix was set to zero before using this function.</li>
 *    <li>Added optional workspace parameters for ForwardDynamicsLagrangian() to optionally reduce memory allocations</li>
 *    <li>Added JointTypeTranslationXYZ, JointTypeEulerXYZ, and JointTypeEulerYXZ which are equivalent to the emulated multidof joints but faster.</li>
 *    <li>Added optional parameter to CalcCenterOfMass() to compute angular momentum.</li>
 *    <li>Added CalcBodySpatialJacobian()</li>
 *    <li>Added CalcContactJacobian()</li>
 *    <li>Added NonlinearEffects()</li>
 *    <li>Added solving of linear systems using standard Householder QR</li>
 *    <li>LuaModel: Added LuaModelReadFromLuaState()</li>
 *    <li>URDFReader: Fixed various issues and using faster joints for floating base models</li>
 *    <li>Various performance improvements</li>
 *  </ul>
 * </li>
 * </ul>
 *
 * See \subpage api_version_checking_page for a complete version history.
 *
 * \section Example Examples
 *
 * A simple example for creation of a model and computation of the forward
 * dynamics using the C++ API can be found \ref SimpleExample "here".
 *
 * Another example that uses the \ref addon_luamodel_page "LuaModel Addon" can be found \ref
 * LuaModelExample "here".
 *
 * An example of the Python wrapper can be found at \ref PythonExample
 * "Python Example".
 * 
 * \section ModuleOverview API reference separated by functional modules
 * 
 * \li \subpage modeling_page
 * \li \subpage joint_description
 * \li \subpage kinematics_page
 * \li \subpage dynamics_page
 * \li \subpage contacts_page
 * \li \subpage addon_luamodel_page 
 *
 * The page \subpage api_version_checking_page contains information about
 * incompatibilities of the existing versions and how to migrate.
 *
 * \section Licensing Licensing
 *
 * The library is published under the very permissive zlib free software
 * license which should allow you to use the software wherever you need.
 * Here is the full license text:
 * \verbatim
RBDL - Rigid Body Dynamics Library
Copyright (c) 2011-2014 Martin Felis <martin.felis@iwr.uni-heidelberg.de>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
   distribution.
\endverbatim

 * \section Acknowledgements
 * 
 * Work on this library was funded by the <a
 * href="http://hgs.iwr.uni-heidelberg.de/hgs.mathcomp/">Heidelberg
 * Graduate School of Mathematical and Computational Methods for the
 * Sciences (HGS)</a> and the European FP7 projects <a
 * href="http://echord.eu">ECHORD</a> (grant number 231143) and <a
 * href="http://www.koroibot.eu">Koroibot</a> (grant number 611909).
 * 
 */
