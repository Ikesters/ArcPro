#!/bin/sh
version=`git log -1 --pretty=format:"%h"`
timestamp=`git log -1 --pretty=format:"%ct"`
tag=`cat arcemu-tag`
hostname=`hostname`
username=`whoami | cut -d\\\ -f2`

if [ -z "$version" ]
then
	version="0"
fi

if [ -z "$timestamp" ]
then
	timestamp="0"
fi


echo "#ifndef GIT_VERSION_HPP" > src/arcpro-shared/git_version.h
echo "#define GIT_VERSION_HPP" >> src/arcpro-shared/git_version.h
echo "" >> src/arcpro-shared/git_version.h
echo "#define BUILD_TAG \"$tag\"" >> src/arcpro-shared/git_version.h
echo "#define BUILD_HASH 0x$version" >> src/arcpro-shared/git_version.h
echo "#define COMMIT_TIMESTAMP $timestamp" >> src/arcpro-shared/git_version.h
echo "#define BUILD_HASH_STR \"$version\"" >> src/arcpro-shared/git_version.h
echo "#define BUILD_USER_STR \"$username\"" >> src/arcpro-shared/git_version.h
echo "#define BUILD_HOST_STR \"$hostname\"" >> src/arcpro-shared/git_version.h
echo "" >> src/arcpro-shared/git_version.h
echo "#endif" >> src/arcpro-shared/git_version.h
