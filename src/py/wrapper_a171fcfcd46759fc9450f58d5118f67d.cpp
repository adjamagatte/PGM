#include "_pgm.h"



namespace autowig
{
    class Wrap_a171fcfcd46759fc9450f58d5118f67d : public ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > >  simulate() const
            {
                 ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > (result);
            }
                        
            virtual double  ldf(class ::statiskit::UndirectedGraph const * param_0) const
            { return this->get_override("ldf")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d const volatile * get_pointer<autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d const volatile >(autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a171fcfcd46759fc9450f58d5118f67d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d, autowig::Held< autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d >::Type, boost::python::bases< struct ::statiskit::UndirectedGraphDistribution >, boost::noncopyable > class_a171fcfcd46759fc9450f58d5118f67d("_PolymorphicCopy_a171fcfcd46759fc9450f58d5118f67d", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a171fcfcd46759fc9450f58d5118f67d >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type, autowig::Held< struct ::statiskit::UndirectedGraphDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > > > >();
    }

}