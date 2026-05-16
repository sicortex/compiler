test_name=$1
compiler=$2
source=$3

if /home/jhj/compiler/build/bin/$compiler -o /home/jhj/compiler/build/bootstrap/$test_name.exe /home/jhj/compiler/bootstrap/$source -64; then
    if /home/jhj/compiler/build/bootstrap/$test_name.exe > /home/jhj/compiler/build/bootstrap/$test_name.log 2>&1; then
        if diff /home/jhj/compiler/build/bootstrap/$test_name.log /home/jhj/compiler/bootstrap/$test_name.log; then
            echo PASSED
            exit 0
        fi
        echo DIFF FAILED
        exit 3
    fi
    echo RUN FAILED
    exit 2
fi

echo COMPILE FAILED
exit 1

