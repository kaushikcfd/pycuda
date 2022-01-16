#ifdef _WIN32
#include <windows.h>
#endif
#include <cuda.hpp>
#include <cuda_graph.hpp>

#include "tools.hpp"
#include "wrap_helpers.hpp"




using namespace pycuda;
using namespace pycuda::cuda_graph;
using boost::shared_ptr;


void pycuda_expose_cuda_graph()
{
  using py::arg;

  {
    typedef CUDAGraph cl;
    py::class_<cl, boost::noncopyable>
      ("Graph", py::init<py::optional<unsigned int> >(py::arg("flags")))
      .DEF_SIMPLE_METHOD(dummy_call);
  }

}

// vim: foldmethod=marker
