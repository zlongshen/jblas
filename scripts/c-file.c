/*
 * Wrapper files for LAPACK
 *
 * 
 * automatically generated by fortranwrapper
 */

#include "<%= filename %>.h"
#include <stdio.h>
#include <stdlib.h>

<% for r in routines %>
<%= C.wrapper_for r -%>
<% end%>

