#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UndirectedGraph const volatile * get_pointer<class ::statiskit::UndirectedGraph const volatile >(class ::statiskit::UndirectedGraph const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_753973f9f63857629d8785a628fc20ad()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::UndirectedGraph::*method_pointer_c2cb6b29b0415f5fbdf83d329d82106e)() const = &::statiskit::UndirectedGraph::get_nb_vertices;
    ::statiskit::Index  (::statiskit::UndirectedGraph::*method_pointer_e0c6f14b6b1556d6ab7cce9b985519c9)() const = &::statiskit::UndirectedGraph::get_nb_edges;
    bool  (::statiskit::UndirectedGraph::*method_pointer_1de8b06d57035ccd8056e5e791896a8c)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::UndirectedGraph::has_edge;
    void  (::statiskit::UndirectedGraph::*method_pointer_02dfceb80d63535e9aa29a56b268d7d3)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::UndirectedGraph::add_edge;
    void  (::statiskit::UndirectedGraph::*method_pointer_803f21e63b0c5067a8dca7c7c82874f2)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::UndirectedGraph::remove_edge;
    ::statiskit::Index  (::statiskit::UndirectedGraph::*method_pointer_fc0f35d4894f5160b9d72a762c38087e)(::statiskit::Index const &) const = &::statiskit::UndirectedGraph::degree;
    ::statiskit::Neighbours const & (::statiskit::UndirectedGraph::*method_pointer_90e8afd491535d70a076b9dbf59b3bdd)(::statiskit::Index const &) const = &::statiskit::UndirectedGraph::neighbours;
    bool  (::statiskit::UndirectedGraph::*method_pointer_c4c443d882fd5f1689eb9a7a42199539)(::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::UndirectedGraph::are_connected;
    bool  (::statiskit::UndirectedGraph::*method_pointer_ddca01390b695707a722f87e07dd3800)(::statiskit::Indices const &, ::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::UndirectedGraph::are_separated;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::UndirectedGraph::*method_pointer_cd5ef61697fc5c6ea7388329e148e849)() const = &::statiskit::UndirectedGraph::maximum_cardinality_search;
    bool  (::statiskit::UndirectedGraph::*method_pointer_cd506cb66ab85ef0839d81e8dcec8f3c)() const = &::statiskit::UndirectedGraph::is_chordal;
    class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >  (::statiskit::UndirectedGraph::*method_pointer_72194093bfa0596885f2d44f7a10e5af)() const = &::statiskit::UndirectedGraph::junction_tree;
    boost::python::class_< class ::statiskit::UndirectedGraph, autowig::Held< class ::statiskit::UndirectedGraph >::Type > class_753973f9f63857629d8785a628fc20ad("UndirectedGraph", "", boost::python::no_init);
    class_753973f9f63857629d8785a628fc20ad.def(boost::python::init< ::statiskit::Index const & >(""));
    class_753973f9f63857629d8785a628fc20ad.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_753973f9f63857629d8785a628fc20ad.def(boost::python::init< class ::statiskit::UndirectedGraph const & >(""));
    class_753973f9f63857629d8785a628fc20ad.def("get_nb_vertices", method_pointer_c2cb6b29b0415f5fbdf83d329d82106e, "");
    class_753973f9f63857629d8785a628fc20ad.def("get_nb_edges", method_pointer_e0c6f14b6b1556d6ab7cce9b985519c9, "");
    class_753973f9f63857629d8785a628fc20ad.def("has_edge", method_pointer_1de8b06d57035ccd8056e5e791896a8c, "");
    class_753973f9f63857629d8785a628fc20ad.def("add_edge", method_pointer_02dfceb80d63535e9aa29a56b268d7d3, "");
    class_753973f9f63857629d8785a628fc20ad.def("remove_edge", method_pointer_803f21e63b0c5067a8dca7c7c82874f2, "");
    class_753973f9f63857629d8785a628fc20ad.def("degree", method_pointer_fc0f35d4894f5160b9d72a762c38087e, "");
    class_753973f9f63857629d8785a628fc20ad.def("neighbours", method_pointer_90e8afd491535d70a076b9dbf59b3bdd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_753973f9f63857629d8785a628fc20ad.def("are_connected", method_pointer_c4c443d882fd5f1689eb9a7a42199539, "");
    class_753973f9f63857629d8785a628fc20ad.def("are_separated", method_pointer_ddca01390b695707a722f87e07dd3800, "");
    class_753973f9f63857629d8785a628fc20ad.def("maximum_cardinality_search", method_pointer_cd5ef61697fc5c6ea7388329e148e849, "");
    class_753973f9f63857629d8785a628fc20ad.def("is_chordal", method_pointer_cd506cb66ab85ef0839d81e8dcec8f3c, "");
    class_753973f9f63857629d8785a628fc20ad.def("junction_tree", method_pointer_72194093bfa0596885f2d44f7a10e5af, "");

}