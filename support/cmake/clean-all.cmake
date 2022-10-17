# CMake requirements.
cmake_minimum_required(VERSION 3.7...3.24.2)

# clean-all.cmake
set(${PROJECT_NAME}_Temp_files
${PROJECT_BINARY_DIR}/.cmake
${PROJECT_BINARY_DIR}/bin
${PROJECT_BINARY_DIR}/lib
${PROJECT_BINARY_DIR}/installed
${PROJECT_BINARY_DIR}/share
${PROJECT_BINARY_DIR}/CMakeFiles
${PROJECT_BINARY_DIR}/CMakeCache.txt
${PROJECT_BINARY_DIR}/cmake_install.cmake
${PROJECT_BINARY_DIR}/Makefile
${PROJECT_BINARY_DIR}/CPackConfig.cmake
${PROJECT_BINARY_DIR}/CPackSourceConfig.cmake
${PROJECT_BINARY_DIR}/.env
${PROJECT_BINARY_DIR}/.ninja_deps
${PROJECT_BINARY_DIR}/.ninja_log
${PROJECT_BINARY_DIR}/vcpkg-configuration.json
${PROJECT_BINARY_DIR}/build-${CMAKE_BUILD_TYPE}.ninja
${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}/${PROJECT_NAME}Config.h
${PROJECT_BINARY_DIR}/vcpkg-manifest-install.log
)

foreach(file ${PROJECT_NAME}_Temp_files)

  if (EXISTS ${file})
     file(REMOVE_RECURSE ${file})
  endif()

endforeach(file)
