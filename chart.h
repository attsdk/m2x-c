#ifndef M2X_CHART_H
#define M2X_CHART_H

#include "response.h"

#if defined(__cplusplus)
extern "C" {
#endif

m2x_response m2x_chart_list(m2x_context *ctx, const char *query);
m2x_response m2x_chart_create(m2x_context *ctx, const char *data);
m2x_response m2x_chart_view(m2x_context *ctx, const char *chart_id);
m2x_response m2x_chart_update(m2x_context *ctx, const char *chart_id, const char *data);
m2x_response m2x_chart_delete(m2x_context *ctx, const char *chart_id);

#if defined(__cplusplus)
}  /* extern "C" { */
#endif

#endif  /* M2X_CHART_H */
