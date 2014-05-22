cp pymnstr.html index2.html
git checkout gh-pages
cp index2.html index.html
git commit index.html -m "page update"
git push origin gh-pages --force
git checkout master
