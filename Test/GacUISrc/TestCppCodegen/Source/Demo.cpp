/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: Host.sln

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoIncludes.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		::vl::reflection::description::AsyncCoroutine::CreateAndRun(LAMBDA(::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___(__vwsnthis_0)));
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
	}

	::vl::Ptr<::vl::reflection::description::ICoroutine> __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___::operator()(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsn_co_impl_) const
	{
		return ::vl::Ptr<::vl::reflection::description::ICoroutine>(new ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine(__vwsn_co_impl_, __vwsnthis_0));
	}

	//-------------------------------------------------------------------

	__vwsnf3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__::__vwsnf3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__(::demo::ModalWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
	}

	void __vwsnf3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0)->__vwsn_precompile_0)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0)->__vwsn_precompile_0)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine(::vl::reflection::description::AsyncCoroutine::IImpl* __vwsnctor___vwsn_co_impl_, ::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsn_co_impl_(__vwsnctor___vwsn_co_impl_)
		, __vwsnthis_0(__vwsnctorthis_0)
	{
		this->__vwsn_co0_window = static_cast<::demo::ModalWindow*>(nullptr);
		this->__vwsn_co_state_ = 0;
		this->__vwsn_prop_Failure = ::vl::Ptr<::vl::reflection::description::IValueException>();
		this->__vwsn_prop_Status = ::vl::reflection::description::CoroutineStatus::Waiting;
	}

	::vl::Ptr<::vl::reflection::description::IValueException> __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::GetFailure()
	{
		return __vwsn_prop_Failure;
	}
	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::SetFailure(::vl::Ptr<::vl::reflection::description::IValueException> __vwsn_value_)
	{
		(__vwsn_prop_Failure = __vwsn_value_);
	}

	::vl::reflection::description::CoroutineStatus __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::GetStatus()
	{
		return __vwsn_prop_Status;
	}
	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::SetStatus(::vl::reflection::description::CoroutineStatus __vwsn_value_)
	{
		(__vwsn_prop_Status = __vwsn_value_);
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance_____vl_reflection_description_ICoroutine::Resume(bool __vwsn_raise_exception_, ::vl::Ptr<::vl::reflection::description::CoroutineResult> __vwsn_co_result_)
	{
		if ((::vl::__vwsn::This(this)->GetStatus() != ::vl::reflection::description::CoroutineStatus::Waiting))
		{
			throw ::vl::Exception(::vl::WString(L"Resume should be called only when the coroutine is in the waiting status.", false));
		}
		::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Executing);
		try
		{
			{
				while (true)
				{
					if ((__vwsn_co_state_ == 0))
					{
						(__vwsn_co0_window = new ::demo::ModalWindow());
						::vl::__vwsn::This(__vwsn_co0_window)->MoveToScreenCenter();
						(__vwsn_co_state_ = 2);
						continue;
					}
					if ((__vwsn_co_state_ == 1))
					{
						if (static_cast<bool>(__vwsn_co_result_))
						{
							if (static_cast<bool>(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure()))
							{
								throw ::vl::Exception(::vl::__vwsn::This(::vl::__vwsn::This(__vwsn_co_result_.Obj())->GetFailure().Obj())->GetMessage());
							}
						}
						::vl::__vwsn::This(__vwsn_co0_window)->Dispose(true);
						::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
						return;
					}
					if ((__vwsn_co_state_ == 2))
					{
						::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Waiting);
						(__vwsn_co_state_ = 1);
						{
							::vl::reflection::description::AsyncCoroutine::AwaitAndRead(__vwsn_co_impl_, ::vl::__vwsn::This(__vwsn_co0_window)->ShowModalAsync(static_cast<::vl::presentation::controls::GuiWindow*>(::vl::__vwsn::This(__vwsnthis_0)->self)));
						}
						return;
					}
				}
			}
		}
		catch(const ::vl::Exception& __vwsne_0)
		{
			auto __vwsn_co_ex_ = ::vl::reflection::description::IValueException::Create(__vwsne_0.Message());
			{
				::vl::__vwsn::This(this)->SetFailure(__vwsn_co_ex_);
				::vl::__vwsn::This(this)->SetStatus(::vl::reflection::description::CoroutineStatus::Stopped);
				if (__vwsn_raise_exception_)
				{
					throw;
				}
			}
		}
	}

	//-------------------------------------------------------------------

	__vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(::demo::ModalWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
		this->__vwsn_bind_listeners_ = ::vl::reflection::description::IValueDictionary::Create();
	}

	void __vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::WString(L"ModalWindow", false);
		{
			auto __vwsn_for_enumerable_ = ::vl::Ptr<::vl::reflection::description::IValueEnumerable>(::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->GetValues());
			auto __vwsn_for_enumerator_ = ::vl::__vwsn::This(__vwsn_for_enumerable_.Obj())->CreateEnumerator();
			while (::vl::__vwsn::This(__vwsn_for_enumerator_.Obj())->Next())
			{
				auto __vwsn_bind_callback_ = ::vl::__vwsn::Unbox<::vl::reflection::description::Value>(::vl::__vwsn::This(__vwsn_for_enumerator_.Obj())->GetCurrent());
				{
					::vl::__vwsn::Unbox<::vl::Func<void(const ::vl::reflection::description::Value&)>>(__vwsn_bind_callback_)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
				}
			}
		}
	}

	void __vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_initialize_()
	{
	}

	::vl::Ptr<::vl::reflection::description::IValueListener> __vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Subscribe(const ::vl::Func<void(const ::vl::reflection::description::Value&)>& __vwsn_bind_callback_)
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			::vl::__vwsn::This(this)->__vwsn_bind_initialize_();
		}
		auto __vwsn_subscription_ = this;
		auto __vwsn_listener_shared_ = ::vl::Ptr<::vl::reflection::description::IValueListener>(new ::vl_workflow_global::__vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener(__vwsn_bind_listeners_, __vwsn_subscription_, this, __vwsnthis_0));
		::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->Set(::vl::__vwsn::Box(__vwsn_listener_shared_), ::vl::__vwsn::Box(__vwsn_bind_callback_));
		return __vwsn_listener_shared_;
	}

	bool __vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Update()
	{
		if ((! __vwsn_bind_closed_))
		{
			::vl::__vwsn::This(this)->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->Clear();
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::__vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener(::vl::Ptr<::vl::reflection::description::IValueDictionary> __vwsnctor___vwsn_bind_listeners_, ::vl::reflection::description::IValueSubscription* __vwsnctor___vwsn_subscription_, ::vl::reflection::description::IValueSubscription* __vwsnctorthis_0, ::demo::ModalWindowConstructor* __vwsnctorthis_1)
		:__vwsn_bind_listeners_(__vwsnctor___vwsn_bind_listeners_)
		, __vwsn_subscription_(__vwsnctor___vwsn_subscription_)
		, __vwsnthis_0(__vwsnctorthis_0)
		, __vwsnthis_1(__vwsnctorthis_1)
	{
	}

	::vl::reflection::description::IValueSubscription* __vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::GetSubscription()
	{
		return ::vl::__vwsn::This(this)->__vwsn_subscription_;
	}

	bool __vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::GetStopped()
	{
		return (! ::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->GetKeys().Obj())->Contains(::vl::__vwsn::Box(this)));
	}

	bool __vwsnc3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::StopListening()
	{
		if (::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->GetKeys().Obj())->Contains(::vl::__vwsn::Box(this)))
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->Remove(::vl::__vwsn::Box(this));
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_)
	{
		(::vl::__vwsn::This(this)->self = __vwsn_this_);
		(::vl::__vwsn::This(this)->__vwsn_precompile_2 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->self)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->self)->SetText(::vl::WString(L"MainWindow", false));
		}
		(::vl::__vwsn::This(this)->dialog = new ::vl::presentation::controls::GuiMessageDialog());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->dialog)->SetText(::vl::WString(L"You are closing the window!", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(::vl::__vwsn::This(this)->dialog));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_0 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_1 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 40; __vwsn_temp__.top = 40; __vwsn_temp__.right = 40; __vwsn_temp__.bottom = 40; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetAlt(::vl::WString(L"C", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetText(::vl::WString(L"Click me and show a modal window!", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->self)->AddChild(static_cast<::vl::presentation::controls::GuiControl*>(::vl::__vwsn::This(this)->__vwsn_precompile_0));
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->Clicked, __vwsn_event_handler_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
	{
	}

/***********************************************************************
Class (::demo::ModalWindowConstructor)
***********************************************************************/

	void ModalWindowConstructor::__vwsn_initialize_instance_(::demo::ModalWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_)
	{
		(::vl::__vwsn::This(this)->__vwsn_precompile_0 = __vwsn_this_);
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetSizeBox(::vl::__vwsn::Parse<bool>(::vl::WString(L"false", false)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 320; __vwsn_temp__.y = 240; return __vwsn_temp__; }());
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_1 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetFont([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString(L"Segoe UI", false); __vwsn_temp__.size = 40; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetText(::vl::WString(L"Modal Window!", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::controls::GuiControl*>(::vl::__vwsn::This(this)->__vwsn_precompile_1));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::__vwsn::This(__vwsn_this_)->AddSubscription(::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc2_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(this)));
			::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->Subscribe(LAMBDA(::vl_workflow_global::__vwsnf3_Demo_demo_ModalWindowConstructor___vwsn_initialize_instance__(this)));
			::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->Update();
		}
	}

	ModalWindowConstructor::ModalWindowConstructor()
	{
	}

/***********************************************************************
Class (::demo::ModalWindow)
***********************************************************************/

	ModalWindow::ModalWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::ModalWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->__vwsn_initialize_instance_(this, ::vl::__vwsn::Ensure(static_cast<::vl::presentation::GuiResourcePathResolver*>(__vwsn_resolver_.Obj())));
	}

	ModalWindow::~ModalWindow()
	{
		::vl::__vwsn::This(this)->ClearSubscriptions();
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::ModalWindow)
			IMPL_CPP_TYPE_INFO(demo::ModalWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_dtor_, NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" _ L"__vwsn_resolver_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(dialog)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::ModalWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::ModalWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::ModalWindow)

			BEGIN_CLASS_MEMBER(::demo::ModalWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::ModalWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" _ L"__vwsn_resolver_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
			END_CLASS_MEMBER(::demo::ModalWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::ModalWindow)
					ADD_TYPE_INFO(::demo::ModalWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
