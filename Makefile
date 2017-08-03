#git
all:

help:
	@+echo ""
	@+echo ""
	@+echo "*********************************Help GIT******************************************"
	@+echo ""
	@+echo "make clone"
	@+echo "		git clone https://github.com/lion037osx/qt_icons.git"
	@+echo "make push"
	@+echo "		git push https://github.com/lion037osx/qt_icons.git"
	@+echo "make pull"
	@+echo "		git pull https://github.com/lion037osx/qt_icons.git"
	@+echo "make commit"
	@+echo "		git commit -m \"update\""
	@+echo "make add"
	@+echo "		git add ."
	@+echo "		git commit - m \"update\""
	@+echo "		git push origin master"
	@+echo ""
	@+echo ""
	@+echo "		Copyrigth by Leo"
	@+echo ""
	@+echo ""

clone:

	git clone https://github.com/lion037osx/qt_icons.git

push:
	git add.
	git commit -m "update"
#	git push origin master 
	git push https://github.com/lion037osx/qt_icons.git

pull:
	git add .
	git commit -m "upgrade"
#	git pull origin master
	git pull git push https://github.com/lion037osx/qt_icons.git

commit:

	git commit -m "update"

add:

	git add .

status:
	git status
	git remote -v

merge:
	git merge


	#git remote -v


update:
	git add .
	git commit -m "update"
	git push origin master

