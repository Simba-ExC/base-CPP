cmake_minimum_required(VERSION 3.10)
#�������� �������
project(LeavingPerson) 
#��������� ���������� �� ������� ���������� ��� ������������ �����
set (SOURCES_EXE 11_02.cpp) 
#set (HEADERS_EXE )
#��������� ���������� �� ������� ���������� ��� ����������
set (SOURCES_LIB Leaver.cpp) 
set (HEADERS_LIB Leaver.h)
#�������� ����������� ���������� � ������ LeavingPersonLib
add_library(LeavingPersonLib STATIC ${SOURCES_LIB} ${HEADERS_LIB}) 
#�������� ������������ ����� � ������ LeavingPersonExe
add_executable(LeavingPersonExe ${SOURCES_EXE})
#�������� ��������� � �����������
target_link_libraries(LeavingPersonExe LeavingPersonLib)
