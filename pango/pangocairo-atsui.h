/* Pango
 * pangoatsui.h:
 *
 * Copyright (C) 2005 Imendio AB
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __PANGOCAIRO_ATSUI_H__
#define __PANGOCAIRO_ATSUI_H__

#include "pangoatsui-private.h"
#include "pangocairo.h"
#include <cairo-atsui.h>

G_BEGIN_DECLS

#define PANGO_TYPE_CAIRO_ATSUI_FONT_MAP       (pango_cairo_atsui_font_map_get_type ())
#define PANGO_CAIRO_ATSUI_FONT_MAP(object)    (G_TYPE_CHECK_INSTANCE_CAST ((object), PANGO_TYPE_CAIRO_ATSUI_FONT_MAP, PangoCairoATSUIFontMap))
#define PANGO_IS_CAIRO_ATSUI_FONT_MAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), PANGO_TYPE_CAIRO_ATSUI_FONT_MAP))

typedef struct _PangoCairoATSUIFontMap PangoCairoATSUIFontMap;

struct _PangoCairoATSUIFontMap
{
  PangoATSUIFontMap parent_instance;

  PangoRenderer *renderer;

  gdouble dpi;
};

GType pango_cairo_atsui_font_map_get_type (void);

PangoATSUIFont *
_pango_cairo_atsui_font_new (PangoCairoATSUIFontMap     *cafontmap,
			     PangoContext               *context,
			     const char                 *postscript_name,
			     const PangoFontDescription *desc);

G_END_DECLS

#endif /* __PANGOCAIRO_ATSUI_H__ */

