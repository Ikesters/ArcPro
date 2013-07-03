add_subdirectory( vmap_extractor )
add_subdirectory( vmap_assembler )

IF( WIN32 )
	install( FILES ${ROOT_PATH}/src/tools/vmap_tools/vmaps.bat DESTINATION ${ARCPRO_TOOLS_PATH} )
ELSE( WIN32 )
	install( FILES ${ROOT_PATH}/src/tools/vmap_tools/vmaps.sh DESTINATION ${ARCPRO_TOOLS_PATH} )
ENDIF( WIN32 )
