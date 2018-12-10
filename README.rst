ITKPhaseSymmetry
================

.. |CircleCI| image:: https://circleci.com/gh/KitwareMedical/ITKPhaseSymmetry.svg?style=shield
    :target: https://circleci.com/gh/KitwareMedical/ITKPhaseSymmetry

.. |TravisCI| image:: https://travis-ci.org/KitwareMedical/ITKPhaseSymmetry.svg?branch=master
    :target: https://travis-ci.org/KitwareMedical/ITKPhaseSymmetry

.. |AppVeyor| image:: https://img.shields.io/appveyor/ci/itkrobot/itkphasesymmetry.svg
    :target: https://ci.appveyor.com/project/thewtex/itkphasesymmetry

=========== =========== ===========
   Linux      macOS       Windows
=========== =========== ===========
|CircleCI|  |TravisCI|  |AppVeyor|
=========== =========== ===========


Overview
--------

This is a module for the `Insight Toolkit (ITK) <http://itk.org>`_ that
provides multi-scale steerable filters for computing phase symmetry (PS).

Multi-scale steerable phase-symmetry filters are applied in the image Fourier
transform domain, and have been shown to be a useful pre-processing measure
for performing image registration and segmentation.

For more information, see the `Insight Journal article <http://hdl.handle.net/10380/3330>`_::

  Hatt C.
  Multi-scale Steerable Phase-Symmetry Filters for ITK
  The Insight Journal. July-December. 2011.
  http://hdl.handle.net/10380/3330
  http://www.insight-journal.org/browse/publication/846


Installation
------------

Install the binary Python package with::

  python -m pip install --upgrade pip
  python -m pip install itk-phasesymmetry

License
-------

This software is distributed under the Apache 2.0 license. Please see
the *LICENSE* file for details.
