# CMake requirements.
cmake_minimum_required(VERSION 3.7...3.24.2)

set(${PROJECT_NAME}_Temp_files
${PROJECT_SOURCE_DIR}/.cmake
${PROJECT_SOURCE_DIR}/bin
${PROJECT_SOURCE_DIR}/lib
${PROJECT_SOURCE_DIR}/installed
${PROJECT_SOURCE_DIR}/share
${PROJECT_SOURCE_DIR}/CMakeFiles
${PROJECT_SOURCE_DIR}/CMakeCache.txt
${PROJECT_SOURCE_DIR}/cmake_install.cmake
${PROJECT_SOURCE_DIR}/Makefile
${PROJECT_SOURCE_DIR}/CPackConfig.cmake
${PROJECT_SOURCE_DIR}/CPackSourceConfig.cmake
${PROJECT_SOURCE_DIR}/.env
${PROJECT_SOURCE_DIR}/.ninja_deps
${PROJECT_SOURCE_DIR}/.ninja_log
${PROJECT_SOURCE_DIR}/vcpkg-configuration.json
${PROJECT_SOURCE_DIR}/build-${CMAKE_BUILD_TYPE}.ninja
${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME}/${PROJECT_NAME}Config.h
${PROJECT_SOURCE_DIR}/vcpkg-manifest-install.log
)

#https://stackoverflow.com/questions/9680420/looking-for-a-cmake-clean-command-to-clear-up-cmake-output
foreach(file ${PROJECT_NAME}_Temp_files)
  if (EXISTS ${file})
     file(REMOVE_RECURSE ${file})
  endif()
endforeach(file)
