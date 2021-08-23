#!/bin/sh
ifconfig -a | grep ether | sed "s/ether//" | awk '{print $NF}'
