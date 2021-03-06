__all__ = []

# Import dependency decorator modules
import statiskit.linalg._linalg
import statiskit.stl._stl
import statiskit.core._core

# Import Boost.Python module
import __pgm

# Resolve scopes
__pgm.statiskit.MixtureUndirectedGraphDistribution.Computation = __pgm.statiskit._mixture_undirected_graph_distribution.Computation
__pgm.statiskit.MixtureUndirectedGraphDistribution.VariationalComputation = __pgm.statiskit._mixture_undirected_graph_distribution.VariationalComputation

# Group template specializations
__pgm.statiskit._EdgePropertyGraph = (__pgm.statiskit._EdgePropertyGraph_ba1d12947e8b51849790a5ffe68a94d2)
__pgm.statiskit._PolymorphicCopy = (__pgm.statiskit._PolymorphicCopy_4db0ff3e7f0a577296e63ea447c1b952, __pgm.statiskit._PolymorphicCopy_a171fcfcd46759fc9450f58d5118f67d, __pgm.statiskit._PolymorphicCopy_acd10274bef3532e8944df64bfea0a51)
__pgm.statiskit._PropertyGraph = (__pgm.statiskit._PropertyGraph_e3ab7b3cfda55b9f9e870d32bf461587)
__pgm.statiskit._VertexPropertyGraph = (__pgm.statiskit._VertexPropertyGraph_eb75867a4c1d5be4aca09cab824ff383)

# Define aliases
__pgm.statiskit.Neighbours = statiskit.stl.__stl.std._UnorderedSet_d48105936d4f5d09a78d2aa9f878fdb8
