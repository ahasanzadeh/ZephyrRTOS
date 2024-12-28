/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_USB_BC12_H
#define Z_INCLUDE_SYSCALLS_USB_BC12_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_bc12_set_role(const struct device * dev, enum bc12_role role);

__pinned_func
static inline int bc12_set_role(const struct device * dev, enum bc12_role role)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; enum bc12_role val; } parm1 = { .val = role };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BC12_SET_ROLE);
	}
#endif
	compiler_barrier();
	return z_impl_bc12_set_role(dev, role);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bc12_set_role(dev, role) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BC12_SET_ROLE, bc12_set_role, dev, role); 	syscall__retval = bc12_set_role(dev, role); 	sys_port_trace_syscall_exit(K_SYSCALL_BC12_SET_ROLE, bc12_set_role, dev, role, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_bc12_set_result_cb(const struct device * dev, bc12_callback_t cb, void * user_data);

__pinned_func
static inline int bc12_set_result_cb(const struct device * dev, bc12_callback_t cb, void * user_data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; bc12_callback_t val; } parm1 = { .val = cb };
		union { uintptr_t x; void * val; } parm2 = { .val = user_data };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_BC12_SET_RESULT_CB);
	}
#endif
	compiler_barrier();
	return z_impl_bc12_set_result_cb(dev, cb, user_data);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define bc12_set_result_cb(dev, cb, user_data) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BC12_SET_RESULT_CB, bc12_set_result_cb, dev, cb, user_data); 	syscall__retval = bc12_set_result_cb(dev, cb, user_data); 	sys_port_trace_syscall_exit(K_SYSCALL_BC12_SET_RESULT_CB, bc12_set_result_cb, dev, cb, user_data, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */