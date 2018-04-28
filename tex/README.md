# What is this

The files to make a small container image of uplatex.  
It is mainly aimed at generating Japanese documents.

# How to build

The container image has the least requirements possible, so please edit the files as you like and use it.

```shell
cd /path/to/sandbox/tex
docker build -t tex2pdf .
```
note: `tex2pdf` can be changed as you like.

# How to use

`foo.pdf` will be generated when you run the following command.  

```shell
docker run -it --rm -v $(pwd):/mnt tex2pdf foo.tex
```
note: if you changed the name of the container image, you have to replace `tex2pdf`.

