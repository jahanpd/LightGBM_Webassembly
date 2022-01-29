import treelite
import treelite_runtime

model = treelite.Model.load('model.txt', model_format='lightgbm')

# Operating system of the target machine
platform = 'unix'
# C compiler to use to compile prediction code on the target machine
toolchain = 'clang'
# Save the source package as a zip archive named mymodel.zip
# Later, we'll use this package to produce the library mymodel.so.
model.export_srcpkg(platform=platform, toolchain=toolchain,
                    pkgpath='./model.zip', libname='model.so',
                    verbose=True)
