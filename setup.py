from setuptools import setup, Extension
from pathlib import Path

coyote = Extension(
    "simulation.coyote",
    sources=[path.as_posix() for path in Path("src").rglob("*.c")],
    include_dirs=["include"],
    #extra_compile_args=["-lmg"]
)

setup(
    name="coyote",
    version="1.0",
    description="Low-Density Parity Checking.",
    author="H. E. Franks",
    author_email="hef36@cam.ac.uk",
    ext_modules=[coyote]
)
