#!/bin/bash
ping -c 1 8.8.8.8 1> /dev/null
if [ $? == 0 ]
then
	    echo "ping to google dns success"
    else
	    echo "ping to google dns fail"
fi

