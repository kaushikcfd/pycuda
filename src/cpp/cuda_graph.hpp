#ifndef _AFJDFJSDFSD_PYCUDA_HEADER_SEEN_CUDA_GRAPH_HPP
#define _AFJDFJSDFSD_PYCUDA_HEADER_SEEN_CUDA_GRAPH_HPP


#include <cuda.hpp>


namespace pycuda { namespace cuda_graph {

  class CUDAGraph : public context_dependent
  {
    protected:
      CUgraph m_graph;

    public:
      CUDAGraph(CUgraph graph) : m_graph(graph) {}

      CUDAGraph(unsigned int flags=0) {
        CUDAPP_CALL_GUARDED(cuGraphCreate, (&m_graph, flags));
      }

      ~CUDAGraph()
      {
        // TODO: Destructor
      }

      CUDAGraph handle() const {
          return m_graph;
      }

      void dummy_call() const {
        std::cout << "Hello from CUDAGraph.random_call, I'm " << this << std::endl;
      }

  };

} }




#endif

// vim: foldmethod=marker
