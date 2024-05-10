set(header_path "${${PROJECT_NAME}_SOURCE_DIR}/include")
set(header ${header_path}/Interfaces.h ${header_path}/Employee.h ${header_path}/Manager.h ${header_path}/Personal.h ${header_path}/Engineer.h ${header_path}/Factory.h
		Tester.cpp
		../include/Tester.h
		Programmer.cpp
		../include/Programmer.h
		TeamLeader.cpp
		../include/TeamLeader.h
		SeniorManager.cpp
		../include/SeniorManager.h
		SeniorManager.cpp
		../include/SeniorManager.h)
set(src Employee.cpp Personal.cpp Engineer.cpp Manager.cpp Factory.cpp
		Tester.cpp
		../include/Tester.h
		Programmer.cpp
		../include/Programmer.h
		TeamLeader.cpp
		../include/TeamLeader.h
		SeniorManager.cpp
		../include/SeniorManager.h
		ProjectManager.cpp
		../include/ProjectManager.h
		../include/ProjectManager.h
		SeniorManager.cpp
		../include/SeniorManager.h
		../include/SeniorManager.h
		main.cpp
		main.cpp
)


add_library(${PROJECT_NAME} SHARED
  ${header}
  ${src})
target_include_directories(${PROJECT_NAME}
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
         ${${PROJECT_NAME}_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME}
  pthread)


add_executable(${PROJECT_NAME}.info main.cpp)
target_include_directories(${PROJECT_NAME}.info
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
         ${${PROJECT_NAME}_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME}.info
  ${PROJECT_NAME})


install(TARGETS ${PROJECT_NAME}
		LIBRARY DESTINATION "${lib_dest}"
    ARCHIVE DESTINATION "${lib_dest}"
    COMPONENT library)
install(TARGETS ${PROJECT_NAME}.info
		RUNTIME DESTINATION "${tool_dest}"
    COMPONENT library)
install(FILES ${header} DESTINATION "${include_dest}")
