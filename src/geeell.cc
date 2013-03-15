// -*- mode: c++ -*-
#include "geeell.h"
#include "convert.h"

#include <vector>

using namespace v8;
using namespace convert;

void init_gl(Handle<Object> gl) {
  init_gl_byhand (gl);

  GL_CONST(GL_FALSE);
  GL_CONST(GL_TRUE);
  GL_CONST(GL_BYTE);
  GL_CONST(GL_UNSIGNED_BYTE);
  GL_CONST(GL_SHORT);
  GL_CONST(GL_UNSIGNED_SHORT);
  GL_CONST(GL_INT);
  GL_CONST(GL_UNSIGNED_INT);
  GL_CONST(GL_FLOAT);
  GL_CONST(GL_2_BYTES);
  GL_CONST(GL_3_BYTES);
  GL_CONST(GL_4_BYTES);
  GL_CONST(GL_DOUBLE);
  GL_CONST(GL_POINTS);
  GL_CONST(GL_LINES);
  GL_CONST(GL_LINE_LOOP);
  GL_CONST(GL_LINE_STRIP);
  GL_CONST(GL_TRIANGLES);
  GL_CONST(GL_TRIANGLE_STRIP);
  GL_CONST(GL_TRIANGLE_FAN);
  GL_CONST(GL_QUADS);
  GL_CONST(GL_QUAD_STRIP);
  GL_CONST(GL_POLYGON);
  GL_CONST(GL_VERTEX_ARRAY);
  GL_CONST(GL_NORMAL_ARRAY);
  GL_CONST(GL_COLOR_ARRAY);
  GL_CONST(GL_INDEX_ARRAY);
  GL_CONST(GL_TEXTURE_COORD_ARRAY);
  GL_CONST(GL_EDGE_FLAG_ARRAY);
  GL_CONST(GL_VERTEX_ARRAY_SIZE);
  GL_CONST(GL_VERTEX_ARRAY_TYPE);
  GL_CONST(GL_VERTEX_ARRAY_STRIDE);
  GL_CONST(GL_NORMAL_ARRAY_TYPE);
  GL_CONST(GL_NORMAL_ARRAY_STRIDE);
  GL_CONST(GL_COLOR_ARRAY_SIZE);
  GL_CONST(GL_COLOR_ARRAY_TYPE);
  GL_CONST(GL_COLOR_ARRAY_STRIDE);
  GL_CONST(GL_INDEX_ARRAY_TYPE);
  GL_CONST(GL_INDEX_ARRAY_STRIDE);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_SIZE);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_TYPE);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_STRIDE);
  GL_CONST(GL_EDGE_FLAG_ARRAY_STRIDE);
  GL_CONST(GL_VERTEX_ARRAY_POINTER);
  GL_CONST(GL_NORMAL_ARRAY_POINTER);
  GL_CONST(GL_COLOR_ARRAY_POINTER);
  GL_CONST(GL_INDEX_ARRAY_POINTER);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_POINTER);
  GL_CONST(GL_EDGE_FLAG_ARRAY_POINTER);
  GL_CONST(GL_V2F);
  GL_CONST(GL_V3F);
  GL_CONST(GL_C4UB_V2F);
  GL_CONST(GL_C4UB_V3F);
  GL_CONST(GL_C3F_V3F);
  GL_CONST(GL_N3F_V3F);
  GL_CONST(GL_C4F_N3F_V3F);
  GL_CONST(GL_T2F_V3F);
  GL_CONST(GL_T4F_V4F);
  GL_CONST(GL_T2F_C4UB_V3F);
  GL_CONST(GL_T2F_C3F_V3F);
  GL_CONST(GL_T2F_N3F_V3F);
  GL_CONST(GL_T2F_C4F_N3F_V3F);
  GL_CONST(GL_T4F_C4F_N3F_V4F);
  GL_CONST(GL_MATRIX_MODE);
  GL_CONST(GL_MODELVIEW);
  GL_CONST(GL_PROJECTION);
  GL_CONST(GL_TEXTURE);
  GL_CONST(GL_POINT_SMOOTH);
  GL_CONST(GL_POINT_SIZE);
  GL_CONST(GL_POINT_SIZE_GRANULARITY);
  GL_CONST(GL_POINT_SIZE_RANGE);
  GL_CONST(GL_LINE_SMOOTH);
  GL_CONST(GL_LINE_STIPPLE);
  GL_CONST(GL_LINE_STIPPLE_PATTERN);
  GL_CONST(GL_LINE_STIPPLE_REPEAT);
  GL_CONST(GL_LINE_WIDTH);
  GL_CONST(GL_LINE_WIDTH_GRANULARITY);
  GL_CONST(GL_LINE_WIDTH_RANGE);
  GL_CONST(GL_POINT);
  GL_CONST(GL_LINE);
  GL_CONST(GL_FILL);
  GL_CONST(GL_CW);
  GL_CONST(GL_CCW);
  GL_CONST(GL_FRONT);
  GL_CONST(GL_BACK);
  GL_CONST(GL_POLYGON_MODE);
  GL_CONST(GL_POLYGON_SMOOTH);
  GL_CONST(GL_POLYGON_STIPPLE);
  GL_CONST(GL_EDGE_FLAG);
  GL_CONST(GL_CULL_FACE);
  GL_CONST(GL_CULL_FACE_MODE);
  GL_CONST(GL_FRONT_FACE);
  GL_CONST(GL_POLYGON_OFFSET_FACTOR);
  GL_CONST(GL_POLYGON_OFFSET_UNITS);
  GL_CONST(GL_POLYGON_OFFSET_POINT);
  GL_CONST(GL_POLYGON_OFFSET_LINE);
  GL_CONST(GL_POLYGON_OFFSET_FILL);
  GL_CONST(GL_COMPILE);
  GL_CONST(GL_COMPILE_AND_EXECUTE);
  GL_CONST(GL_LIST_BASE);
  GL_CONST(GL_LIST_INDEX);
  GL_CONST(GL_LIST_MODE);
  GL_CONST(GL_NEVER);
  GL_CONST(GL_LESS);
  GL_CONST(GL_EQUAL);
  GL_CONST(GL_LEQUAL);
  GL_CONST(GL_GREATER);
  GL_CONST(GL_NOTEQUAL);
  GL_CONST(GL_GEQUAL);
  GL_CONST(GL_ALWAYS);
  GL_CONST(GL_DEPTH_TEST);
  GL_CONST(GL_DEPTH_BITS);
  GL_CONST(GL_DEPTH_CLEAR_VALUE);
  GL_CONST(GL_DEPTH_FUNC);
  GL_CONST(GL_DEPTH_RANGE);
  GL_CONST(GL_DEPTH_WRITEMASK);
  GL_CONST(GL_DEPTH_COMPONENT);
  GL_CONST(GL_LIGHTING);
  GL_CONST(GL_LIGHT0);
  GL_CONST(GL_LIGHT1);
  GL_CONST(GL_LIGHT2);
  GL_CONST(GL_LIGHT3);
  GL_CONST(GL_LIGHT4);
  GL_CONST(GL_LIGHT5);
  GL_CONST(GL_LIGHT6);
  GL_CONST(GL_LIGHT7);
  GL_CONST(GL_SPOT_EXPONENT);
  GL_CONST(GL_SPOT_CUTOFF);
  GL_CONST(GL_CONSTANT_ATTENUATION);
  GL_CONST(GL_LINEAR_ATTENUATION);
  GL_CONST(GL_QUADRATIC_ATTENUATION);
  GL_CONST(GL_AMBIENT);
  GL_CONST(GL_DIFFUSE);
  GL_CONST(GL_SPECULAR);
  GL_CONST(GL_SHININESS);
  GL_CONST(GL_EMISSION);
  GL_CONST(GL_POSITION);
  GL_CONST(GL_SPOT_DIRECTION);
  GL_CONST(GL_AMBIENT_AND_DIFFUSE);
  GL_CONST(GL_COLOR_INDEXES);
  GL_CONST(GL_LIGHT_MODEL_TWO_SIDE);
  GL_CONST(GL_LIGHT_MODEL_LOCAL_VIEWER);
  GL_CONST(GL_LIGHT_MODEL_AMBIENT);
  GL_CONST(GL_FRONT_AND_BACK);
  GL_CONST(GL_SHADE_MODEL);
  GL_CONST(GL_FLAT);
  GL_CONST(GL_SMOOTH);
  GL_CONST(GL_COLOR_MATERIAL);
  GL_CONST(GL_COLOR_MATERIAL_FACE);
  GL_CONST(GL_COLOR_MATERIAL_PARAMETER);
  GL_CONST(GL_NORMALIZE);
  GL_CONST(GL_CLIP_PLANE0);
  GL_CONST(GL_CLIP_PLANE1);
  GL_CONST(GL_CLIP_PLANE2);
  GL_CONST(GL_CLIP_PLANE3);
  GL_CONST(GL_CLIP_PLANE4);
  GL_CONST(GL_CLIP_PLANE5);
  GL_CONST(GL_ACCUM_RED_BITS);
  GL_CONST(GL_ACCUM_GREEN_BITS);
  GL_CONST(GL_ACCUM_BLUE_BITS);
  GL_CONST(GL_ACCUM_ALPHA_BITS);
  GL_CONST(GL_ACCUM_CLEAR_VALUE);
  GL_CONST(GL_ACCUM);
  GL_CONST(GL_ADD);
  GL_CONST(GL_LOAD);
  GL_CONST(GL_MULT);
  GL_CONST(GL_RETURN);
  GL_CONST(GL_ALPHA_TEST);
  GL_CONST(GL_ALPHA_TEST_REF);
  GL_CONST(GL_ALPHA_TEST_FUNC);
  GL_CONST(GL_BLEND);
  GL_CONST(GL_BLEND_SRC);
  GL_CONST(GL_BLEND_DST);
  GL_CONST(GL_ZERO);
  GL_CONST(GL_ONE);
  GL_CONST(GL_SRC_COLOR);
  GL_CONST(GL_ONE_MINUS_SRC_COLOR);
  GL_CONST(GL_SRC_ALPHA);
  GL_CONST(GL_ONE_MINUS_SRC_ALPHA);
  GL_CONST(GL_DST_ALPHA);
  GL_CONST(GL_ONE_MINUS_DST_ALPHA);
  GL_CONST(GL_DST_COLOR);
  GL_CONST(GL_ONE_MINUS_DST_COLOR);
  GL_CONST(GL_SRC_ALPHA_SATURATE);
  GL_CONST(GL_FEEDBACK);
  GL_CONST(GL_RENDER);
  GL_CONST(GL_SELECT);
  GL_CONST(GL_2D);
  GL_CONST(GL_3D);
  GL_CONST(GL_3D_COLOR);
  GL_CONST(GL_3D_COLOR_TEXTURE);
  GL_CONST(GL_4D_COLOR_TEXTURE);
  GL_CONST(GL_POINT_TOKEN);
  GL_CONST(GL_LINE_TOKEN);
  GL_CONST(GL_LINE_RESET_TOKEN);
  GL_CONST(GL_POLYGON_TOKEN);
  GL_CONST(GL_BITMAP_TOKEN);
  GL_CONST(GL_DRAW_PIXEL_TOKEN);
  GL_CONST(GL_COPY_PIXEL_TOKEN);
  GL_CONST(GL_PASS_THROUGH_TOKEN);
  GL_CONST(GL_FEEDBACK_BUFFER_POINTER);
  GL_CONST(GL_FEEDBACK_BUFFER_SIZE);
  GL_CONST(GL_FEEDBACK_BUFFER_TYPE);
  GL_CONST(GL_SELECTION_BUFFER_POINTER);
  GL_CONST(GL_SELECTION_BUFFER_SIZE);
  GL_CONST(GL_FOG);
  GL_CONST(GL_FOG_MODE);
  GL_CONST(GL_FOG_DENSITY);
  GL_CONST(GL_FOG_COLOR);
  GL_CONST(GL_FOG_INDEX);
  GL_CONST(GL_FOG_START);
  GL_CONST(GL_FOG_END);
  GL_CONST(GL_LINEAR);
  GL_CONST(GL_EXP);
  GL_CONST(GL_EXP2);
  GL_CONST(GL_LOGIC_OP);
  GL_CONST(GL_INDEX_LOGIC_OP);
  GL_CONST(GL_COLOR_LOGIC_OP);
  GL_CONST(GL_LOGIC_OP_MODE);
  GL_CONST(GL_CLEAR);
  GL_CONST(GL_SET);
  GL_CONST(GL_COPY);
  GL_CONST(GL_COPY_INVERTED);
  GL_CONST(GL_NOOP);
  GL_CONST(GL_INVERT);
  GL_CONST(GL_AND);
  GL_CONST(GL_NAND);
  GL_CONST(GL_OR);
  GL_CONST(GL_NOR);
  GL_CONST(GL_XOR);
  GL_CONST(GL_EQUIV);
  GL_CONST(GL_AND_REVERSE);
  GL_CONST(GL_AND_INVERTED);
  GL_CONST(GL_OR_REVERSE);
  GL_CONST(GL_OR_INVERTED);
  GL_CONST(GL_STENCIL_BITS);
  GL_CONST(GL_STENCIL_TEST);
  GL_CONST(GL_STENCIL_CLEAR_VALUE);
  GL_CONST(GL_STENCIL_FUNC);
  GL_CONST(GL_STENCIL_VALUE_MASK);
  GL_CONST(GL_STENCIL_FAIL);
  GL_CONST(GL_STENCIL_PASS_DEPTH_FAIL);
  GL_CONST(GL_STENCIL_PASS_DEPTH_PASS);
  GL_CONST(GL_STENCIL_REF);
  GL_CONST(GL_STENCIL_WRITEMASK);
  GL_CONST(GL_STENCIL_INDEX);
  GL_CONST(GL_KEEP);
  GL_CONST(GL_REPLACE);
  GL_CONST(GL_INCR);
  GL_CONST(GL_DECR);
  GL_CONST(GL_NONE);
  GL_CONST(GL_LEFT);
  GL_CONST(GL_RIGHT);
  GL_CONST(GL_FRONT_LEFT);
  GL_CONST(GL_FRONT_RIGHT);
  GL_CONST(GL_BACK_LEFT);
  GL_CONST(GL_BACK_RIGHT);
  GL_CONST(GL_AUX0);
  GL_CONST(GL_AUX1);
  GL_CONST(GL_AUX2);
  GL_CONST(GL_AUX3);
  GL_CONST(GL_COLOR_INDEX);
  GL_CONST(GL_RED);
  GL_CONST(GL_GREEN);
  GL_CONST(GL_BLUE);
  GL_CONST(GL_ALPHA);
  GL_CONST(GL_LUMINANCE);
  GL_CONST(GL_LUMINANCE_ALPHA);
  GL_CONST(GL_ALPHA_BITS);
  GL_CONST(GL_RED_BITS);
  GL_CONST(GL_GREEN_BITS);
  GL_CONST(GL_BLUE_BITS);
  GL_CONST(GL_INDEX_BITS);
  GL_CONST(GL_SUBPIXEL_BITS);
  GL_CONST(GL_AUX_BUFFERS);
  GL_CONST(GL_READ_BUFFER);
  GL_CONST(GL_DRAW_BUFFER);
  GL_CONST(GL_DOUBLEBUFFER);
  GL_CONST(GL_STEREO);
  GL_CONST(GL_BITMAP);
  GL_CONST(GL_COLOR);
  GL_CONST(GL_DEPTH);
  GL_CONST(GL_STENCIL);
  GL_CONST(GL_DITHER);
  GL_CONST(GL_RGB);
  GL_CONST(GL_RGBA);
  GL_CONST(GL_MAX_LIST_NESTING);
  GL_CONST(GL_MAX_EVAL_ORDER);
  GL_CONST(GL_MAX_LIGHTS);
  GL_CONST(GL_MAX_CLIP_PLANES);
  GL_CONST(GL_MAX_TEXTURE_SIZE);
  GL_CONST(GL_MAX_PIXEL_MAP_TABLE);
  GL_CONST(GL_MAX_ATTRIB_STACK_DEPTH);
  GL_CONST(GL_MAX_MODELVIEW_STACK_DEPTH);
  GL_CONST(GL_MAX_NAME_STACK_DEPTH);
  GL_CONST(GL_MAX_PROJECTION_STACK_DEPTH);
  GL_CONST(GL_MAX_TEXTURE_STACK_DEPTH);
  GL_CONST(GL_MAX_VIEWPORT_DIMS);
  GL_CONST(GL_MAX_CLIENT_ATTRIB_STACK_DEPTH);
  GL_CONST(GL_ATTRIB_STACK_DEPTH);
  GL_CONST(GL_CLIENT_ATTRIB_STACK_DEPTH);
  GL_CONST(GL_COLOR_CLEAR_VALUE);
  GL_CONST(GL_COLOR_WRITEMASK);
  GL_CONST(GL_CURRENT_INDEX);
  GL_CONST(GL_CURRENT_COLOR);
  GL_CONST(GL_CURRENT_NORMAL);
  GL_CONST(GL_CURRENT_RASTER_COLOR);
  GL_CONST(GL_CURRENT_RASTER_DISTANCE);
  GL_CONST(GL_CURRENT_RASTER_INDEX);
  GL_CONST(GL_CURRENT_RASTER_POSITION);
  GL_CONST(GL_CURRENT_RASTER_TEXTURE_COORDS);
  GL_CONST(GL_CURRENT_RASTER_POSITION_VALID);
  GL_CONST(GL_CURRENT_TEXTURE_COORDS);
  GL_CONST(GL_INDEX_CLEAR_VALUE);
  GL_CONST(GL_INDEX_MODE);
  GL_CONST(GL_INDEX_WRITEMASK);
  GL_CONST(GL_MODELVIEW_MATRIX);
  GL_CONST(GL_MODELVIEW_STACK_DEPTH);
  GL_CONST(GL_NAME_STACK_DEPTH);
  GL_CONST(GL_PROJECTION_MATRIX);
  GL_CONST(GL_PROJECTION_STACK_DEPTH);
  GL_CONST(GL_RENDER_MODE);
  GL_CONST(GL_RGBA_MODE);
  GL_CONST(GL_TEXTURE_MATRIX);
  GL_CONST(GL_TEXTURE_STACK_DEPTH);
  GL_CONST(GL_VIEWPORT);
  GL_CONST(GL_AUTO_NORMAL);
  GL_CONST(GL_MAP1_COLOR_4);
  GL_CONST(GL_MAP1_INDEX);
  GL_CONST(GL_MAP1_NORMAL);
  GL_CONST(GL_MAP1_TEXTURE_COORD_1);
  GL_CONST(GL_MAP1_TEXTURE_COORD_2);
  GL_CONST(GL_MAP1_TEXTURE_COORD_3);
  GL_CONST(GL_MAP1_TEXTURE_COORD_4);
  GL_CONST(GL_MAP1_VERTEX_3);
  GL_CONST(GL_MAP1_VERTEX_4);
  GL_CONST(GL_MAP2_COLOR_4);
  GL_CONST(GL_MAP2_INDEX);
  GL_CONST(GL_MAP2_NORMAL);
  GL_CONST(GL_MAP2_TEXTURE_COORD_1);
  GL_CONST(GL_MAP2_TEXTURE_COORD_2);
  GL_CONST(GL_MAP2_TEXTURE_COORD_3);
  GL_CONST(GL_MAP2_TEXTURE_COORD_4);
  GL_CONST(GL_MAP2_VERTEX_3);
  GL_CONST(GL_MAP2_VERTEX_4);
  GL_CONST(GL_MAP1_GRID_DOMAIN);
  GL_CONST(GL_MAP1_GRID_SEGMENTS);
  GL_CONST(GL_MAP2_GRID_DOMAIN);
  GL_CONST(GL_MAP2_GRID_SEGMENTS);
  GL_CONST(GL_COEFF);
  GL_CONST(GL_ORDER);
  GL_CONST(GL_DOMAIN);
  GL_CONST(GL_PERSPECTIVE_CORRECTION_HINT);
  GL_CONST(GL_POINT_SMOOTH_HINT);
  GL_CONST(GL_LINE_SMOOTH_HINT);
  GL_CONST(GL_POLYGON_SMOOTH_HINT);
  GL_CONST(GL_FOG_HINT);
  GL_CONST(GL_DONT_CARE);
  GL_CONST(GL_FASTEST);
  GL_CONST(GL_NICEST);
  GL_CONST(GL_SCISSOR_BOX);
  GL_CONST(GL_SCISSOR_TEST);
  GL_CONST(GL_MAP_COLOR);
  GL_CONST(GL_MAP_STENCIL);
  GL_CONST(GL_INDEX_SHIFT);
  GL_CONST(GL_INDEX_OFFSET);
  GL_CONST(GL_RED_SCALE);
  GL_CONST(GL_RED_BIAS);
  GL_CONST(GL_GREEN_SCALE);
  GL_CONST(GL_GREEN_BIAS);
  GL_CONST(GL_BLUE_SCALE);
  GL_CONST(GL_BLUE_BIAS);
  GL_CONST(GL_ALPHA_SCALE);
  GL_CONST(GL_ALPHA_BIAS);
  GL_CONST(GL_DEPTH_SCALE);
  GL_CONST(GL_DEPTH_BIAS);
  GL_CONST(GL_PIXEL_MAP_S_TO_S_SIZE);
  GL_CONST(GL_PIXEL_MAP_I_TO_I_SIZE);
  GL_CONST(GL_PIXEL_MAP_I_TO_R_SIZE);
  GL_CONST(GL_PIXEL_MAP_I_TO_G_SIZE);
  GL_CONST(GL_PIXEL_MAP_I_TO_B_SIZE);
  GL_CONST(GL_PIXEL_MAP_I_TO_A_SIZE);
  GL_CONST(GL_PIXEL_MAP_R_TO_R_SIZE);
  GL_CONST(GL_PIXEL_MAP_G_TO_G_SIZE);
  GL_CONST(GL_PIXEL_MAP_B_TO_B_SIZE);
  GL_CONST(GL_PIXEL_MAP_A_TO_A_SIZE);
  GL_CONST(GL_PIXEL_MAP_S_TO_S);
  GL_CONST(GL_PIXEL_MAP_I_TO_I);
  GL_CONST(GL_PIXEL_MAP_I_TO_R);
  GL_CONST(GL_PIXEL_MAP_I_TO_G);
  GL_CONST(GL_PIXEL_MAP_I_TO_B);
  GL_CONST(GL_PIXEL_MAP_I_TO_A);
  GL_CONST(GL_PIXEL_MAP_R_TO_R);
  GL_CONST(GL_PIXEL_MAP_G_TO_G);
  GL_CONST(GL_PIXEL_MAP_B_TO_B);
  GL_CONST(GL_PIXEL_MAP_A_TO_A);
  GL_CONST(GL_PACK_ALIGNMENT);
  GL_CONST(GL_PACK_LSB_FIRST);
  GL_CONST(GL_PACK_ROW_LENGTH);
  GL_CONST(GL_PACK_SKIP_PIXELS);
  GL_CONST(GL_PACK_SKIP_ROWS);
  GL_CONST(GL_PACK_SWAP_BYTES);
  GL_CONST(GL_UNPACK_ALIGNMENT);
  GL_CONST(GL_UNPACK_LSB_FIRST);
  GL_CONST(GL_UNPACK_ROW_LENGTH);
  GL_CONST(GL_UNPACK_SKIP_PIXELS);
  GL_CONST(GL_UNPACK_SKIP_ROWS);
  GL_CONST(GL_UNPACK_SWAP_BYTES);
  GL_CONST(GL_ZOOM_X);
  GL_CONST(GL_ZOOM_Y);
  GL_CONST(GL_TEXTURE_ENV);
  GL_CONST(GL_TEXTURE_ENV_MODE);
  GL_CONST(GL_TEXTURE_1D);
  GL_CONST(GL_TEXTURE_2D);
  GL_CONST(GL_TEXTURE_WRAP_S);
  GL_CONST(GL_TEXTURE_WRAP_T);
  GL_CONST(GL_TEXTURE_MAG_FILTER);
  GL_CONST(GL_TEXTURE_MIN_FILTER);
  GL_CONST(GL_TEXTURE_ENV_COLOR);
  GL_CONST(GL_TEXTURE_GEN_S);
  GL_CONST(GL_TEXTURE_GEN_T);
  GL_CONST(GL_TEXTURE_GEN_R);
  GL_CONST(GL_TEXTURE_GEN_Q);
  GL_CONST(GL_TEXTURE_GEN_MODE);
  GL_CONST(GL_TEXTURE_BORDER_COLOR);
  GL_CONST(GL_TEXTURE_WIDTH);
  GL_CONST(GL_TEXTURE_HEIGHT);
  GL_CONST(GL_TEXTURE_BORDER);
  GL_CONST(GL_TEXTURE_COMPONENTS);
  GL_CONST(GL_TEXTURE_RED_SIZE);
  GL_CONST(GL_TEXTURE_GREEN_SIZE);
  GL_CONST(GL_TEXTURE_BLUE_SIZE);
  GL_CONST(GL_TEXTURE_ALPHA_SIZE);
  GL_CONST(GL_TEXTURE_LUMINANCE_SIZE);
  GL_CONST(GL_TEXTURE_INTENSITY_SIZE);
  GL_CONST(GL_NEAREST_MIPMAP_NEAREST);
  GL_CONST(GL_NEAREST_MIPMAP_LINEAR);
  GL_CONST(GL_LINEAR_MIPMAP_NEAREST);
  GL_CONST(GL_LINEAR_MIPMAP_LINEAR);
  GL_CONST(GL_OBJECT_LINEAR);
  GL_CONST(GL_OBJECT_PLANE);
  GL_CONST(GL_EYE_LINEAR);
  GL_CONST(GL_EYE_PLANE);
  GL_CONST(GL_SPHERE_MAP);
  GL_CONST(GL_DECAL);
  GL_CONST(GL_MODULATE);
  GL_CONST(GL_NEAREST);
  GL_CONST(GL_REPEAT);
  GL_CONST(GL_CLAMP);
  GL_CONST(GL_S);
  GL_CONST(GL_T);
  GL_CONST(GL_R);
  GL_CONST(GL_Q);
  GL_CONST(GL_VENDOR);
  GL_CONST(GL_RENDERER);
  GL_CONST(GL_VERSION);
  GL_CONST(GL_EXTENSIONS);
  GL_CONST(GL_NO_ERROR);
  GL_CONST(GL_INVALID_ENUM);
  GL_CONST(GL_INVALID_VALUE);
  GL_CONST(GL_INVALID_OPERATION);
  GL_CONST(GL_STACK_OVERFLOW);
  GL_CONST(GL_STACK_UNDERFLOW);
  GL_CONST(GL_OUT_OF_MEMORY);
  GL_CONST(GL_CURRENT_BIT);
  GL_CONST(GL_POINT_BIT);
  GL_CONST(GL_LINE_BIT);
  GL_CONST(GL_POLYGON_BIT);
  GL_CONST(GL_POLYGON_STIPPLE_BIT);
  GL_CONST(GL_PIXEL_MODE_BIT);
  GL_CONST(GL_LIGHTING_BIT);
  GL_CONST(GL_FOG_BIT);
  GL_CONST(GL_DEPTH_BUFFER_BIT);
  GL_CONST(GL_ACCUM_BUFFER_BIT);
  GL_CONST(GL_STENCIL_BUFFER_BIT);
  GL_CONST(GL_VIEWPORT_BIT);
  GL_CONST(GL_TRANSFORM_BIT);
  GL_CONST(GL_ENABLE_BIT);
  GL_CONST(GL_COLOR_BUFFER_BIT);
  GL_CONST(GL_HINT_BIT);
  GL_CONST(GL_EVAL_BIT);
  GL_CONST(GL_LIST_BIT);
  GL_CONST(GL_TEXTURE_BIT);
  GL_CONST(GL_SCISSOR_BIT);
  GL_CONST(GL_ALL_ATTRIB_BITS);
  GL_CONST(GL_PROXY_TEXTURE_1D);
  GL_CONST(GL_PROXY_TEXTURE_2D);
  GL_CONST(GL_TEXTURE_PRIORITY);
  GL_CONST(GL_TEXTURE_RESIDENT);
  GL_CONST(GL_TEXTURE_BINDING_1D);
  GL_CONST(GL_TEXTURE_BINDING_2D);
  GL_CONST(GL_TEXTURE_INTERNAL_FORMAT);
  GL_CONST(GL_ALPHA4);
  GL_CONST(GL_ALPHA8);
  GL_CONST(GL_ALPHA12);
  GL_CONST(GL_ALPHA16);
  GL_CONST(GL_LUMINANCE4);
  GL_CONST(GL_LUMINANCE8);
  GL_CONST(GL_LUMINANCE12);
  GL_CONST(GL_LUMINANCE16);
  GL_CONST(GL_LUMINANCE4_ALPHA4);
  GL_CONST(GL_LUMINANCE6_ALPHA2);
  GL_CONST(GL_LUMINANCE8_ALPHA8);
  GL_CONST(GL_LUMINANCE12_ALPHA4);
  GL_CONST(GL_LUMINANCE12_ALPHA12);
  GL_CONST(GL_LUMINANCE16_ALPHA16);
  GL_CONST(GL_INTENSITY);
  GL_CONST(GL_INTENSITY4);
  GL_CONST(GL_INTENSITY8);
  GL_CONST(GL_INTENSITY12);
  GL_CONST(GL_INTENSITY16);
  GL_CONST(GL_R3_G3_B2);
  GL_CONST(GL_RGB4);
  GL_CONST(GL_RGB5);
  GL_CONST(GL_RGB8);
  GL_CONST(GL_RGB10);
  GL_CONST(GL_RGB12);
  GL_CONST(GL_RGB16);
  GL_CONST(GL_RGBA2);
  GL_CONST(GL_RGBA4);
  GL_CONST(GL_RGB5_A1);
  GL_CONST(GL_RGBA8);
  GL_CONST(GL_RGB10_A2);
  GL_CONST(GL_RGBA12);
  GL_CONST(GL_RGBA16);
  GL_CONST(GL_CLIENT_PIXEL_STORE_BIT);
  GL_CONST(GL_CLIENT_VERTEX_ARRAY_BIT);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClearIndex (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glClearIndex (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearIndex"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glClearColor (needs 4)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        GLclampf arg_2 = JSTO<GLclampf> (args[2]);
        GLclampf arg_3 = JSTO<GLclampf> (args[3]);
        
        glClearColor (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearColor"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClear (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glClear (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClear"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexMask (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glIndexMask (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexMask"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glColorMask (needs 4)"));
        
        GLboolean arg_0 = JSTO<GLboolean> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        
        glColorMask (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorMask"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glAlphaFunc (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        
        glAlphaFunc (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAlphaFunc"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendFunc (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendFunc (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFunc"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLogicOp (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glLogicOp (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLogicOp"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCullFace (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glCullFace (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCullFace"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFrontFace (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glFrontFace (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFrontFace"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPointSize (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glPointSize (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointSize"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLineWidth (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glLineWidth (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLineWidth"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glLineStipple (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLushort arg_1 = JSTO<GLushort> (args[1]);
        
        glLineStipple (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLineStipple"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPolygonMode (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glPolygonMode (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPolygonMode"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPolygonOffset (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPolygonOffset (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPolygonOffset"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEdgeFlag (needs 1)"));
        
        GLboolean arg_0 = JSTO<GLboolean> (args[0]);
        
        glEdgeFlag (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEdgeFlag"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glScissor (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glScissor (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glScissor"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetClipPlane (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLdouble ret;
        glGetClipPlane (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetClipPlane"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDrawBuffer (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glDrawBuffer (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawBuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glReadBuffer (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glReadBuffer (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReadBuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEnable (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glEnable (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnable"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDisable (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glDisable (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisable"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsEnabled (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLboolean ret =
        glIsEnabled (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsEnabled"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEnableClientState (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glEnableClientState (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableClientState"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDisableClientState (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glDisableClientState (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableClientState"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetBooleanv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLboolean ret;
        glGetBooleanv (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBooleanv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetDoublev (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLdouble ret;
        glGetDoublev (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetDoublev"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetFloatv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLfloat ret;
        glGetFloatv (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFloatv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetIntegerv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLint ret;
        glGetIntegerv (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetIntegerv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPushAttrib (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glPushAttrib (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPushAttrib"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPushClientAttrib (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glPushClientAttrib (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPushClientAttrib"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glRenderMode (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint ret =
        glRenderMode (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glRenderMode"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glHint (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glHint (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glHint"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClearDepth (needs 1)"));
        
        GLclampd arg_0 = JSTO<GLclampd> (args[0]);
        
        glClearDepth (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearDepth"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDepthFunc (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glDepthFunc (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthFunc"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDepthMask (needs 1)"));
        
        GLboolean arg_0 = JSTO<GLboolean> (args[0]);
        
        glDepthMask (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthMask"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDepthRange (needs 2)"));
        
        GLclampd arg_0 = JSTO<GLclampd> (args[0]);
        GLclampd arg_1 = JSTO<GLclampd> (args[1]);
        
        glDepthRange (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthRange"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glClearAccum (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glClearAccum (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearAccum"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glAccum (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glAccum (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAccum"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMatrixMode (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glMatrixMode (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixMode"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glScaled (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glScaled (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glScaled"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glScalef (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glScalef (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glScalef"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTranslated (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glTranslated (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTranslated"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTranslatef (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTranslatef (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTranslatef"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsList (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsList (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsList"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDeleteLists (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glDeleteLists (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteLists"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenLists (needs 1)"));
        
        GLsizei arg_0 = JSTO<GLsizei> (args[0]);
        GLuint ret =
        glGenLists (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGenLists"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glNewList (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glNewList (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNewList"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCallList (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glCallList (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCallList"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glListBase (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glListBase (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glListBase"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBegin (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBegin (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBegin"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertex2d (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertex2d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertex2f (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertex2f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex2f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertex2i (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertex2i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertex2s (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glVertex2s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertex3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertex3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertex3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glVertex3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertex3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glVertex3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertex3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glVertex3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertex4d (needs 4)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertex4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertex4f (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glVertex4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex4f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertex4i (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glVertex4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertex4s (needs 4)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glVertex4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex4s"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glVertex2fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertex2fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glVertex3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertex3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glVertex4fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertex4fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertex4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glNormal3b (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glNormal3b (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3b"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glNormal3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glNormal3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glNormal3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glNormal3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glNormal3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glNormal3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glNormal3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glNormal3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3s"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glNormal3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glNormal3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexd (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glIndexd (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexd"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexf (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glIndexf (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexi (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glIndexi (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexi"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexs (needs 1)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        
        glIndexs (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexs"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIndexub (needs 1)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        
        glIndexub (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexub"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glIndexfv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glIndexfv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3b (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glColor3b (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3b"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glColor3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glColor3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glColor3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glColor3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3ub (needs 3)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        
        glColor3ub (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3ub"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3ui (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glColor3ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColor3us (needs 3)"));
        
        GLushort arg_0 = JSTO<GLushort> (args[0]);
        GLushort arg_1 = JSTO<GLushort> (args[1]);
        GLushort arg_2 = JSTO<GLushort> (args[2]);
        
        glColor3us (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3us"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glColor3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glColor3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glColor4fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glColor4fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord1d (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glTexCoord1d (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord1f (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glTexCoord1f (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord1f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord1i (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glTexCoord1i (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord1s (needs 1)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        
        glTexCoord1s (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord1s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2d (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glTexCoord2d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2f (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glTexCoord2f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2i (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glTexCoord2i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2s (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glTexCoord2s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glTexCoord3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTexCoord3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glTexCoord3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glTexCoord3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4d (needs 4)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glTexCoord4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4f (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glTexCoord4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4i (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glTexCoord4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4s (needs 4)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glTexCoord4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4s"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord1fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexCoord1fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord1fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexCoord2fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexCoord3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexCoord4fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos2d (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glRasterPos2d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos2f (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glRasterPos2f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos2f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos2i (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glRasterPos2i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos2s (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glRasterPos2s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glRasterPos3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glRasterPos3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glRasterPos3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glRasterPos3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos4d (needs 4)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glRasterPos4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos4f (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glRasterPos4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos4f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos4i (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glRasterPos4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos4s (needs 4)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glRasterPos4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos4s"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos2fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glRasterPos2fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glRasterPos3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glRasterPos4fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glRasterPos4fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRasterPos4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRectd (needs 4)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glRectd (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRectd"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRectf (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glRectf (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRectf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRecti (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glRecti (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRecti"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRects (needs 4)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glRects (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRects"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glArrayElement (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glArrayElement (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glArrayElement"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDrawArrays (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glDrawArrays (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArrays"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glShadeModel (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glShadeModel (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glShadeModel"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glLightf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glLightf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLightf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glLighti (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glLighti (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLighti"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glLightModelf (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glLightModelf (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLightModelf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glLightModeli (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glLightModeli (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLightModeli"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLightModelfv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glLightModelfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLightModelfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMaterialf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMaterialf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMaterialf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMateriali (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glMateriali (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMateriali"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMaterialfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMaterialfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMaterialfv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMaterialfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetMaterialfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetMaterialfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMaterialiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetMaterialiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMaterialiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glColorMaterial (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glColorMaterial (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorMaterial"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelZoom (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPixelZoom (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelZoom"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelStoref (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPixelStoref (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelStoref"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelStorei (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPixelStorei (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelStorei"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelTransferf (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPixelTransferf (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTransferf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelTransferi (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPixelTransferi (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTransferi"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetPixelMapfv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetPixelMapfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetPixelMapfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetPixelMapuiv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint ret;
        glGetPixelMapuiv (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetPixelMapuiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetPixelMapusv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLushort ret;
        glGetPixelMapusv (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetPixelMapusv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glStencilFunc (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glStencilFunc (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilFunc"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glStencilMask (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glStencilMask (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilMask"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glStencilOp (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glStencilOp (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilOp"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClearStencil (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glClearStencil (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearStencil"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexGend (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glTexGend (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexGend"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexGenf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTexGenf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexGenf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexGeni (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glTexGeni (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexGeni"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexGenfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexGenfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexGenfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexGendv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetTexGendv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexGendv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexGenfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetTexGenfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetTexGenfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexGeniv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetTexGeniv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexGeniv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexEnvf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTexEnvf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexEnvf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexEnvi (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glTexEnvi (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexEnvi"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexEnvfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glTexEnvfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexEnvfv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexEnvfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetTexEnvfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetTexEnvfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexEnviv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetTexEnviv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexEnviv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexParameterf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTexParameterf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexParameterf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexParameteri (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glTexParameteri (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexParameteri"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindTexture (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindTexture (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsTexture (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsTexture (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsTexture"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMapdv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetMapdv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapdv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMapfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetMapfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetMapfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMapiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetMapiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord1d (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glEvalCoord1d (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord1f (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glEvalCoord1f (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord1f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord1fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glEvalCoord1fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord1fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord2d (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glEvalCoord2d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord2f (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glEvalCoord2f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEvalCoord2fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glEvalCoord2fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalCoord2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMapGrid1d (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glMapGrid1d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMapGrid1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMapGrid1f (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMapGrid1f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMapGrid1f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEvalPoint1 (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glEvalPoint1 (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalPoint1"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEvalPoint2 (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glEvalPoint2 (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalPoint2"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glEvalMesh1 (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glEvalMesh1 (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalMesh1"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glEvalMesh2 (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glEvalMesh2 (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalMesh2"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFogf (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glFogf (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFogi (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glFogi (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogi"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFogfv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glFogfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPassThrough (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glPassThrough (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPassThrough"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLoadName (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glLoadName (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLoadName"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPushName (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glPushName (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPushName"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_RESCALE_NORMAL);
  GL_CONST(GL_CLAMP_TO_EDGE);
  GL_CONST(GL_MAX_ELEMENTS_VERTICES);
  GL_CONST(GL_MAX_ELEMENTS_INDICES);
  GL_CONST(GL_BGR);
  GL_CONST(GL_BGRA);
  GL_CONST(GL_UNSIGNED_BYTE_3_3_2);
  GL_CONST(GL_UNSIGNED_BYTE_2_3_3_REV);
  GL_CONST(GL_UNSIGNED_SHORT_5_6_5);
  GL_CONST(GL_UNSIGNED_SHORT_5_6_5_REV);
  GL_CONST(GL_UNSIGNED_SHORT_4_4_4_4);
  GL_CONST(GL_UNSIGNED_SHORT_4_4_4_4_REV);
  GL_CONST(GL_UNSIGNED_SHORT_5_5_5_1);
  GL_CONST(GL_UNSIGNED_SHORT_1_5_5_5_REV);
  GL_CONST(GL_UNSIGNED_INT_8_8_8_8);
  GL_CONST(GL_UNSIGNED_INT_8_8_8_8_REV);
  GL_CONST(GL_UNSIGNED_INT_10_10_10_2);
  GL_CONST(GL_UNSIGNED_INT_2_10_10_10_REV);
  GL_CONST(GL_LIGHT_MODEL_COLOR_CONTROL);
  GL_CONST(GL_SINGLE_COLOR);
  GL_CONST(GL_SEPARATE_SPECULAR_COLOR);
  GL_CONST(GL_TEXTURE_MIN_LOD);
  GL_CONST(GL_TEXTURE_MAX_LOD);
  GL_CONST(GL_TEXTURE_BASE_LEVEL);
  GL_CONST(GL_TEXTURE_MAX_LEVEL);
  GL_CONST(GL_SMOOTH_POINT_SIZE_RANGE);
  GL_CONST(GL_SMOOTH_POINT_SIZE_GRANULARITY);
  GL_CONST(GL_SMOOTH_LINE_WIDTH_RANGE);
  GL_CONST(GL_SMOOTH_LINE_WIDTH_GRANULARITY);
  GL_CONST(GL_ALIASED_POINT_SIZE_RANGE);
  GL_CONST(GL_ALIASED_LINE_WIDTH_RANGE);
  GL_CONST(GL_PACK_SKIP_IMAGES);
  GL_CONST(GL_PACK_IMAGE_HEIGHT);
  GL_CONST(GL_UNPACK_SKIP_IMAGES);
  GL_CONST(GL_UNPACK_IMAGE_HEIGHT);
  GL_CONST(GL_TEXTURE_3D);
  GL_CONST(GL_PROXY_TEXTURE_3D);
  GL_CONST(GL_TEXTURE_DEPTH);
  GL_CONST(GL_TEXTURE_WRAP_R);
  GL_CONST(GL_MAX_3D_TEXTURE_SIZE);
  GL_CONST(GL_TEXTURE_BINDING_3D);
  GL_CONST(GL_CONSTANT_COLOR);
  GL_CONST(GL_ONE_MINUS_CONSTANT_COLOR);
  GL_CONST(GL_CONSTANT_ALPHA);
  GL_CONST(GL_ONE_MINUS_CONSTANT_ALPHA);
  GL_CONST(GL_COLOR_TABLE);
  GL_CONST(GL_POST_CONVOLUTION_COLOR_TABLE);
  GL_CONST(GL_POST_COLOR_MATRIX_COLOR_TABLE);
  GL_CONST(GL_PROXY_COLOR_TABLE);
  GL_CONST(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE);
  GL_CONST(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE);
  GL_CONST(GL_COLOR_TABLE_SCALE);
  GL_CONST(GL_COLOR_TABLE_BIAS);
  GL_CONST(GL_COLOR_TABLE_FORMAT);
  GL_CONST(GL_COLOR_TABLE_WIDTH);
  GL_CONST(GL_COLOR_TABLE_RED_SIZE);
  GL_CONST(GL_COLOR_TABLE_GREEN_SIZE);
  GL_CONST(GL_COLOR_TABLE_BLUE_SIZE);
  GL_CONST(GL_COLOR_TABLE_ALPHA_SIZE);
  GL_CONST(GL_COLOR_TABLE_LUMINANCE_SIZE);
  GL_CONST(GL_COLOR_TABLE_INTENSITY_SIZE);
  GL_CONST(GL_CONVOLUTION_1D);
  GL_CONST(GL_CONVOLUTION_2D);
  GL_CONST(GL_SEPARABLE_2D);
  GL_CONST(GL_CONVOLUTION_BORDER_MODE);
  GL_CONST(GL_CONVOLUTION_FILTER_SCALE);
  GL_CONST(GL_CONVOLUTION_FILTER_BIAS);
  GL_CONST(GL_REDUCE);
  GL_CONST(GL_CONVOLUTION_FORMAT);
  GL_CONST(GL_CONVOLUTION_WIDTH);
  GL_CONST(GL_CONVOLUTION_HEIGHT);
  GL_CONST(GL_MAX_CONVOLUTION_WIDTH);
  GL_CONST(GL_MAX_CONVOLUTION_HEIGHT);
  GL_CONST(GL_POST_CONVOLUTION_RED_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_RED_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_BIAS);
  GL_CONST(GL_CONSTANT_BORDER);
  GL_CONST(GL_REPLICATE_BORDER);
  GL_CONST(GL_CONVOLUTION_BORDER_COLOR);
  GL_CONST(GL_COLOR_MATRIX);
  GL_CONST(GL_COLOR_MATRIX_STACK_DEPTH);
  GL_CONST(GL_MAX_COLOR_MATRIX_STACK_DEPTH);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_BIAS);
  GL_CONST(GL_HISTOGRAM);
  GL_CONST(GL_PROXY_HISTOGRAM);
  GL_CONST(GL_HISTOGRAM_WIDTH);
  GL_CONST(GL_HISTOGRAM_FORMAT);
  GL_CONST(GL_HISTOGRAM_RED_SIZE);
  GL_CONST(GL_HISTOGRAM_GREEN_SIZE);
  GL_CONST(GL_HISTOGRAM_BLUE_SIZE);
  GL_CONST(GL_HISTOGRAM_ALPHA_SIZE);
  GL_CONST(GL_HISTOGRAM_LUMINANCE_SIZE);
  GL_CONST(GL_HISTOGRAM_SINK);
  GL_CONST(GL_MINMAX);
  GL_CONST(GL_MINMAX_FORMAT);
  GL_CONST(GL_MINMAX_SINK);
  GL_CONST(GL_TABLE_TOO_LARGE);
  GL_CONST(GL_BLEND_EQUATION);
  GL_CONST(GL_MIN);
  GL_CONST(GL_MAX);
  GL_CONST(GL_FUNC_ADD);
  GL_CONST(GL_FUNC_SUBTRACT);
  GL_CONST(GL_FUNC_REVERSE_SUBTRACT);
  GL_CONST(GL_BLEND_COLOR);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquation (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBlendEquation (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquation"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetHistogram (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetHistogram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetHistogram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetMinmax (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetMinmax (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetMinmax"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_TEXTURE0);
  GL_CONST(GL_TEXTURE1);
  GL_CONST(GL_TEXTURE2);
  GL_CONST(GL_TEXTURE3);
  GL_CONST(GL_TEXTURE4);
  GL_CONST(GL_TEXTURE5);
  GL_CONST(GL_TEXTURE6);
  GL_CONST(GL_TEXTURE7);
  GL_CONST(GL_TEXTURE8);
  GL_CONST(GL_TEXTURE9);
  GL_CONST(GL_TEXTURE10);
  GL_CONST(GL_TEXTURE11);
  GL_CONST(GL_TEXTURE12);
  GL_CONST(GL_TEXTURE13);
  GL_CONST(GL_TEXTURE14);
  GL_CONST(GL_TEXTURE15);
  GL_CONST(GL_TEXTURE16);
  GL_CONST(GL_TEXTURE17);
  GL_CONST(GL_TEXTURE18);
  GL_CONST(GL_TEXTURE19);
  GL_CONST(GL_TEXTURE20);
  GL_CONST(GL_TEXTURE21);
  GL_CONST(GL_TEXTURE22);
  GL_CONST(GL_TEXTURE23);
  GL_CONST(GL_TEXTURE24);
  GL_CONST(GL_TEXTURE25);
  GL_CONST(GL_TEXTURE26);
  GL_CONST(GL_TEXTURE27);
  GL_CONST(GL_TEXTURE28);
  GL_CONST(GL_TEXTURE29);
  GL_CONST(GL_TEXTURE30);
  GL_CONST(GL_TEXTURE31);
  GL_CONST(GL_ACTIVE_TEXTURE);
  GL_CONST(GL_CLIENT_ACTIVE_TEXTURE);
  GL_CONST(GL_MAX_TEXTURE_UNITS);
  GL_CONST(GL_NORMAL_MAP);
  GL_CONST(GL_REFLECTION_MAP);
  GL_CONST(GL_TEXTURE_CUBE_MAP);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_X);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_X);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Y);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Z);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP);
  GL_CONST(GL_MAX_CUBE_MAP_TEXTURE_SIZE);
  GL_CONST(GL_COMPRESSED_ALPHA);
  GL_CONST(GL_COMPRESSED_LUMINANCE);
  GL_CONST(GL_COMPRESSED_LUMINANCE_ALPHA);
  GL_CONST(GL_COMPRESSED_INTENSITY);
  GL_CONST(GL_COMPRESSED_RGB);
  GL_CONST(GL_COMPRESSED_RGBA);
  GL_CONST(GL_TEXTURE_COMPRESSION_HINT);
  GL_CONST(GL_TEXTURE_COMPRESSED_IMAGE_SIZE);
  GL_CONST(GL_TEXTURE_COMPRESSED);
  GL_CONST(GL_NUM_COMPRESSED_TEXTURE_FORMATS);
  GL_CONST(GL_COMPRESSED_TEXTURE_FORMATS);
  GL_CONST(GL_MULTISAMPLE);
  GL_CONST(GL_SAMPLE_ALPHA_TO_COVERAGE);
  GL_CONST(GL_SAMPLE_ALPHA_TO_ONE);
  GL_CONST(GL_SAMPLE_COVERAGE);
  GL_CONST(GL_SAMPLE_BUFFERS);
  GL_CONST(GL_SAMPLES);
  GL_CONST(GL_SAMPLE_COVERAGE_VALUE);
  GL_CONST(GL_SAMPLE_COVERAGE_INVERT);
  GL_CONST(GL_MULTISAMPLE_BIT);
  GL_CONST(GL_TRANSPOSE_MODELVIEW_MATRIX);
  GL_CONST(GL_TRANSPOSE_PROJECTION_MATRIX);
  GL_CONST(GL_TRANSPOSE_TEXTURE_MATRIX);
  GL_CONST(GL_TRANSPOSE_COLOR_MATRIX);
  GL_CONST(GL_COMBINE);
  GL_CONST(GL_COMBINE_RGB);
  GL_CONST(GL_COMBINE_ALPHA);
  GL_CONST(GL_SOURCE0_RGB);
  GL_CONST(GL_SOURCE1_RGB);
  GL_CONST(GL_SOURCE2_RGB);
  GL_CONST(GL_SOURCE0_ALPHA);
  GL_CONST(GL_SOURCE1_ALPHA);
  GL_CONST(GL_SOURCE2_ALPHA);
  GL_CONST(GL_OPERAND0_RGB);
  GL_CONST(GL_OPERAND1_RGB);
  GL_CONST(GL_OPERAND2_RGB);
  GL_CONST(GL_OPERAND0_ALPHA);
  GL_CONST(GL_OPERAND1_ALPHA);
  GL_CONST(GL_OPERAND2_ALPHA);
  GL_CONST(GL_RGB_SCALE);
  GL_CONST(GL_ADD_SIGNED);
  GL_CONST(GL_INTERPOLATE);
  GL_CONST(GL_SUBTRACT);
  GL_CONST(GL_CONSTANT);
  GL_CONST(GL_PRIMARY_COLOR);
  GL_CONST(GL_PREVIOUS);
  GL_CONST(GL_DOT3_RGB);
  GL_CONST(GL_DOT3_RGBA);
  GL_CONST(GL_CLAMP_TO_BORDER);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveTexture (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glActiveTexture (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientActiveTexture (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glClientActiveTexture (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientActiveTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1d (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glMultiTexCoord1d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1f (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glMultiTexCoord1f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord1fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1i (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glMultiTexCoord1i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1s (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glMultiTexCoord1s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2d (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glMultiTexCoord2d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2f (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMultiTexCoord2f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord2fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2i (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glMultiTexCoord2i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2s (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glMultiTexCoord2s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3d (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMultiTexCoord3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3f (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexCoord3f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord3fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3i (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexCoord3i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3s (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glMultiTexCoord3s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4d (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glMultiTexCoord4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4f (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glMultiTexCoord4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord4fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4i (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glMultiTexCoord4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4s (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glMultiTexCoord4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleCoverage (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        
        glSampleCoverage (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleCoverage"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_TEXTURE0_ARB);
  GL_CONST(GL_TEXTURE1_ARB);
  GL_CONST(GL_TEXTURE2_ARB);
  GL_CONST(GL_TEXTURE3_ARB);
  GL_CONST(GL_TEXTURE4_ARB);
  GL_CONST(GL_TEXTURE5_ARB);
  GL_CONST(GL_TEXTURE6_ARB);
  GL_CONST(GL_TEXTURE7_ARB);
  GL_CONST(GL_TEXTURE8_ARB);
  GL_CONST(GL_TEXTURE9_ARB);
  GL_CONST(GL_TEXTURE10_ARB);
  GL_CONST(GL_TEXTURE11_ARB);
  GL_CONST(GL_TEXTURE12_ARB);
  GL_CONST(GL_TEXTURE13_ARB);
  GL_CONST(GL_TEXTURE14_ARB);
  GL_CONST(GL_TEXTURE15_ARB);
  GL_CONST(GL_TEXTURE16_ARB);
  GL_CONST(GL_TEXTURE17_ARB);
  GL_CONST(GL_TEXTURE18_ARB);
  GL_CONST(GL_TEXTURE19_ARB);
  GL_CONST(GL_TEXTURE20_ARB);
  GL_CONST(GL_TEXTURE21_ARB);
  GL_CONST(GL_TEXTURE22_ARB);
  GL_CONST(GL_TEXTURE23_ARB);
  GL_CONST(GL_TEXTURE24_ARB);
  GL_CONST(GL_TEXTURE25_ARB);
  GL_CONST(GL_TEXTURE26_ARB);
  GL_CONST(GL_TEXTURE27_ARB);
  GL_CONST(GL_TEXTURE28_ARB);
  GL_CONST(GL_TEXTURE29_ARB);
  GL_CONST(GL_TEXTURE30_ARB);
  GL_CONST(GL_TEXTURE31_ARB);
  GL_CONST(GL_ACTIVE_TEXTURE_ARB);
  GL_CONST(GL_CLIENT_ACTIVE_TEXTURE_ARB);
  GL_CONST(GL_MAX_TEXTURE_UNITS_ARB);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveTextureARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glActiveTextureARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveTextureARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientActiveTextureARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glClientActiveTextureARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientActiveTextureARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1dARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glMultiTexCoord1dARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1fARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glMultiTexCoord1fARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1iARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glMultiTexCoord1iARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1sARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glMultiTexCoord1sARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2dARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glMultiTexCoord2dARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2fARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMultiTexCoord2fARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2iARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glMultiTexCoord2iARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2sARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glMultiTexCoord2sARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3dARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMultiTexCoord3dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3fARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexCoord3fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3iARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexCoord3iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3sARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glMultiTexCoord3sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4dARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glMultiTexCoord4dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4fARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glMultiTexCoord4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4iARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glMultiTexCoord4iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4sARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glMultiTexCoord4sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4sARB"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_DEBUG_OBJECT_MESA);
  GL_CONST(GL_DEBUG_PRINT_MESA);
  GL_CONST(GL_DEBUG_ASSERT_MESA);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glCreateDebugObjectMESA (needs 0)"));
        
        GLhandleARB ret =
        glCreateDebugObjectMESA ();
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCreateDebugObjectMESA"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_DEPTH_STENCIL_MESA);
  GL_CONST(GL_UNSIGNED_INT_24_8_MESA);
  GL_CONST(GL_UNSIGNED_INT_8_24_REV_MESA);
  GL_CONST(GL_UNSIGNED_SHORT_15_1_MESA);
  GL_CONST(GL_UNSIGNED_SHORT_1_15_REV_MESA);
  GL_CONST(GL_FRAGMENT_PROGRAM_POSITION_MESA);
  GL_CONST(GL_FRAGMENT_PROGRAM_CALLBACK_MESA);
  GL_CONST(GL_FRAGMENT_PROGRAM_CALLBACK_FUNC_MESA);
  GL_CONST(GL_FRAGMENT_PROGRAM_CALLBACK_DATA_MESA);
  GL_CONST(GL_VERTEX_PROGRAM_POSITION_MESA);
  GL_CONST(GL_VERTEX_PROGRAM_CALLBACK_MESA);
  GL_CONST(GL_VERTEX_PROGRAM_CALLBACK_FUNC_MESA);
  GL_CONST(GL_VERTEX_PROGRAM_CALLBACK_DATA_MESA);
  GL_CONST(GL_TEXTURE_1D_ARRAY_EXT);
  GL_CONST(GL_PROXY_TEXTURE_1D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_2D_ARRAY_EXT);
  GL_CONST(GL_PROXY_TEXTURE_2D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_BINDING_1D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_BINDING_2D_ARRAY_EXT);
  GL_CONST(GL_MAX_ARRAY_TEXTURE_LAYERS_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT);
  GL_CONST(GL_ALPHA_BLEND_EQUATION_ATI);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparateATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationSeparateATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparateATI"), tmpl -> GetFunction ());
  }

  GL_CONST(GL_UNSIGNED_BYTE_3_3_2);
  GL_CONST(GL_UNSIGNED_SHORT_4_4_4_4);
  GL_CONST(GL_UNSIGNED_SHORT_5_5_5_1);
  GL_CONST(GL_UNSIGNED_INT_8_8_8_8);
  GL_CONST(GL_UNSIGNED_INT_10_10_10_2);
  GL_CONST(GL_TEXTURE_BINDING_3D);
  GL_CONST(GL_PACK_SKIP_IMAGES);
  GL_CONST(GL_PACK_IMAGE_HEIGHT);
  GL_CONST(GL_UNPACK_SKIP_IMAGES);
  GL_CONST(GL_UNPACK_IMAGE_HEIGHT);
  GL_CONST(GL_TEXTURE_3D);
  GL_CONST(GL_PROXY_TEXTURE_3D);
  GL_CONST(GL_TEXTURE_DEPTH);
  GL_CONST(GL_TEXTURE_WRAP_R);
  GL_CONST(GL_MAX_3D_TEXTURE_SIZE);
  GL_CONST(GL_UNSIGNED_BYTE_2_3_3_REV);
  GL_CONST(GL_UNSIGNED_SHORT_5_6_5);
  GL_CONST(GL_UNSIGNED_SHORT_5_6_5_REV);
  GL_CONST(GL_UNSIGNED_SHORT_4_4_4_4_REV);
  GL_CONST(GL_UNSIGNED_SHORT_1_5_5_5_REV);
  GL_CONST(GL_UNSIGNED_INT_8_8_8_8_REV);
  GL_CONST(GL_UNSIGNED_INT_2_10_10_10_REV);
  GL_CONST(GL_BGR);
  GL_CONST(GL_BGRA);
  GL_CONST(GL_MAX_ELEMENTS_VERTICES);
  GL_CONST(GL_MAX_ELEMENTS_INDICES);
  GL_CONST(GL_CLAMP_TO_EDGE);
  GL_CONST(GL_TEXTURE_MIN_LOD);
  GL_CONST(GL_TEXTURE_MAX_LOD);
  GL_CONST(GL_TEXTURE_BASE_LEVEL);
  GL_CONST(GL_TEXTURE_MAX_LEVEL);
  GL_CONST(GL_SMOOTH_POINT_SIZE_RANGE);
  GL_CONST(GL_SMOOTH_POINT_SIZE_GRANULARITY);
  GL_CONST(GL_SMOOTH_LINE_WIDTH_RANGE);
  GL_CONST(GL_SMOOTH_LINE_WIDTH_GRANULARITY);
  GL_CONST(GL_ALIASED_LINE_WIDTH_RANGE);
  GL_CONST(GL_RESCALE_NORMAL);
  GL_CONST(GL_LIGHT_MODEL_COLOR_CONTROL);
  GL_CONST(GL_SINGLE_COLOR);
  GL_CONST(GL_SEPARATE_SPECULAR_COLOR);
  GL_CONST(GL_ALIASED_POINT_SIZE_RANGE);
  GL_CONST(GL_CONSTANT_COLOR);
  GL_CONST(GL_ONE_MINUS_CONSTANT_COLOR);
  GL_CONST(GL_CONSTANT_ALPHA);
  GL_CONST(GL_ONE_MINUS_CONSTANT_ALPHA);
  GL_CONST(GL_BLEND_COLOR);
  GL_CONST(GL_FUNC_ADD);
  GL_CONST(GL_MIN);
  GL_CONST(GL_MAX);
  GL_CONST(GL_BLEND_EQUATION);
  GL_CONST(GL_FUNC_SUBTRACT);
  GL_CONST(GL_FUNC_REVERSE_SUBTRACT);
  GL_CONST(GL_CONVOLUTION_1D);
  GL_CONST(GL_CONVOLUTION_2D);
  GL_CONST(GL_SEPARABLE_2D);
  GL_CONST(GL_CONVOLUTION_BORDER_MODE);
  GL_CONST(GL_CONVOLUTION_FILTER_SCALE);
  GL_CONST(GL_CONVOLUTION_FILTER_BIAS);
  GL_CONST(GL_REDUCE);
  GL_CONST(GL_CONVOLUTION_FORMAT);
  GL_CONST(GL_CONVOLUTION_WIDTH);
  GL_CONST(GL_CONVOLUTION_HEIGHT);
  GL_CONST(GL_MAX_CONVOLUTION_WIDTH);
  GL_CONST(GL_MAX_CONVOLUTION_HEIGHT);
  GL_CONST(GL_POST_CONVOLUTION_RED_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_SCALE);
  GL_CONST(GL_POST_CONVOLUTION_RED_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_BIAS);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_BIAS);
  GL_CONST(GL_HISTOGRAM);
  GL_CONST(GL_PROXY_HISTOGRAM);
  GL_CONST(GL_HISTOGRAM_WIDTH);
  GL_CONST(GL_HISTOGRAM_FORMAT);
  GL_CONST(GL_HISTOGRAM_RED_SIZE);
  GL_CONST(GL_HISTOGRAM_GREEN_SIZE);
  GL_CONST(GL_HISTOGRAM_BLUE_SIZE);
  GL_CONST(GL_HISTOGRAM_ALPHA_SIZE);
  GL_CONST(GL_HISTOGRAM_LUMINANCE_SIZE);
  GL_CONST(GL_HISTOGRAM_SINK);
  GL_CONST(GL_MINMAX);
  GL_CONST(GL_MINMAX_FORMAT);
  GL_CONST(GL_MINMAX_SINK);
  GL_CONST(GL_TABLE_TOO_LARGE);
  GL_CONST(GL_COLOR_MATRIX);
  GL_CONST(GL_COLOR_MATRIX_STACK_DEPTH);
  GL_CONST(GL_MAX_COLOR_MATRIX_STACK_DEPTH);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_SCALE);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_BIAS);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_BIAS);
  GL_CONST(GL_COLOR_TABLE);
  GL_CONST(GL_POST_CONVOLUTION_COLOR_TABLE);
  GL_CONST(GL_POST_COLOR_MATRIX_COLOR_TABLE);
  GL_CONST(GL_PROXY_COLOR_TABLE);
  GL_CONST(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE);
  GL_CONST(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE);
  GL_CONST(GL_COLOR_TABLE_SCALE);
  GL_CONST(GL_COLOR_TABLE_BIAS);
  GL_CONST(GL_COLOR_TABLE_FORMAT);
  GL_CONST(GL_COLOR_TABLE_WIDTH);
  GL_CONST(GL_COLOR_TABLE_RED_SIZE);
  GL_CONST(GL_COLOR_TABLE_GREEN_SIZE);
  GL_CONST(GL_COLOR_TABLE_BLUE_SIZE);
  GL_CONST(GL_COLOR_TABLE_ALPHA_SIZE);
  GL_CONST(GL_COLOR_TABLE_LUMINANCE_SIZE);
  GL_CONST(GL_COLOR_TABLE_INTENSITY_SIZE);
  GL_CONST(GL_CONSTANT_BORDER);
  GL_CONST(GL_REPLICATE_BORDER);
  GL_CONST(GL_CONVOLUTION_BORDER_COLOR);
  GL_CONST(GL_TEXTURE0);
  GL_CONST(GL_TEXTURE1);
  GL_CONST(GL_TEXTURE2);
  GL_CONST(GL_TEXTURE3);
  GL_CONST(GL_TEXTURE4);
  GL_CONST(GL_TEXTURE5);
  GL_CONST(GL_TEXTURE6);
  GL_CONST(GL_TEXTURE7);
  GL_CONST(GL_TEXTURE8);
  GL_CONST(GL_TEXTURE9);
  GL_CONST(GL_TEXTURE10);
  GL_CONST(GL_TEXTURE11);
  GL_CONST(GL_TEXTURE12);
  GL_CONST(GL_TEXTURE13);
  GL_CONST(GL_TEXTURE14);
  GL_CONST(GL_TEXTURE15);
  GL_CONST(GL_TEXTURE16);
  GL_CONST(GL_TEXTURE17);
  GL_CONST(GL_TEXTURE18);
  GL_CONST(GL_TEXTURE19);
  GL_CONST(GL_TEXTURE20);
  GL_CONST(GL_TEXTURE21);
  GL_CONST(GL_TEXTURE22);
  GL_CONST(GL_TEXTURE23);
  GL_CONST(GL_TEXTURE24);
  GL_CONST(GL_TEXTURE25);
  GL_CONST(GL_TEXTURE26);
  GL_CONST(GL_TEXTURE27);
  GL_CONST(GL_TEXTURE28);
  GL_CONST(GL_TEXTURE29);
  GL_CONST(GL_TEXTURE30);
  GL_CONST(GL_TEXTURE31);
  GL_CONST(GL_ACTIVE_TEXTURE);
  GL_CONST(GL_MULTISAMPLE);
  GL_CONST(GL_SAMPLE_ALPHA_TO_COVERAGE);
  GL_CONST(GL_SAMPLE_ALPHA_TO_ONE);
  GL_CONST(GL_SAMPLE_COVERAGE);
  GL_CONST(GL_SAMPLE_BUFFERS);
  GL_CONST(GL_SAMPLES);
  GL_CONST(GL_SAMPLE_COVERAGE_VALUE);
  GL_CONST(GL_SAMPLE_COVERAGE_INVERT);
  GL_CONST(GL_TEXTURE_CUBE_MAP);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_X);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_X);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Y);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Z);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP);
  GL_CONST(GL_MAX_CUBE_MAP_TEXTURE_SIZE);
  GL_CONST(GL_COMPRESSED_RGB);
  GL_CONST(GL_COMPRESSED_RGBA);
  GL_CONST(GL_TEXTURE_COMPRESSION_HINT);
  GL_CONST(GL_TEXTURE_COMPRESSED_IMAGE_SIZE);
  GL_CONST(GL_TEXTURE_COMPRESSED);
  GL_CONST(GL_NUM_COMPRESSED_TEXTURE_FORMATS);
  GL_CONST(GL_COMPRESSED_TEXTURE_FORMATS);
  GL_CONST(GL_CLAMP_TO_BORDER);
  GL_CONST(GL_CLIENT_ACTIVE_TEXTURE);
  GL_CONST(GL_MAX_TEXTURE_UNITS);
  GL_CONST(GL_TRANSPOSE_MODELVIEW_MATRIX);
  GL_CONST(GL_TRANSPOSE_PROJECTION_MATRIX);
  GL_CONST(GL_TRANSPOSE_TEXTURE_MATRIX);
  GL_CONST(GL_TRANSPOSE_COLOR_MATRIX);
  GL_CONST(GL_MULTISAMPLE_BIT);
  GL_CONST(GL_NORMAL_MAP);
  GL_CONST(GL_REFLECTION_MAP);
  GL_CONST(GL_COMPRESSED_ALPHA);
  GL_CONST(GL_COMPRESSED_LUMINANCE);
  GL_CONST(GL_COMPRESSED_LUMINANCE_ALPHA);
  GL_CONST(GL_COMPRESSED_INTENSITY);
  GL_CONST(GL_COMBINE);
  GL_CONST(GL_COMBINE_RGB);
  GL_CONST(GL_COMBINE_ALPHA);
  GL_CONST(GL_SOURCE0_RGB);
  GL_CONST(GL_SOURCE1_RGB);
  GL_CONST(GL_SOURCE2_RGB);
  GL_CONST(GL_SOURCE0_ALPHA);
  GL_CONST(GL_SOURCE1_ALPHA);
  GL_CONST(GL_SOURCE2_ALPHA);
  GL_CONST(GL_OPERAND0_RGB);
  GL_CONST(GL_OPERAND1_RGB);
  GL_CONST(GL_OPERAND2_RGB);
  GL_CONST(GL_OPERAND0_ALPHA);
  GL_CONST(GL_OPERAND1_ALPHA);
  GL_CONST(GL_OPERAND2_ALPHA);
  GL_CONST(GL_RGB_SCALE);
  GL_CONST(GL_ADD_SIGNED);
  GL_CONST(GL_INTERPOLATE);
  GL_CONST(GL_SUBTRACT);
  GL_CONST(GL_CONSTANT);
  GL_CONST(GL_PRIMARY_COLOR);
  GL_CONST(GL_PREVIOUS);
  GL_CONST(GL_DOT3_RGB);
  GL_CONST(GL_DOT3_RGBA);
  GL_CONST(GL_BLEND_DST_RGB);
  GL_CONST(GL_BLEND_SRC_RGB);
  GL_CONST(GL_BLEND_DST_ALPHA);
  GL_CONST(GL_BLEND_SRC_ALPHA);
  GL_CONST(GL_POINT_FADE_THRESHOLD_SIZE);
  GL_CONST(GL_DEPTH_COMPONENT16);
  GL_CONST(GL_DEPTH_COMPONENT24);
  GL_CONST(GL_DEPTH_COMPONENT32);
  GL_CONST(GL_MIRRORED_REPEAT);
  GL_CONST(GL_MAX_TEXTURE_LOD_BIAS);
  GL_CONST(GL_TEXTURE_LOD_BIAS);
  GL_CONST(GL_INCR_WRAP);
  GL_CONST(GL_DECR_WRAP);
  GL_CONST(GL_TEXTURE_DEPTH_SIZE);
  GL_CONST(GL_TEXTURE_COMPARE_MODE);
  GL_CONST(GL_TEXTURE_COMPARE_FUNC);
  GL_CONST(GL_POINT_SIZE_MIN);
  GL_CONST(GL_POINT_SIZE_MAX);
  GL_CONST(GL_POINT_DISTANCE_ATTENUATION);
  GL_CONST(GL_GENERATE_MIPMAP);
  GL_CONST(GL_GENERATE_MIPMAP_HINT);
  GL_CONST(GL_FOG_COORDINATE_SOURCE);
  GL_CONST(GL_FOG_COORDINATE);
  GL_CONST(GL_FRAGMENT_DEPTH);
  GL_CONST(GL_CURRENT_FOG_COORDINATE);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_TYPE);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_STRIDE);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_POINTER);
  GL_CONST(GL_FOG_COORDINATE_ARRAY);
  GL_CONST(GL_COLOR_SUM);
  GL_CONST(GL_CURRENT_SECONDARY_COLOR);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_SIZE);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_TYPE);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_STRIDE);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_POINTER);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY);
  GL_CONST(GL_TEXTURE_FILTER_CONTROL);
  GL_CONST(GL_DEPTH_TEXTURE_MODE);
  GL_CONST(GL_COMPARE_R_TO_TEXTURE);
  GL_CONST(GL_BUFFER_SIZE);
  GL_CONST(GL_BUFFER_USAGE);
  GL_CONST(GL_QUERY_COUNTER_BITS);
  GL_CONST(GL_CURRENT_QUERY);
  GL_CONST(GL_QUERY_RESULT);
  GL_CONST(GL_QUERY_RESULT_AVAILABLE);
  GL_CONST(GL_ARRAY_BUFFER);
  GL_CONST(GL_ELEMENT_ARRAY_BUFFER);
  GL_CONST(GL_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_ELEMENT_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_READ_ONLY);
  GL_CONST(GL_WRITE_ONLY);
  GL_CONST(GL_READ_WRITE);
  GL_CONST(GL_BUFFER_ACCESS);
  GL_CONST(GL_BUFFER_MAPPED);
  GL_CONST(GL_BUFFER_MAP_POINTER);
  GL_CONST(GL_STREAM_DRAW);
  GL_CONST(GL_STREAM_READ);
  GL_CONST(GL_STREAM_COPY);
  GL_CONST(GL_STATIC_DRAW);
  GL_CONST(GL_STATIC_READ);
  GL_CONST(GL_STATIC_COPY);
  GL_CONST(GL_DYNAMIC_DRAW);
  GL_CONST(GL_DYNAMIC_READ);
  GL_CONST(GL_DYNAMIC_COPY);
  GL_CONST(GL_SAMPLES_PASSED);
  GL_CONST(GL_VERTEX_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_NORMAL_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_COLOR_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_INDEX_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_EDGE_FLAG_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_WEIGHT_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_FOG_COORD_SRC);
  GL_CONST(GL_FOG_COORD);
  GL_CONST(GL_CURRENT_FOG_COORD);
  GL_CONST(GL_FOG_COORD_ARRAY_TYPE);
  GL_CONST(GL_FOG_COORD_ARRAY_STRIDE);
  GL_CONST(GL_FOG_COORD_ARRAY_POINTER);
  GL_CONST(GL_FOG_COORD_ARRAY);
  GL_CONST(GL_FOG_COORD_ARRAY_BUFFER_BINDING);
  GL_CONST(GL_SRC0_RGB);
  GL_CONST(GL_SRC1_RGB);
  GL_CONST(GL_SRC2_RGB);
  GL_CONST(GL_SRC0_ALPHA);
  GL_CONST(GL_SRC1_ALPHA);
  GL_CONST(GL_SRC2_ALPHA);
  GL_CONST(GL_BLEND_EQUATION_RGB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_ENABLED);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_SIZE);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_STRIDE);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_TYPE);
  GL_CONST(GL_CURRENT_VERTEX_ATTRIB);
  GL_CONST(GL_VERTEX_PROGRAM_POINT_SIZE);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_POINTER);
  GL_CONST(GL_STENCIL_BACK_FUNC);
  GL_CONST(GL_STENCIL_BACK_FAIL);
  GL_CONST(GL_STENCIL_BACK_PASS_DEPTH_FAIL);
  GL_CONST(GL_STENCIL_BACK_PASS_DEPTH_PASS);
  GL_CONST(GL_MAX_DRAW_BUFFERS);
  GL_CONST(GL_DRAW_BUFFER0);
  GL_CONST(GL_DRAW_BUFFER1);
  GL_CONST(GL_DRAW_BUFFER2);
  GL_CONST(GL_DRAW_BUFFER3);
  GL_CONST(GL_DRAW_BUFFER4);
  GL_CONST(GL_DRAW_BUFFER5);
  GL_CONST(GL_DRAW_BUFFER6);
  GL_CONST(GL_DRAW_BUFFER7);
  GL_CONST(GL_DRAW_BUFFER8);
  GL_CONST(GL_DRAW_BUFFER9);
  GL_CONST(GL_DRAW_BUFFER10);
  GL_CONST(GL_DRAW_BUFFER11);
  GL_CONST(GL_DRAW_BUFFER12);
  GL_CONST(GL_DRAW_BUFFER13);
  GL_CONST(GL_DRAW_BUFFER14);
  GL_CONST(GL_DRAW_BUFFER15);
  GL_CONST(GL_BLEND_EQUATION_ALPHA);
  GL_CONST(GL_MAX_VERTEX_ATTRIBS);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED);
  GL_CONST(GL_MAX_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_FRAGMENT_SHADER);
  GL_CONST(GL_VERTEX_SHADER);
  GL_CONST(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_VERTEX_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_VARYING_FLOATS);
  GL_CONST(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_SHADER_TYPE);
  GL_CONST(GL_FLOAT_VEC2);
  GL_CONST(GL_FLOAT_VEC3);
  GL_CONST(GL_FLOAT_VEC4);
  GL_CONST(GL_INT_VEC2);
  GL_CONST(GL_INT_VEC3);
  GL_CONST(GL_INT_VEC4);
  GL_CONST(GL_BOOL);
  GL_CONST(GL_BOOL_VEC2);
  GL_CONST(GL_BOOL_VEC3);
  GL_CONST(GL_BOOL_VEC4);
  GL_CONST(GL_FLOAT_MAT2);
  GL_CONST(GL_FLOAT_MAT3);
  GL_CONST(GL_FLOAT_MAT4);
  GL_CONST(GL_SAMPLER_1D);
  GL_CONST(GL_SAMPLER_2D);
  GL_CONST(GL_SAMPLER_3D);
  GL_CONST(GL_SAMPLER_CUBE);
  GL_CONST(GL_SAMPLER_1D_SHADOW);
  GL_CONST(GL_SAMPLER_2D_SHADOW);
  GL_CONST(GL_DELETE_STATUS);
  GL_CONST(GL_COMPILE_STATUS);
  GL_CONST(GL_LINK_STATUS);
  GL_CONST(GL_VALIDATE_STATUS);
  GL_CONST(GL_INFO_LOG_LENGTH);
  GL_CONST(GL_ATTACHED_SHADERS);
  GL_CONST(GL_ACTIVE_UNIFORMS);
  GL_CONST(GL_ACTIVE_UNIFORM_MAX_LENGTH);
  GL_CONST(GL_SHADER_SOURCE_LENGTH);
  GL_CONST(GL_ACTIVE_ATTRIBUTES);
  GL_CONST(GL_ACTIVE_ATTRIBUTE_MAX_LENGTH);
  GL_CONST(GL_FRAGMENT_SHADER_DERIVATIVE_HINT);
  GL_CONST(GL_SHADING_LANGUAGE_VERSION);
  GL_CONST(GL_CURRENT_PROGRAM);
  GL_CONST(GL_POINT_SPRITE_COORD_ORIGIN);
  GL_CONST(GL_LOWER_LEFT);
  GL_CONST(GL_UPPER_LEFT);
  GL_CONST(GL_STENCIL_BACK_REF);
  GL_CONST(GL_STENCIL_BACK_VALUE_MASK);
  GL_CONST(GL_STENCIL_BACK_WRITEMASK);
  GL_CONST(GL_VERTEX_PROGRAM_TWO_SIDE);
  GL_CONST(GL_POINT_SPRITE);
  GL_CONST(GL_COORD_REPLACE);
  GL_CONST(GL_MAX_TEXTURE_COORDS);
  GL_CONST(GL_PIXEL_PACK_BUFFER);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER);
  GL_CONST(GL_PIXEL_PACK_BUFFER_BINDING);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER_BINDING);
  GL_CONST(GL_SRGB);
  GL_CONST(GL_SRGB8);
  GL_CONST(GL_SRGB_ALPHA);
  GL_CONST(GL_SRGB8_ALPHA8);
  GL_CONST(GL_COMPRESSED_SRGB);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA);
  GL_CONST(GL_CURRENT_RASTER_SECONDARY_COLOR);
  GL_CONST(GL_SLUMINANCE_ALPHA);
  GL_CONST(GL_SLUMINANCE8_ALPHA8);
  GL_CONST(GL_SLUMINANCE);
  GL_CONST(GL_SLUMINANCE8);
  GL_CONST(GL_COMPRESSED_SLUMINANCE);
  GL_CONST(GL_COMPRESSED_SLUMINANCE_ALPHA);
  GL_CONST(GL_COMPARE_REF_TO_TEXTURE);
  GL_CONST(GL_CLIP_DISTANCE0);
  GL_CONST(GL_CLIP_DISTANCE1);
  GL_CONST(GL_CLIP_DISTANCE2);
  GL_CONST(GL_CLIP_DISTANCE3);
  GL_CONST(GL_CLIP_DISTANCE4);
  GL_CONST(GL_CLIP_DISTANCE5);
  GL_CONST(GL_CLIP_DISTANCE6);
  GL_CONST(GL_CLIP_DISTANCE7);
  GL_CONST(GL_MAX_CLIP_DISTANCES);
  GL_CONST(GL_MAJOR_VERSION);
  GL_CONST(GL_MINOR_VERSION);
  GL_CONST(GL_NUM_EXTENSIONS);
  GL_CONST(GL_CONTEXT_FLAGS);
  GL_CONST(GL_DEPTH_BUFFER);
  GL_CONST(GL_STENCIL_BUFFER);
  GL_CONST(GL_COMPRESSED_RED);
  GL_CONST(GL_COMPRESSED_RG);
  GL_CONST(GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT);
  GL_CONST(GL_RGBA32F);
  GL_CONST(GL_RGB32F);
  GL_CONST(GL_RGBA16F);
  GL_CONST(GL_RGB16F);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_INTEGER);
  GL_CONST(GL_MAX_ARRAY_TEXTURE_LAYERS);
  GL_CONST(GL_MIN_PROGRAM_TEXEL_OFFSET);
  GL_CONST(GL_MAX_PROGRAM_TEXEL_OFFSET);
  GL_CONST(GL_CLAMP_READ_COLOR);
  GL_CONST(GL_FIXED_ONLY);
  GL_CONST(GL_MAX_VARYING_COMPONENTS);
  GL_CONST(GL_TEXTURE_1D_ARRAY);
  GL_CONST(GL_PROXY_TEXTURE_1D_ARRAY);
  GL_CONST(GL_TEXTURE_2D_ARRAY);
  GL_CONST(GL_PROXY_TEXTURE_2D_ARRAY);
  GL_CONST(GL_TEXTURE_BINDING_1D_ARRAY);
  GL_CONST(GL_TEXTURE_BINDING_2D_ARRAY);
  GL_CONST(GL_R11F_G11F_B10F);
  GL_CONST(GL_UNSIGNED_INT_10F_11F_11F_REV);
  GL_CONST(GL_RGB9_E5);
  GL_CONST(GL_UNSIGNED_INT_5_9_9_9_REV);
  GL_CONST(GL_TEXTURE_SHARED_SIZE);
  GL_CONST(GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_MODE);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS);
  GL_CONST(GL_TRANSFORM_FEEDBACK_VARYINGS);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_START);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE);
  GL_CONST(GL_PRIMITIVES_GENERATED);
  GL_CONST(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN);
  GL_CONST(GL_RASTERIZER_DISCARD);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS);
  GL_CONST(GL_INTERLEAVED_ATTRIBS);
  GL_CONST(GL_SEPARATE_ATTRIBS);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING);
  GL_CONST(GL_RGBA32UI);
  GL_CONST(GL_RGB32UI);
  GL_CONST(GL_RGBA16UI);
  GL_CONST(GL_RGB16UI);
  GL_CONST(GL_RGBA8UI);
  GL_CONST(GL_RGB8UI);
  GL_CONST(GL_RGBA32I);
  GL_CONST(GL_RGB32I);
  GL_CONST(GL_RGBA16I);
  GL_CONST(GL_RGB16I);
  GL_CONST(GL_RGBA8I);
  GL_CONST(GL_RGB8I);
  GL_CONST(GL_RED_INTEGER);
  GL_CONST(GL_GREEN_INTEGER);
  GL_CONST(GL_BLUE_INTEGER);
  GL_CONST(GL_RGB_INTEGER);
  GL_CONST(GL_RGBA_INTEGER);
  GL_CONST(GL_BGR_INTEGER);
  GL_CONST(GL_BGRA_INTEGER);
  GL_CONST(GL_SAMPLER_1D_ARRAY);
  GL_CONST(GL_SAMPLER_2D_ARRAY);
  GL_CONST(GL_SAMPLER_1D_ARRAY_SHADOW);
  GL_CONST(GL_SAMPLER_2D_ARRAY_SHADOW);
  GL_CONST(GL_SAMPLER_CUBE_SHADOW);
  GL_CONST(GL_UNSIGNED_INT_VEC2);
  GL_CONST(GL_UNSIGNED_INT_VEC3);
  GL_CONST(GL_UNSIGNED_INT_VEC4);
  GL_CONST(GL_INT_SAMPLER_1D);
  GL_CONST(GL_INT_SAMPLER_2D);
  GL_CONST(GL_INT_SAMPLER_3D);
  GL_CONST(GL_INT_SAMPLER_CUBE);
  GL_CONST(GL_INT_SAMPLER_1D_ARRAY);
  GL_CONST(GL_INT_SAMPLER_2D_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_1D);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_3D);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_CUBE);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY);
  GL_CONST(GL_QUERY_WAIT);
  GL_CONST(GL_QUERY_NO_WAIT);
  GL_CONST(GL_QUERY_BY_REGION_WAIT);
  GL_CONST(GL_QUERY_BY_REGION_NO_WAIT);
  GL_CONST(GL_BUFFER_ACCESS_FLAGS);
  GL_CONST(GL_BUFFER_MAP_LENGTH);
  GL_CONST(GL_BUFFER_MAP_OFFSET);
  GL_CONST(GL_CLAMP_VERTEX_COLOR);
  GL_CONST(GL_CLAMP_FRAGMENT_COLOR);
  GL_CONST(GL_ALPHA_INTEGER);
  GL_CONST(GL_SAMPLER_2D_RECT);
  GL_CONST(GL_SAMPLER_2D_RECT_SHADOW);
  GL_CONST(GL_SAMPLER_BUFFER);
  GL_CONST(GL_INT_SAMPLER_2D_RECT);
  GL_CONST(GL_INT_SAMPLER_BUFFER);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_RECT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_BUFFER);
  GL_CONST(GL_TEXTURE_BUFFER);
  GL_CONST(GL_MAX_TEXTURE_BUFFER_SIZE);
  GL_CONST(GL_TEXTURE_BINDING_BUFFER);
  GL_CONST(GL_TEXTURE_BUFFER_DATA_STORE_BINDING);
  GL_CONST(GL_TEXTURE_BUFFER_FORMAT);
  GL_CONST(GL_TEXTURE_RECTANGLE);
  GL_CONST(GL_TEXTURE_BINDING_RECTANGLE);
  GL_CONST(GL_PROXY_TEXTURE_RECTANGLE);
  GL_CONST(GL_MAX_RECTANGLE_TEXTURE_SIZE);
  GL_CONST(GL_RED_SNORM);
  GL_CONST(GL_RG_SNORM);
  GL_CONST(GL_RGB_SNORM);
  GL_CONST(GL_RGBA_SNORM);
  GL_CONST(GL_R8_SNORM);
  GL_CONST(GL_RG8_SNORM);
  GL_CONST(GL_RGB8_SNORM);
  GL_CONST(GL_RGBA8_SNORM);
  GL_CONST(GL_R16_SNORM);
  GL_CONST(GL_RG16_SNORM);
  GL_CONST(GL_RGB16_SNORM);
  GL_CONST(GL_RGBA16_SNORM);
  GL_CONST(GL_SIGNED_NORMALIZED);
  GL_CONST(GL_PRIMITIVE_RESTART);
  GL_CONST(GL_PRIMITIVE_RESTART_INDEX);
  GL_CONST(GL_CONTEXT_CORE_PROFILE_BIT);
  GL_CONST(GL_CONTEXT_COMPATIBILITY_PROFILE_BIT);
  GL_CONST(GL_LINES_ADJACENCY);
  GL_CONST(GL_LINE_STRIP_ADJACENCY);
  GL_CONST(GL_TRIANGLES_ADJACENCY);
  GL_CONST(GL_TRIANGLE_STRIP_ADJACENCY);
  GL_CONST(GL_PROGRAM_POINT_SIZE);
  GL_CONST(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_LAYERED);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS);
  GL_CONST(GL_GEOMETRY_SHADER);
  GL_CONST(GL_GEOMETRY_VERTICES_OUT);
  GL_CONST(GL_GEOMETRY_INPUT_TYPE);
  GL_CONST(GL_GEOMETRY_OUTPUT_TYPE);
  GL_CONST(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_GEOMETRY_OUTPUT_VERTICES);
  GL_CONST(GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_VERTEX_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_GEOMETRY_INPUT_COMPONENTS);
  GL_CONST(GL_MAX_GEOMETRY_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_FRAGMENT_INPUT_COMPONENTS);
  GL_CONST(GL_CONTEXT_PROFILE_MASK);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_DIVISOR);
  GL_CONST(GL_SAMPLE_SHADING);
  GL_CONST(GL_MIN_SAMPLE_SHADING_VALUE);
  GL_CONST(GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET);
  GL_CONST(GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET);
  GL_CONST(GL_TEXTURE_CUBE_MAP_ARRAY);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP_ARRAY);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY);
  GL_CONST(GL_SAMPLER_CUBE_MAP_ARRAY);
  GL_CONST(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW);
  GL_CONST(GL_INT_SAMPLER_CUBE_MAP_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY);
  GL_CONST(GL_TEXTURE0_ARB);
  GL_CONST(GL_TEXTURE1_ARB);
  GL_CONST(GL_TEXTURE2_ARB);
  GL_CONST(GL_TEXTURE3_ARB);
  GL_CONST(GL_TEXTURE4_ARB);
  GL_CONST(GL_TEXTURE5_ARB);
  GL_CONST(GL_TEXTURE6_ARB);
  GL_CONST(GL_TEXTURE7_ARB);
  GL_CONST(GL_TEXTURE8_ARB);
  GL_CONST(GL_TEXTURE9_ARB);
  GL_CONST(GL_TEXTURE10_ARB);
  GL_CONST(GL_TEXTURE11_ARB);
  GL_CONST(GL_TEXTURE12_ARB);
  GL_CONST(GL_TEXTURE13_ARB);
  GL_CONST(GL_TEXTURE14_ARB);
  GL_CONST(GL_TEXTURE15_ARB);
  GL_CONST(GL_TEXTURE16_ARB);
  GL_CONST(GL_TEXTURE17_ARB);
  GL_CONST(GL_TEXTURE18_ARB);
  GL_CONST(GL_TEXTURE19_ARB);
  GL_CONST(GL_TEXTURE20_ARB);
  GL_CONST(GL_TEXTURE21_ARB);
  GL_CONST(GL_TEXTURE22_ARB);
  GL_CONST(GL_TEXTURE23_ARB);
  GL_CONST(GL_TEXTURE24_ARB);
  GL_CONST(GL_TEXTURE25_ARB);
  GL_CONST(GL_TEXTURE26_ARB);
  GL_CONST(GL_TEXTURE27_ARB);
  GL_CONST(GL_TEXTURE28_ARB);
  GL_CONST(GL_TEXTURE29_ARB);
  GL_CONST(GL_TEXTURE30_ARB);
  GL_CONST(GL_TEXTURE31_ARB);
  GL_CONST(GL_ACTIVE_TEXTURE_ARB);
  GL_CONST(GL_CLIENT_ACTIVE_TEXTURE_ARB);
  GL_CONST(GL_MAX_TEXTURE_UNITS_ARB);
  GL_CONST(GL_TRANSPOSE_MODELVIEW_MATRIX_ARB);
  GL_CONST(GL_TRANSPOSE_PROJECTION_MATRIX_ARB);
  GL_CONST(GL_TRANSPOSE_TEXTURE_MATRIX_ARB);
  GL_CONST(GL_TRANSPOSE_COLOR_MATRIX_ARB);
  GL_CONST(GL_MULTISAMPLE_ARB);
  GL_CONST(GL_SAMPLE_ALPHA_TO_COVERAGE_ARB);
  GL_CONST(GL_SAMPLE_ALPHA_TO_ONE_ARB);
  GL_CONST(GL_SAMPLE_COVERAGE_ARB);
  GL_CONST(GL_SAMPLE_BUFFERS_ARB);
  GL_CONST(GL_SAMPLES_ARB);
  GL_CONST(GL_SAMPLE_COVERAGE_VALUE_ARB);
  GL_CONST(GL_SAMPLE_COVERAGE_INVERT_ARB);
  GL_CONST(GL_MULTISAMPLE_BIT_ARB);
  GL_CONST(GL_NORMAL_MAP_ARB);
  GL_CONST(GL_REFLECTION_MAP_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_ARB);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP_ARB);
  GL_CONST(GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB);
  GL_CONST(GL_COMPRESSED_ALPHA_ARB);
  GL_CONST(GL_COMPRESSED_LUMINANCE_ARB);
  GL_CONST(GL_COMPRESSED_LUMINANCE_ALPHA_ARB);
  GL_CONST(GL_COMPRESSED_INTENSITY_ARB);
  GL_CONST(GL_COMPRESSED_RGB_ARB);
  GL_CONST(GL_COMPRESSED_RGBA_ARB);
  GL_CONST(GL_TEXTURE_COMPRESSION_HINT_ARB);
  GL_CONST(GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB);
  GL_CONST(GL_TEXTURE_COMPRESSED_ARB);
  GL_CONST(GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB);
  GL_CONST(GL_COMPRESSED_TEXTURE_FORMATS_ARB);
  GL_CONST(GL_CLAMP_TO_BORDER_ARB);
  GL_CONST(GL_POINT_SIZE_MIN_ARB);
  GL_CONST(GL_POINT_SIZE_MAX_ARB);
  GL_CONST(GL_POINT_FADE_THRESHOLD_SIZE_ARB);
  GL_CONST(GL_POINT_DISTANCE_ATTENUATION_ARB);
  GL_CONST(GL_MAX_VERTEX_UNITS_ARB);
  GL_CONST(GL_ACTIVE_VERTEX_UNITS_ARB);
  GL_CONST(GL_WEIGHT_SUM_UNITY_ARB);
  GL_CONST(GL_VERTEX_BLEND_ARB);
  GL_CONST(GL_CURRENT_WEIGHT_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_TYPE_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_STRIDE_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_SIZE_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_POINTER_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_ARB);
  GL_CONST(GL_MODELVIEW0_ARB);
  GL_CONST(GL_MODELVIEW1_ARB);
  GL_CONST(GL_MODELVIEW2_ARB);
  GL_CONST(GL_MODELVIEW3_ARB);
  GL_CONST(GL_MODELVIEW4_ARB);
  GL_CONST(GL_MODELVIEW5_ARB);
  GL_CONST(GL_MODELVIEW6_ARB);
  GL_CONST(GL_MODELVIEW7_ARB);
  GL_CONST(GL_MODELVIEW8_ARB);
  GL_CONST(GL_MODELVIEW9_ARB);
  GL_CONST(GL_MODELVIEW10_ARB);
  GL_CONST(GL_MODELVIEW11_ARB);
  GL_CONST(GL_MODELVIEW12_ARB);
  GL_CONST(GL_MODELVIEW13_ARB);
  GL_CONST(GL_MODELVIEW14_ARB);
  GL_CONST(GL_MODELVIEW15_ARB);
  GL_CONST(GL_MODELVIEW16_ARB);
  GL_CONST(GL_MODELVIEW17_ARB);
  GL_CONST(GL_MODELVIEW18_ARB);
  GL_CONST(GL_MODELVIEW19_ARB);
  GL_CONST(GL_MODELVIEW20_ARB);
  GL_CONST(GL_MODELVIEW21_ARB);
  GL_CONST(GL_MODELVIEW22_ARB);
  GL_CONST(GL_MODELVIEW23_ARB);
  GL_CONST(GL_MODELVIEW24_ARB);
  GL_CONST(GL_MODELVIEW25_ARB);
  GL_CONST(GL_MODELVIEW26_ARB);
  GL_CONST(GL_MODELVIEW27_ARB);
  GL_CONST(GL_MODELVIEW28_ARB);
  GL_CONST(GL_MODELVIEW29_ARB);
  GL_CONST(GL_MODELVIEW30_ARB);
  GL_CONST(GL_MODELVIEW31_ARB);
  GL_CONST(GL_MATRIX_PALETTE_ARB);
  GL_CONST(GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB);
  GL_CONST(GL_MAX_PALETTE_MATRICES_ARB);
  GL_CONST(GL_CURRENT_PALETTE_MATRIX_ARB);
  GL_CONST(GL_MATRIX_INDEX_ARRAY_ARB);
  GL_CONST(GL_CURRENT_MATRIX_INDEX_ARB);
  GL_CONST(GL_MATRIX_INDEX_ARRAY_SIZE_ARB);
  GL_CONST(GL_MATRIX_INDEX_ARRAY_TYPE_ARB);
  GL_CONST(GL_MATRIX_INDEX_ARRAY_STRIDE_ARB);
  GL_CONST(GL_MATRIX_INDEX_ARRAY_POINTER_ARB);
  GL_CONST(GL_COMBINE_ARB);
  GL_CONST(GL_COMBINE_RGB_ARB);
  GL_CONST(GL_COMBINE_ALPHA_ARB);
  GL_CONST(GL_SOURCE0_RGB_ARB);
  GL_CONST(GL_SOURCE1_RGB_ARB);
  GL_CONST(GL_SOURCE2_RGB_ARB);
  GL_CONST(GL_SOURCE0_ALPHA_ARB);
  GL_CONST(GL_SOURCE1_ALPHA_ARB);
  GL_CONST(GL_SOURCE2_ALPHA_ARB);
  GL_CONST(GL_OPERAND0_RGB_ARB);
  GL_CONST(GL_OPERAND1_RGB_ARB);
  GL_CONST(GL_OPERAND2_RGB_ARB);
  GL_CONST(GL_OPERAND0_ALPHA_ARB);
  GL_CONST(GL_OPERAND1_ALPHA_ARB);
  GL_CONST(GL_OPERAND2_ALPHA_ARB);
  GL_CONST(GL_RGB_SCALE_ARB);
  GL_CONST(GL_ADD_SIGNED_ARB);
  GL_CONST(GL_INTERPOLATE_ARB);
  GL_CONST(GL_SUBTRACT_ARB);
  GL_CONST(GL_CONSTANT_ARB);
  GL_CONST(GL_PRIMARY_COLOR_ARB);
  GL_CONST(GL_PREVIOUS_ARB);
  GL_CONST(GL_DOT3_RGB_ARB);
  GL_CONST(GL_DOT3_RGBA_ARB);
  GL_CONST(GL_MIRRORED_REPEAT_ARB);
  GL_CONST(GL_DEPTH_COMPONENT16_ARB);
  GL_CONST(GL_DEPTH_COMPONENT24_ARB);
  GL_CONST(GL_DEPTH_COMPONENT32_ARB);
  GL_CONST(GL_TEXTURE_DEPTH_SIZE_ARB);
  GL_CONST(GL_DEPTH_TEXTURE_MODE_ARB);
  GL_CONST(GL_TEXTURE_COMPARE_MODE_ARB);
  GL_CONST(GL_TEXTURE_COMPARE_FUNC_ARB);
  GL_CONST(GL_COMPARE_R_TO_TEXTURE_ARB);
  GL_CONST(GL_TEXTURE_COMPARE_FAIL_VALUE_ARB);
  GL_CONST(GL_COLOR_SUM_ARB);
  GL_CONST(GL_VERTEX_PROGRAM_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB);
  GL_CONST(GL_CURRENT_VERTEX_ATTRIB_ARB);
  GL_CONST(GL_PROGRAM_LENGTH_ARB);
  GL_CONST(GL_PROGRAM_STRING_ARB);
  GL_CONST(GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB);
  GL_CONST(GL_MAX_PROGRAM_MATRICES_ARB);
  GL_CONST(GL_CURRENT_MATRIX_STACK_DEPTH_ARB);
  GL_CONST(GL_CURRENT_MATRIX_ARB);
  GL_CONST(GL_VERTEX_PROGRAM_POINT_SIZE_ARB);
  GL_CONST(GL_VERTEX_PROGRAM_TWO_SIDE_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB);
  GL_CONST(GL_PROGRAM_ERROR_POSITION_ARB);
  GL_CONST(GL_PROGRAM_BINDING_ARB);
  GL_CONST(GL_MAX_VERTEX_ATTRIBS_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB);
  GL_CONST(GL_PROGRAM_ERROR_STRING_ARB);
  GL_CONST(GL_PROGRAM_FORMAT_ASCII_ARB);
  GL_CONST(GL_PROGRAM_FORMAT_ARB);
  GL_CONST(GL_PROGRAM_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_TEMPORARIES_ARB);
  GL_CONST(GL_MAX_PROGRAM_TEMPORARIES_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_TEMPORARIES_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB);
  GL_CONST(GL_PROGRAM_PARAMETERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_PARAMETERS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_PARAMETERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB);
  GL_CONST(GL_PROGRAM_ATTRIBS_ARB);
  GL_CONST(GL_MAX_PROGRAM_ATTRIBS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_ATTRIBS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB);
  GL_CONST(GL_PROGRAM_ADDRESS_REGISTERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB);
  GL_CONST(GL_MAX_PROGRAM_ENV_PARAMETERS_ARB);
  GL_CONST(GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB);
  GL_CONST(GL_TRANSPOSE_CURRENT_MATRIX_ARB);
  GL_CONST(GL_MATRIX0_ARB);
  GL_CONST(GL_MATRIX1_ARB);
  GL_CONST(GL_MATRIX2_ARB);
  GL_CONST(GL_MATRIX3_ARB);
  GL_CONST(GL_MATRIX4_ARB);
  GL_CONST(GL_MATRIX5_ARB);
  GL_CONST(GL_MATRIX6_ARB);
  GL_CONST(GL_MATRIX7_ARB);
  GL_CONST(GL_MATRIX8_ARB);
  GL_CONST(GL_MATRIX9_ARB);
  GL_CONST(GL_MATRIX10_ARB);
  GL_CONST(GL_MATRIX11_ARB);
  GL_CONST(GL_MATRIX12_ARB);
  GL_CONST(GL_MATRIX13_ARB);
  GL_CONST(GL_MATRIX14_ARB);
  GL_CONST(GL_MATRIX15_ARB);
  GL_CONST(GL_MATRIX16_ARB);
  GL_CONST(GL_MATRIX17_ARB);
  GL_CONST(GL_MATRIX18_ARB);
  GL_CONST(GL_MATRIX19_ARB);
  GL_CONST(GL_MATRIX20_ARB);
  GL_CONST(GL_MATRIX21_ARB);
  GL_CONST(GL_MATRIX22_ARB);
  GL_CONST(GL_MATRIX23_ARB);
  GL_CONST(GL_MATRIX24_ARB);
  GL_CONST(GL_MATRIX25_ARB);
  GL_CONST(GL_MATRIX26_ARB);
  GL_CONST(GL_MATRIX27_ARB);
  GL_CONST(GL_MATRIX28_ARB);
  GL_CONST(GL_MATRIX29_ARB);
  GL_CONST(GL_MATRIX30_ARB);
  GL_CONST(GL_MATRIX31_ARB);
  GL_CONST(GL_FRAGMENT_PROGRAM_ARB);
  GL_CONST(GL_PROGRAM_ALU_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_TEX_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_TEX_INDIRECTIONS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB);
  GL_CONST(GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB);
  GL_CONST(GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB);
  GL_CONST(GL_MAX_TEXTURE_COORDS_ARB);
  GL_CONST(GL_MAX_TEXTURE_IMAGE_UNITS_ARB);
  GL_CONST(GL_BUFFER_SIZE_ARB);
  GL_CONST(GL_BUFFER_USAGE_ARB);
  GL_CONST(GL_ARRAY_BUFFER_ARB);
  GL_CONST(GL_ELEMENT_ARRAY_BUFFER_ARB);
  GL_CONST(GL_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_VERTEX_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_NORMAL_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_COLOR_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_INDEX_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB);
  GL_CONST(GL_READ_ONLY_ARB);
  GL_CONST(GL_WRITE_ONLY_ARB);
  GL_CONST(GL_READ_WRITE_ARB);
  GL_CONST(GL_BUFFER_ACCESS_ARB);
  GL_CONST(GL_BUFFER_MAPPED_ARB);
  GL_CONST(GL_BUFFER_MAP_POINTER_ARB);
  GL_CONST(GL_STREAM_DRAW_ARB);
  GL_CONST(GL_STREAM_READ_ARB);
  GL_CONST(GL_STREAM_COPY_ARB);
  GL_CONST(GL_STATIC_DRAW_ARB);
  GL_CONST(GL_STATIC_READ_ARB);
  GL_CONST(GL_STATIC_COPY_ARB);
  GL_CONST(GL_DYNAMIC_DRAW_ARB);
  GL_CONST(GL_DYNAMIC_READ_ARB);
  GL_CONST(GL_DYNAMIC_COPY_ARB);
  GL_CONST(GL_QUERY_COUNTER_BITS_ARB);
  GL_CONST(GL_CURRENT_QUERY_ARB);
  GL_CONST(GL_QUERY_RESULT_ARB);
  GL_CONST(GL_QUERY_RESULT_AVAILABLE_ARB);
  GL_CONST(GL_SAMPLES_PASSED_ARB);
  GL_CONST(GL_PROGRAM_OBJECT_ARB);
  GL_CONST(GL_SHADER_OBJECT_ARB);
  GL_CONST(GL_OBJECT_TYPE_ARB);
  GL_CONST(GL_OBJECT_SUBTYPE_ARB);
  GL_CONST(GL_FLOAT_VEC2_ARB);
  GL_CONST(GL_FLOAT_VEC3_ARB);
  GL_CONST(GL_FLOAT_VEC4_ARB);
  GL_CONST(GL_INT_VEC2_ARB);
  GL_CONST(GL_INT_VEC3_ARB);
  GL_CONST(GL_INT_VEC4_ARB);
  GL_CONST(GL_BOOL_ARB);
  GL_CONST(GL_BOOL_VEC2_ARB);
  GL_CONST(GL_BOOL_VEC3_ARB);
  GL_CONST(GL_BOOL_VEC4_ARB);
  GL_CONST(GL_FLOAT_MAT2_ARB);
  GL_CONST(GL_FLOAT_MAT3_ARB);
  GL_CONST(GL_FLOAT_MAT4_ARB);
  GL_CONST(GL_SAMPLER_1D_ARB);
  GL_CONST(GL_SAMPLER_2D_ARB);
  GL_CONST(GL_SAMPLER_3D_ARB);
  GL_CONST(GL_SAMPLER_CUBE_ARB);
  GL_CONST(GL_SAMPLER_1D_SHADOW_ARB);
  GL_CONST(GL_SAMPLER_2D_SHADOW_ARB);
  GL_CONST(GL_SAMPLER_2D_RECT_ARB);
  GL_CONST(GL_SAMPLER_2D_RECT_SHADOW_ARB);
  GL_CONST(GL_OBJECT_DELETE_STATUS_ARB);
  GL_CONST(GL_OBJECT_COMPILE_STATUS_ARB);
  GL_CONST(GL_OBJECT_LINK_STATUS_ARB);
  GL_CONST(GL_OBJECT_VALIDATE_STATUS_ARB);
  GL_CONST(GL_OBJECT_INFO_LOG_LENGTH_ARB);
  GL_CONST(GL_OBJECT_ATTACHED_OBJECTS_ARB);
  GL_CONST(GL_OBJECT_ACTIVE_UNIFORMS_ARB);
  GL_CONST(GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB);
  GL_CONST(GL_OBJECT_SHADER_SOURCE_LENGTH_ARB);
  GL_CONST(GL_VERTEX_SHADER_ARB);
  GL_CONST(GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB);
  GL_CONST(GL_MAX_VARYING_FLOATS_ARB);
  GL_CONST(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB);
  GL_CONST(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB);
  GL_CONST(GL_OBJECT_ACTIVE_ATTRIBUTES_ARB);
  GL_CONST(GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB);
  GL_CONST(GL_FRAGMENT_SHADER_ARB);
  GL_CONST(GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB);
  GL_CONST(GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB);
  GL_CONST(GL_SHADING_LANGUAGE_VERSION_ARB);
  GL_CONST(GL_POINT_SPRITE_ARB);
  GL_CONST(GL_COORD_REPLACE_ARB);
  GL_CONST(GL_MAX_DRAW_BUFFERS_ARB);
  GL_CONST(GL_DRAW_BUFFER0_ARB);
  GL_CONST(GL_DRAW_BUFFER1_ARB);
  GL_CONST(GL_DRAW_BUFFER2_ARB);
  GL_CONST(GL_DRAW_BUFFER3_ARB);
  GL_CONST(GL_DRAW_BUFFER4_ARB);
  GL_CONST(GL_DRAW_BUFFER5_ARB);
  GL_CONST(GL_DRAW_BUFFER6_ARB);
  GL_CONST(GL_DRAW_BUFFER7_ARB);
  GL_CONST(GL_DRAW_BUFFER8_ARB);
  GL_CONST(GL_DRAW_BUFFER9_ARB);
  GL_CONST(GL_DRAW_BUFFER10_ARB);
  GL_CONST(GL_DRAW_BUFFER11_ARB);
  GL_CONST(GL_DRAW_BUFFER12_ARB);
  GL_CONST(GL_DRAW_BUFFER13_ARB);
  GL_CONST(GL_DRAW_BUFFER14_ARB);
  GL_CONST(GL_DRAW_BUFFER15_ARB);
  GL_CONST(GL_TEXTURE_RECTANGLE_ARB);
  GL_CONST(GL_TEXTURE_BINDING_RECTANGLE_ARB);
  GL_CONST(GL_PROXY_TEXTURE_RECTANGLE_ARB);
  GL_CONST(GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB);
  GL_CONST(GL_RGBA_FLOAT_MODE_ARB);
  GL_CONST(GL_CLAMP_VERTEX_COLOR_ARB);
  GL_CONST(GL_CLAMP_FRAGMENT_COLOR_ARB);
  GL_CONST(GL_CLAMP_READ_COLOR_ARB);
  GL_CONST(GL_FIXED_ONLY_ARB);
  GL_CONST(GL_HALF_FLOAT_ARB);
  GL_CONST(GL_TEXTURE_RED_TYPE_ARB);
  GL_CONST(GL_TEXTURE_GREEN_TYPE_ARB);
  GL_CONST(GL_TEXTURE_BLUE_TYPE_ARB);
  GL_CONST(GL_TEXTURE_ALPHA_TYPE_ARB);
  GL_CONST(GL_TEXTURE_LUMINANCE_TYPE_ARB);
  GL_CONST(GL_TEXTURE_INTENSITY_TYPE_ARB);
  GL_CONST(GL_TEXTURE_DEPTH_TYPE_ARB);
  GL_CONST(GL_UNSIGNED_NORMALIZED_ARB);
  GL_CONST(GL_RGBA32F_ARB);
  GL_CONST(GL_RGB32F_ARB);
  GL_CONST(GL_ALPHA32F_ARB);
  GL_CONST(GL_INTENSITY32F_ARB);
  GL_CONST(GL_LUMINANCE32F_ARB);
  GL_CONST(GL_LUMINANCE_ALPHA32F_ARB);
  GL_CONST(GL_RGBA16F_ARB);
  GL_CONST(GL_RGB16F_ARB);
  GL_CONST(GL_ALPHA16F_ARB);
  GL_CONST(GL_INTENSITY16F_ARB);
  GL_CONST(GL_LUMINANCE16F_ARB);
  GL_CONST(GL_LUMINANCE_ALPHA16F_ARB);
  GL_CONST(GL_PIXEL_PACK_BUFFER_ARB);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER_ARB);
  GL_CONST(GL_PIXEL_PACK_BUFFER_BINDING_ARB);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER_BINDING_ARB);
  GL_CONST(GL_DEPTH_COMPONENT32F);
  GL_CONST(GL_DEPTH32F_STENCIL8);
  GL_CONST(GL_FLOAT_32_UNSIGNED_INT_24_8_REV);
  GL_CONST(GL_INVALID_FRAMEBUFFER_OPERATION);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE);
  GL_CONST(GL_FRAMEBUFFER_DEFAULT);
  GL_CONST(GL_FRAMEBUFFER_UNDEFINED);
  GL_CONST(GL_DEPTH_STENCIL_ATTACHMENT);
  GL_CONST(GL_MAX_RENDERBUFFER_SIZE);
  GL_CONST(GL_DEPTH_STENCIL);
  GL_CONST(GL_UNSIGNED_INT_24_8);
  GL_CONST(GL_DEPTH24_STENCIL8);
  GL_CONST(GL_TEXTURE_STENCIL_SIZE);
  GL_CONST(GL_TEXTURE_RED_TYPE);
  GL_CONST(GL_TEXTURE_GREEN_TYPE);
  GL_CONST(GL_TEXTURE_BLUE_TYPE);
  GL_CONST(GL_TEXTURE_ALPHA_TYPE);
  GL_CONST(GL_TEXTURE_DEPTH_TYPE);
  GL_CONST(GL_UNSIGNED_NORMALIZED);
  GL_CONST(GL_FRAMEBUFFER_BINDING);
  GL_CONST(GL_RENDERBUFFER_BINDING);
  GL_CONST(GL_READ_FRAMEBUFFER);
  GL_CONST(GL_DRAW_FRAMEBUFFER);
  GL_CONST(GL_READ_FRAMEBUFFER_BINDING);
  GL_CONST(GL_RENDERBUFFER_SAMPLES);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER);
  GL_CONST(GL_FRAMEBUFFER_COMPLETE);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER);
  GL_CONST(GL_FRAMEBUFFER_UNSUPPORTED);
  GL_CONST(GL_MAX_COLOR_ATTACHMENTS);
  GL_CONST(GL_COLOR_ATTACHMENT0);
  GL_CONST(GL_COLOR_ATTACHMENT1);
  GL_CONST(GL_COLOR_ATTACHMENT2);
  GL_CONST(GL_COLOR_ATTACHMENT3);
  GL_CONST(GL_COLOR_ATTACHMENT4);
  GL_CONST(GL_COLOR_ATTACHMENT5);
  GL_CONST(GL_COLOR_ATTACHMENT6);
  GL_CONST(GL_COLOR_ATTACHMENT7);
  GL_CONST(GL_COLOR_ATTACHMENT8);
  GL_CONST(GL_COLOR_ATTACHMENT9);
  GL_CONST(GL_COLOR_ATTACHMENT10);
  GL_CONST(GL_COLOR_ATTACHMENT11);
  GL_CONST(GL_COLOR_ATTACHMENT12);
  GL_CONST(GL_COLOR_ATTACHMENT13);
  GL_CONST(GL_COLOR_ATTACHMENT14);
  GL_CONST(GL_COLOR_ATTACHMENT15);
  GL_CONST(GL_DEPTH_ATTACHMENT);
  GL_CONST(GL_STENCIL_ATTACHMENT);
  GL_CONST(GL_FRAMEBUFFER);
  GL_CONST(GL_RENDERBUFFER);
  GL_CONST(GL_RENDERBUFFER_WIDTH);
  GL_CONST(GL_RENDERBUFFER_HEIGHT);
  GL_CONST(GL_RENDERBUFFER_INTERNAL_FORMAT);
  GL_CONST(GL_STENCIL_INDEX1);
  GL_CONST(GL_STENCIL_INDEX4);
  GL_CONST(GL_STENCIL_INDEX8);
  GL_CONST(GL_STENCIL_INDEX16);
  GL_CONST(GL_RENDERBUFFER_RED_SIZE);
  GL_CONST(GL_RENDERBUFFER_GREEN_SIZE);
  GL_CONST(GL_RENDERBUFFER_BLUE_SIZE);
  GL_CONST(GL_RENDERBUFFER_ALPHA_SIZE);
  GL_CONST(GL_RENDERBUFFER_DEPTH_SIZE);
  GL_CONST(GL_RENDERBUFFER_STENCIL_SIZE);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE);
  GL_CONST(GL_MAX_SAMPLES);
  GL_CONST(GL_INDEX);
  GL_CONST(GL_TEXTURE_LUMINANCE_TYPE);
  GL_CONST(GL_TEXTURE_INTENSITY_TYPE);
  GL_CONST(GL_FRAMEBUFFER_SRGB);
  GL_CONST(GL_LINES_ADJACENCY_ARB);
  GL_CONST(GL_LINE_STRIP_ADJACENCY_ARB);
  GL_CONST(GL_TRIANGLES_ADJACENCY_ARB);
  GL_CONST(GL_TRIANGLE_STRIP_ADJACENCY_ARB);
  GL_CONST(GL_PROGRAM_POINT_SIZE_ARB);
  GL_CONST(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB);
  GL_CONST(GL_GEOMETRY_SHADER_ARB);
  GL_CONST(GL_GEOMETRY_VERTICES_OUT_ARB);
  GL_CONST(GL_GEOMETRY_INPUT_TYPE_ARB);
  GL_CONST(GL_GEOMETRY_OUTPUT_TYPE_ARB);
  GL_CONST(GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB);
  GL_CONST(GL_MAX_VERTEX_VARYING_COMPONENTS_ARB);
  GL_CONST(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB);
  GL_CONST(GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB);
  GL_CONST(GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB);
  GL_CONST(GL_HALF_FLOAT);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB);
  GL_CONST(GL_MAP_READ_BIT);
  GL_CONST(GL_MAP_WRITE_BIT);
  GL_CONST(GL_MAP_INVALIDATE_RANGE_BIT);
  GL_CONST(GL_MAP_INVALIDATE_BUFFER_BIT);
  GL_CONST(GL_MAP_FLUSH_EXPLICIT_BIT);
  GL_CONST(GL_MAP_UNSYNCHRONIZED_BIT);
  GL_CONST(GL_TEXTURE_BUFFER_ARB);
  GL_CONST(GL_MAX_TEXTURE_BUFFER_SIZE_ARB);
  GL_CONST(GL_TEXTURE_BINDING_BUFFER_ARB);
  GL_CONST(GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB);
  GL_CONST(GL_TEXTURE_BUFFER_FORMAT_ARB);
  GL_CONST(GL_COMPRESSED_RED_RGTC1);
  GL_CONST(GL_COMPRESSED_SIGNED_RED_RGTC1);
  GL_CONST(GL_COMPRESSED_RG_RGTC2);
  GL_CONST(GL_COMPRESSED_SIGNED_RG_RGTC2);
  GL_CONST(GL_RG);
  GL_CONST(GL_RG_INTEGER);
  GL_CONST(GL_R8);
  GL_CONST(GL_R16);
  GL_CONST(GL_RG8);
  GL_CONST(GL_RG16);
  GL_CONST(GL_R16F);
  GL_CONST(GL_R32F);
  GL_CONST(GL_RG16F);
  GL_CONST(GL_RG32F);
  GL_CONST(GL_R8I);
  GL_CONST(GL_R8UI);
  GL_CONST(GL_R16I);
  GL_CONST(GL_R16UI);
  GL_CONST(GL_R32I);
  GL_CONST(GL_R32UI);
  GL_CONST(GL_RG8I);
  GL_CONST(GL_RG8UI);
  GL_CONST(GL_RG16I);
  GL_CONST(GL_RG16UI);
  GL_CONST(GL_RG32I);
  GL_CONST(GL_RG32UI);
  GL_CONST(GL_VERTEX_ARRAY_BINDING);
  GL_CONST(GL_UNIFORM_BUFFER);
  GL_CONST(GL_UNIFORM_BUFFER_BINDING);
  GL_CONST(GL_UNIFORM_BUFFER_START);
  GL_CONST(GL_UNIFORM_BUFFER_SIZE);
  GL_CONST(GL_MAX_VERTEX_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_GEOMETRY_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_FRAGMENT_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_COMBINED_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_UNIFORM_BUFFER_BINDINGS);
  GL_CONST(GL_MAX_UNIFORM_BLOCK_SIZE);
  GL_CONST(GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS);
  GL_CONST(GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT);
  GL_CONST(GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH);
  GL_CONST(GL_ACTIVE_UNIFORM_BLOCKS);
  GL_CONST(GL_UNIFORM_TYPE);
  GL_CONST(GL_UNIFORM_SIZE);
  GL_CONST(GL_UNIFORM_NAME_LENGTH);
  GL_CONST(GL_UNIFORM_BLOCK_INDEX);
  GL_CONST(GL_UNIFORM_OFFSET);
  GL_CONST(GL_UNIFORM_ARRAY_STRIDE);
  GL_CONST(GL_UNIFORM_MATRIX_STRIDE);
  GL_CONST(GL_UNIFORM_IS_ROW_MAJOR);
  GL_CONST(GL_UNIFORM_BLOCK_BINDING);
  GL_CONST(GL_UNIFORM_BLOCK_DATA_SIZE);
  GL_CONST(GL_UNIFORM_BLOCK_NAME_LENGTH);
  GL_CONST(GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS);
  GL_CONST(GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES);
  GL_CONST(GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER);
  GL_CONST(GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER);
  GL_CONST(GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER);
  GL_CONST(GL_COPY_READ_BUFFER);
  GL_CONST(GL_COPY_WRITE_BUFFER);
  GL_CONST(GL_DEPTH_CLAMP);
  GL_CONST(GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION);
  GL_CONST(GL_FIRST_VERTEX_CONVENTION);
  GL_CONST(GL_LAST_VERTEX_CONVENTION);
  GL_CONST(GL_PROVOKING_VERTEX);
  GL_CONST(GL_TEXTURE_CUBE_MAP_SEAMLESS);
  GL_CONST(GL_MAX_SERVER_WAIT_TIMEOUT);
  GL_CONST(GL_OBJECT_TYPE);
  GL_CONST(GL_SYNC_CONDITION);
  GL_CONST(GL_SYNC_STATUS);
  GL_CONST(GL_SYNC_FLAGS);
  GL_CONST(GL_SYNC_FENCE);
  GL_CONST(GL_SYNC_GPU_COMMANDS_COMPLETE);
  GL_CONST(GL_UNSIGNALED);
  GL_CONST(GL_SIGNALED);
  GL_CONST(GL_ALREADY_SIGNALED);
  GL_CONST(GL_TIMEOUT_EXPIRED);
  GL_CONST(GL_CONDITION_SATISFIED);
  GL_CONST(GL_WAIT_FAILED);
  GL_CONST(GL_SYNC_FLUSH_COMMANDS_BIT);
  GL_CONST(GL_SAMPLE_POSITION);
  GL_CONST(GL_SAMPLE_MASK);
  GL_CONST(GL_SAMPLE_MASK_VALUE);
  GL_CONST(GL_MAX_SAMPLE_MASK_WORDS);
  GL_CONST(GL_TEXTURE_2D_MULTISAMPLE);
  GL_CONST(GL_PROXY_TEXTURE_2D_MULTISAMPLE);
  GL_CONST(GL_TEXTURE_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_TEXTURE_BINDING_2D_MULTISAMPLE);
  GL_CONST(GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_TEXTURE_SAMPLES);
  GL_CONST(GL_TEXTURE_FIXED_SAMPLE_LOCATIONS);
  GL_CONST(GL_SAMPLER_2D_MULTISAMPLE);
  GL_CONST(GL_INT_SAMPLER_2D_MULTISAMPLE);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE);
  GL_CONST(GL_SAMPLER_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_MAX_COLOR_TEXTURE_SAMPLES);
  GL_CONST(GL_MAX_DEPTH_TEXTURE_SAMPLES);
  GL_CONST(GL_MAX_INTEGER_SAMPLES);
  GL_CONST(GL_SAMPLE_SHADING_ARB);
  GL_CONST(GL_MIN_SAMPLE_SHADING_VALUE_ARB);
  GL_CONST(GL_TEXTURE_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_SAMPLER_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB);
  GL_CONST(GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB);
  GL_CONST(GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB);
  GL_CONST(GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB);
  GL_CONST(GL_SHADER_INCLUDE_ARB);
  GL_CONST(GL_NAMED_STRING_LENGTH_ARB);
  GL_CONST(GL_NAMED_STRING_TYPE_ARB);
  GL_CONST(GL_COMPRESSED_RGBA_BPTC_UNORM_ARB);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB);
  GL_CONST(GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB);
  GL_CONST(GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB);
  GL_CONST(GL_SRC1_COLOR);
  GL_CONST(GL_ONE_MINUS_SRC1_COLOR);
  GL_CONST(GL_ONE_MINUS_SRC1_ALPHA);
  GL_CONST(GL_MAX_DUAL_SOURCE_DRAW_BUFFERS);
  GL_CONST(GL_ANY_SAMPLES_PASSED);
  GL_CONST(GL_SAMPLER_BINDING);
  GL_CONST(GL_RGB10_A2UI);
  GL_CONST(GL_TEXTURE_SWIZZLE_R);
  GL_CONST(GL_TEXTURE_SWIZZLE_G);
  GL_CONST(GL_TEXTURE_SWIZZLE_B);
  GL_CONST(GL_TEXTURE_SWIZZLE_A);
  GL_CONST(GL_TEXTURE_SWIZZLE_RGBA);
  GL_CONST(GL_TIME_ELAPSED);
  GL_CONST(GL_TIMESTAMP);
  GL_CONST(GL_INT_2_10_10_10_REV);
  GL_CONST(GL_DRAW_INDIRECT_BUFFER);
  GL_CONST(GL_DRAW_INDIRECT_BUFFER_BINDING);
  GL_CONST(GL_GEOMETRY_SHADER_INVOCATIONS);
  GL_CONST(GL_MAX_GEOMETRY_SHADER_INVOCATIONS);
  GL_CONST(GL_MIN_FRAGMENT_INTERPOLATION_OFFSET);
  GL_CONST(GL_MAX_FRAGMENT_INTERPOLATION_OFFSET);
  GL_CONST(GL_FRAGMENT_INTERPOLATION_OFFSET_BITS);
  GL_CONST(GL_DOUBLE_VEC2);
  GL_CONST(GL_DOUBLE_VEC3);
  GL_CONST(GL_DOUBLE_VEC4);
  GL_CONST(GL_DOUBLE_MAT2);
  GL_CONST(GL_DOUBLE_MAT3);
  GL_CONST(GL_DOUBLE_MAT4);
  GL_CONST(GL_ACTIVE_SUBROUTINES);
  GL_CONST(GL_ACTIVE_SUBROUTINE_UNIFORMS);
  GL_CONST(GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS);
  GL_CONST(GL_ACTIVE_SUBROUTINE_MAX_LENGTH);
  GL_CONST(GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH);
  GL_CONST(GL_MAX_SUBROUTINES);
  GL_CONST(GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS);
  GL_CONST(GL_NUM_COMPATIBLE_SUBROUTINES);
  GL_CONST(GL_COMPATIBLE_SUBROUTINES);
  GL_CONST(GL_PATCHES);
  GL_CONST(GL_PATCH_VERTICES);
  GL_CONST(GL_PATCH_DEFAULT_INNER_LEVEL);
  GL_CONST(GL_PATCH_DEFAULT_OUTER_LEVEL);
  GL_CONST(GL_TESS_CONTROL_OUTPUT_VERTICES);
  GL_CONST(GL_TESS_GEN_MODE);
  GL_CONST(GL_TESS_GEN_SPACING);
  GL_CONST(GL_TESS_GEN_VERTEX_ORDER);
  GL_CONST(GL_TESS_GEN_POINT_MODE);
  GL_CONST(GL_ISOLINES);
  GL_CONST(GL_FRACTIONAL_ODD);
  GL_CONST(GL_FRACTIONAL_EVEN);
  GL_CONST(GL_MAX_PATCH_VERTICES);
  GL_CONST(GL_MAX_TESS_GEN_LEVEL);
  GL_CONST(GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS);
  GL_CONST(GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_TESS_PATCH_COMPONENTS);
  GL_CONST(GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS);
  GL_CONST(GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS);
  GL_CONST(GL_MAX_TESS_CONTROL_INPUT_COMPONENTS);
  GL_CONST(GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS);
  GL_CONST(GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS);
  GL_CONST(GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS);
  GL_CONST(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER);
  GL_CONST(GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER);
  GL_CONST(GL_TESS_EVALUATION_SHADER);
  GL_CONST(GL_TESS_CONTROL_SHADER);
  GL_CONST(GL_TRANSFORM_FEEDBACK);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BINDING);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_BUFFERS);
  GL_CONST(GL_MAX_VERTEX_STREAMS);
  GL_CONST(GL_FIXED);
  GL_CONST(GL_IMPLEMENTATION_COLOR_READ_TYPE);
  GL_CONST(GL_IMPLEMENTATION_COLOR_READ_FORMAT);
  GL_CONST(GL_LOW_FLOAT);
  GL_CONST(GL_MEDIUM_FLOAT);
  GL_CONST(GL_HIGH_FLOAT);
  GL_CONST(GL_LOW_INT);
  GL_CONST(GL_MEDIUM_INT);
  GL_CONST(GL_HIGH_INT);
  GL_CONST(GL_SHADER_COMPILER);
  GL_CONST(GL_NUM_SHADER_BINARY_FORMATS);
  GL_CONST(GL_MAX_VERTEX_UNIFORM_VECTORS);
  GL_CONST(GL_MAX_VARYING_VECTORS);
  GL_CONST(GL_MAX_FRAGMENT_UNIFORM_VECTORS);
  GL_CONST(GL_PROGRAM_BINARY_RETRIEVABLE_HINT);
  GL_CONST(GL_PROGRAM_BINARY_LENGTH);
  GL_CONST(GL_NUM_PROGRAM_BINARY_FORMATS);
  GL_CONST(GL_PROGRAM_BINARY_FORMATS);
  GL_CONST(GL_VERTEX_SHADER_BIT);
  GL_CONST(GL_FRAGMENT_SHADER_BIT);
  GL_CONST(GL_GEOMETRY_SHADER_BIT);
  GL_CONST(GL_TESS_CONTROL_SHADER_BIT);
  GL_CONST(GL_TESS_EVALUATION_SHADER_BIT);
  GL_CONST(GL_PROGRAM_SEPARABLE);
  GL_CONST(GL_ACTIVE_PROGRAM);
  GL_CONST(GL_PROGRAM_PIPELINE_BINDING);
  GL_CONST(GL_MAX_VIEWPORTS);
  GL_CONST(GL_VIEWPORT_SUBPIXEL_BITS);
  GL_CONST(GL_VIEWPORT_BOUNDS_RANGE);
  GL_CONST(GL_LAYER_PROVOKING_VERTEX);
  GL_CONST(GL_VIEWPORT_INDEX_PROVOKING_VERTEX);
  GL_CONST(GL_UNDEFINED_VERTEX);
  GL_CONST(GL_SYNC_CL_EVENT_ARB);
  GL_CONST(GL_SYNC_CL_EVENT_COMPLETE_ARB);
  GL_CONST(GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB);
  GL_CONST(GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB);
  GL_CONST(GL_DEBUG_CALLBACK_FUNCTION_ARB);
  GL_CONST(GL_DEBUG_CALLBACK_USER_PARAM_ARB);
  GL_CONST(GL_DEBUG_SOURCE_API_ARB);
  GL_CONST(GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB);
  GL_CONST(GL_DEBUG_SOURCE_SHADER_COMPILER_ARB);
  GL_CONST(GL_DEBUG_SOURCE_THIRD_PARTY_ARB);
  GL_CONST(GL_DEBUG_SOURCE_APPLICATION_ARB);
  GL_CONST(GL_DEBUG_SOURCE_OTHER_ARB);
  GL_CONST(GL_DEBUG_TYPE_ERROR_ARB);
  GL_CONST(GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB);
  GL_CONST(GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB);
  GL_CONST(GL_DEBUG_TYPE_PORTABILITY_ARB);
  GL_CONST(GL_DEBUG_TYPE_PERFORMANCE_ARB);
  GL_CONST(GL_DEBUG_TYPE_OTHER_ARB);
  GL_CONST(GL_MAX_DEBUG_MESSAGE_LENGTH_ARB);
  GL_CONST(GL_MAX_DEBUG_LOGGED_MESSAGES_ARB);
  GL_CONST(GL_DEBUG_LOGGED_MESSAGES_ARB);
  GL_CONST(GL_DEBUG_SEVERITY_HIGH_ARB);
  GL_CONST(GL_DEBUG_SEVERITY_MEDIUM_ARB);
  GL_CONST(GL_DEBUG_SEVERITY_LOW_ARB);
  GL_CONST(GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB);
  GL_CONST(GL_LOSE_CONTEXT_ON_RESET_ARB);
  GL_CONST(GL_GUILTY_CONTEXT_RESET_ARB);
  GL_CONST(GL_INNOCENT_CONTEXT_RESET_ARB);
  GL_CONST(GL_UNKNOWN_CONTEXT_RESET_ARB);
  GL_CONST(GL_RESET_NOTIFICATION_STRATEGY_ARB);
  GL_CONST(GL_NO_RESET_NOTIFICATION_ARB);
  GL_CONST(GL_UNPACK_COMPRESSED_BLOCK_WIDTH);
  GL_CONST(GL_UNPACK_COMPRESSED_BLOCK_HEIGHT);
  GL_CONST(GL_UNPACK_COMPRESSED_BLOCK_DEPTH);
  GL_CONST(GL_UNPACK_COMPRESSED_BLOCK_SIZE);
  GL_CONST(GL_PACK_COMPRESSED_BLOCK_WIDTH);
  GL_CONST(GL_PACK_COMPRESSED_BLOCK_HEIGHT);
  GL_CONST(GL_PACK_COMPRESSED_BLOCK_DEPTH);
  GL_CONST(GL_PACK_COMPRESSED_BLOCK_SIZE);
  GL_CONST(GL_NUM_SAMPLE_COUNTS);
  GL_CONST(GL_MIN_MAP_BUFFER_ALIGNMENT);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_BINDING);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_START);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_SIZE);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER);
  GL_CONST(GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER);
  GL_CONST(GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_MAX_VERTEX_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_GEOMETRY_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_FRAGMENT_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_COMBINED_ATOMIC_COUNTERS);
  GL_CONST(GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE);
  GL_CONST(GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS);
  GL_CONST(GL_ACTIVE_ATOMIC_COUNTER_BUFFERS);
  GL_CONST(GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX);
  GL_CONST(GL_UNSIGNED_INT_ATOMIC_COUNTER);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT);
  GL_CONST(GL_ELEMENT_ARRAY_BARRIER_BIT);
  GL_CONST(GL_UNIFORM_BARRIER_BIT);
  GL_CONST(GL_TEXTURE_FETCH_BARRIER_BIT);
  GL_CONST(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT);
  GL_CONST(GL_COMMAND_BARRIER_BIT);
  GL_CONST(GL_PIXEL_BUFFER_BARRIER_BIT);
  GL_CONST(GL_TEXTURE_UPDATE_BARRIER_BIT);
  GL_CONST(GL_BUFFER_UPDATE_BARRIER_BIT);
  GL_CONST(GL_FRAMEBUFFER_BARRIER_BIT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BARRIER_BIT);
  GL_CONST(GL_ATOMIC_COUNTER_BARRIER_BIT);
  GL_CONST(GL_MAX_IMAGE_UNITS);
  GL_CONST(GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS);
  GL_CONST(GL_IMAGE_BINDING_NAME);
  GL_CONST(GL_IMAGE_BINDING_LEVEL);
  GL_CONST(GL_IMAGE_BINDING_LAYERED);
  GL_CONST(GL_IMAGE_BINDING_LAYER);
  GL_CONST(GL_IMAGE_BINDING_ACCESS);
  GL_CONST(GL_IMAGE_1D);
  GL_CONST(GL_IMAGE_2D);
  GL_CONST(GL_IMAGE_3D);
  GL_CONST(GL_IMAGE_2D_RECT);
  GL_CONST(GL_IMAGE_CUBE);
  GL_CONST(GL_IMAGE_BUFFER);
  GL_CONST(GL_IMAGE_1D_ARRAY);
  GL_CONST(GL_IMAGE_2D_ARRAY);
  GL_CONST(GL_IMAGE_CUBE_MAP_ARRAY);
  GL_CONST(GL_IMAGE_2D_MULTISAMPLE);
  GL_CONST(GL_IMAGE_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_INT_IMAGE_1D);
  GL_CONST(GL_INT_IMAGE_2D);
  GL_CONST(GL_INT_IMAGE_3D);
  GL_CONST(GL_INT_IMAGE_2D_RECT);
  GL_CONST(GL_INT_IMAGE_CUBE);
  GL_CONST(GL_INT_IMAGE_BUFFER);
  GL_CONST(GL_INT_IMAGE_1D_ARRAY);
  GL_CONST(GL_INT_IMAGE_2D_ARRAY);
  GL_CONST(GL_INT_IMAGE_CUBE_MAP_ARRAY);
  GL_CONST(GL_INT_IMAGE_2D_MULTISAMPLE);
  GL_CONST(GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_1D);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_3D);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_RECT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_CUBE);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_BUFFER);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_1D_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY);
  GL_CONST(GL_MAX_IMAGE_SAMPLES);
  GL_CONST(GL_IMAGE_BINDING_FORMAT);
  GL_CONST(GL_IMAGE_FORMAT_COMPATIBILITY_TYPE);
  GL_CONST(GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE);
  GL_CONST(GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS);
  GL_CONST(GL_MAX_VERTEX_IMAGE_UNIFORMS);
  GL_CONST(GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS);
  GL_CONST(GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS);
  GL_CONST(GL_MAX_GEOMETRY_IMAGE_UNIFORMS);
  GL_CONST(GL_MAX_FRAGMENT_IMAGE_UNIFORMS);
  GL_CONST(GL_MAX_COMBINED_IMAGE_UNIFORMS);
  GL_CONST(GL_TEXTURE_IMMUTABLE_FORMAT);
  GL_CONST(GL_ABGR_EXT);
  GL_CONST(GL_CONSTANT_COLOR_EXT);
  GL_CONST(GL_ONE_MINUS_CONSTANT_COLOR_EXT);
  GL_CONST(GL_CONSTANT_ALPHA_EXT);
  GL_CONST(GL_ONE_MINUS_CONSTANT_ALPHA_EXT);
  GL_CONST(GL_BLEND_COLOR_EXT);
  GL_CONST(GL_POLYGON_OFFSET_EXT);
  GL_CONST(GL_POLYGON_OFFSET_FACTOR_EXT);
  GL_CONST(GL_POLYGON_OFFSET_BIAS_EXT);
  GL_CONST(GL_ALPHA4_EXT);
  GL_CONST(GL_ALPHA8_EXT);
  GL_CONST(GL_ALPHA12_EXT);
  GL_CONST(GL_ALPHA16_EXT);
  GL_CONST(GL_LUMINANCE4_EXT);
  GL_CONST(GL_LUMINANCE8_EXT);
  GL_CONST(GL_LUMINANCE12_EXT);
  GL_CONST(GL_LUMINANCE16_EXT);
  GL_CONST(GL_LUMINANCE4_ALPHA4_EXT);
  GL_CONST(GL_LUMINANCE6_ALPHA2_EXT);
  GL_CONST(GL_LUMINANCE8_ALPHA8_EXT);
  GL_CONST(GL_LUMINANCE12_ALPHA4_EXT);
  GL_CONST(GL_LUMINANCE12_ALPHA12_EXT);
  GL_CONST(GL_LUMINANCE16_ALPHA16_EXT);
  GL_CONST(GL_INTENSITY_EXT);
  GL_CONST(GL_INTENSITY4_EXT);
  GL_CONST(GL_INTENSITY8_EXT);
  GL_CONST(GL_INTENSITY12_EXT);
  GL_CONST(GL_INTENSITY16_EXT);
  GL_CONST(GL_RGB2_EXT);
  GL_CONST(GL_RGB4_EXT);
  GL_CONST(GL_RGB5_EXT);
  GL_CONST(GL_RGB8_EXT);
  GL_CONST(GL_RGB10_EXT);
  GL_CONST(GL_RGB12_EXT);
  GL_CONST(GL_RGB16_EXT);
  GL_CONST(GL_RGBA2_EXT);
  GL_CONST(GL_RGBA4_EXT);
  GL_CONST(GL_RGB5_A1_EXT);
  GL_CONST(GL_RGBA8_EXT);
  GL_CONST(GL_RGB10_A2_EXT);
  GL_CONST(GL_RGBA12_EXT);
  GL_CONST(GL_RGBA16_EXT);
  GL_CONST(GL_TEXTURE_RED_SIZE_EXT);
  GL_CONST(GL_TEXTURE_GREEN_SIZE_EXT);
  GL_CONST(GL_TEXTURE_BLUE_SIZE_EXT);
  GL_CONST(GL_TEXTURE_ALPHA_SIZE_EXT);
  GL_CONST(GL_TEXTURE_LUMINANCE_SIZE_EXT);
  GL_CONST(GL_TEXTURE_INTENSITY_SIZE_EXT);
  GL_CONST(GL_REPLACE_EXT);
  GL_CONST(GL_PROXY_TEXTURE_1D_EXT);
  GL_CONST(GL_PROXY_TEXTURE_2D_EXT);
  GL_CONST(GL_TEXTURE_TOO_LARGE_EXT);
  GL_CONST(GL_PACK_SKIP_IMAGES_EXT);
  GL_CONST(GL_PACK_IMAGE_HEIGHT_EXT);
  GL_CONST(GL_UNPACK_SKIP_IMAGES_EXT);
  GL_CONST(GL_UNPACK_IMAGE_HEIGHT_EXT);
  GL_CONST(GL_TEXTURE_3D_EXT);
  GL_CONST(GL_PROXY_TEXTURE_3D_EXT);
  GL_CONST(GL_TEXTURE_DEPTH_EXT);
  GL_CONST(GL_TEXTURE_WRAP_R_EXT);
  GL_CONST(GL_MAX_3D_TEXTURE_SIZE_EXT);
  GL_CONST(GL_FILTER4_SGIS);
  GL_CONST(GL_TEXTURE_FILTER4_SIZE_SGIS);
  GL_CONST(GL_HISTOGRAM_EXT);
  GL_CONST(GL_PROXY_HISTOGRAM_EXT);
  GL_CONST(GL_HISTOGRAM_WIDTH_EXT);
  GL_CONST(GL_HISTOGRAM_FORMAT_EXT);
  GL_CONST(GL_HISTOGRAM_RED_SIZE_EXT);
  GL_CONST(GL_HISTOGRAM_GREEN_SIZE_EXT);
  GL_CONST(GL_HISTOGRAM_BLUE_SIZE_EXT);
  GL_CONST(GL_HISTOGRAM_ALPHA_SIZE_EXT);
  GL_CONST(GL_HISTOGRAM_LUMINANCE_SIZE_EXT);
  GL_CONST(GL_HISTOGRAM_SINK_EXT);
  GL_CONST(GL_MINMAX_EXT);
  GL_CONST(GL_MINMAX_FORMAT_EXT);
  GL_CONST(GL_MINMAX_SINK_EXT);
  GL_CONST(GL_TABLE_TOO_LARGE_EXT);
  GL_CONST(GL_CONVOLUTION_1D_EXT);
  GL_CONST(GL_CONVOLUTION_2D_EXT);
  GL_CONST(GL_SEPARABLE_2D_EXT);
  GL_CONST(GL_CONVOLUTION_BORDER_MODE_EXT);
  GL_CONST(GL_CONVOLUTION_FILTER_SCALE_EXT);
  GL_CONST(GL_CONVOLUTION_FILTER_BIAS_EXT);
  GL_CONST(GL_REDUCE_EXT);
  GL_CONST(GL_CONVOLUTION_FORMAT_EXT);
  GL_CONST(GL_CONVOLUTION_WIDTH_EXT);
  GL_CONST(GL_CONVOLUTION_HEIGHT_EXT);
  GL_CONST(GL_MAX_CONVOLUTION_WIDTH_EXT);
  GL_CONST(GL_MAX_CONVOLUTION_HEIGHT_EXT);
  GL_CONST(GL_POST_CONVOLUTION_RED_SCALE_EXT);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_SCALE_EXT);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_SCALE_EXT);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_SCALE_EXT);
  GL_CONST(GL_POST_CONVOLUTION_RED_BIAS_EXT);
  GL_CONST(GL_POST_CONVOLUTION_GREEN_BIAS_EXT);
  GL_CONST(GL_POST_CONVOLUTION_BLUE_BIAS_EXT);
  GL_CONST(GL_POST_CONVOLUTION_ALPHA_BIAS_EXT);
  GL_CONST(GL_COLOR_MATRIX_SGI);
  GL_CONST(GL_COLOR_MATRIX_STACK_DEPTH_SGI);
  GL_CONST(GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_SCALE_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_RED_BIAS_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI);
  GL_CONST(GL_COLOR_TABLE_SGI);
  GL_CONST(GL_POST_CONVOLUTION_COLOR_TABLE_SGI);
  GL_CONST(GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI);
  GL_CONST(GL_PROXY_COLOR_TABLE_SGI);
  GL_CONST(GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI);
  GL_CONST(GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI);
  GL_CONST(GL_COLOR_TABLE_SCALE_SGI);
  GL_CONST(GL_COLOR_TABLE_BIAS_SGI);
  GL_CONST(GL_COLOR_TABLE_FORMAT_SGI);
  GL_CONST(GL_COLOR_TABLE_WIDTH_SGI);
  GL_CONST(GL_COLOR_TABLE_RED_SIZE_SGI);
  GL_CONST(GL_COLOR_TABLE_GREEN_SIZE_SGI);
  GL_CONST(GL_COLOR_TABLE_BLUE_SIZE_SGI);
  GL_CONST(GL_COLOR_TABLE_ALPHA_SIZE_SGI);
  GL_CONST(GL_COLOR_TABLE_LUMINANCE_SIZE_SGI);
  GL_CONST(GL_COLOR_TABLE_INTENSITY_SIZE_SGI);
  GL_CONST(GL_PIXEL_TEXTURE_SGIS);
  GL_CONST(GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS);
  GL_CONST(GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS);
  GL_CONST(GL_PIXEL_GROUP_COLOR_SGIS);
  GL_CONST(GL_PIXEL_TEX_GEN_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_MODE_SGIX);
  GL_CONST(GL_PACK_SKIP_VOLUMES_SGIS);
  GL_CONST(GL_PACK_IMAGE_DEPTH_SGIS);
  GL_CONST(GL_UNPACK_SKIP_VOLUMES_SGIS);
  GL_CONST(GL_UNPACK_IMAGE_DEPTH_SGIS);
  GL_CONST(GL_TEXTURE_4D_SGIS);
  GL_CONST(GL_PROXY_TEXTURE_4D_SGIS);
  GL_CONST(GL_TEXTURE_4DSIZE_SGIS);
  GL_CONST(GL_TEXTURE_WRAP_Q_SGIS);
  GL_CONST(GL_MAX_4D_TEXTURE_SIZE_SGIS);
  GL_CONST(GL_TEXTURE_4D_BINDING_SGIS);
  GL_CONST(GL_TEXTURE_COLOR_TABLE_SGI);
  GL_CONST(GL_PROXY_TEXTURE_COLOR_TABLE_SGI);
  GL_CONST(GL_CMYK_EXT);
  GL_CONST(GL_CMYKA_EXT);
  GL_CONST(GL_PACK_CMYK_HINT_EXT);
  GL_CONST(GL_UNPACK_CMYK_HINT_EXT);
  GL_CONST(GL_TEXTURE_PRIORITY_EXT);
  GL_CONST(GL_TEXTURE_RESIDENT_EXT);
  GL_CONST(GL_TEXTURE_1D_BINDING_EXT);
  GL_CONST(GL_TEXTURE_2D_BINDING_EXT);
  GL_CONST(GL_TEXTURE_3D_BINDING_EXT);
  GL_CONST(GL_DETAIL_TEXTURE_2D_SGIS);
  GL_CONST(GL_DETAIL_TEXTURE_2D_BINDING_SGIS);
  GL_CONST(GL_LINEAR_DETAIL_SGIS);
  GL_CONST(GL_LINEAR_DETAIL_ALPHA_SGIS);
  GL_CONST(GL_LINEAR_DETAIL_COLOR_SGIS);
  GL_CONST(GL_DETAIL_TEXTURE_LEVEL_SGIS);
  GL_CONST(GL_DETAIL_TEXTURE_MODE_SGIS);
  GL_CONST(GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS);
  GL_CONST(GL_LINEAR_SHARPEN_SGIS);
  GL_CONST(GL_LINEAR_SHARPEN_ALPHA_SGIS);
  GL_CONST(GL_LINEAR_SHARPEN_COLOR_SGIS);
  GL_CONST(GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS);
  GL_CONST(GL_UNSIGNED_BYTE_3_3_2_EXT);
  GL_CONST(GL_UNSIGNED_SHORT_4_4_4_4_EXT);
  GL_CONST(GL_UNSIGNED_SHORT_5_5_5_1_EXT);
  GL_CONST(GL_UNSIGNED_INT_8_8_8_8_EXT);
  GL_CONST(GL_UNSIGNED_INT_10_10_10_2_EXT);
  GL_CONST(GL_TEXTURE_MIN_LOD_SGIS);
  GL_CONST(GL_TEXTURE_MAX_LOD_SGIS);
  GL_CONST(GL_TEXTURE_BASE_LEVEL_SGIS);
  GL_CONST(GL_TEXTURE_MAX_LEVEL_SGIS);
  GL_CONST(GL_MULTISAMPLE_SGIS);
  GL_CONST(GL_SAMPLE_ALPHA_TO_MASK_SGIS);
  GL_CONST(GL_SAMPLE_ALPHA_TO_ONE_SGIS);
  GL_CONST(GL_SAMPLE_MASK_SGIS);
  GL_CONST(GL_1PASS_SGIS);
  GL_CONST(GL_2PASS_0_SGIS);
  GL_CONST(GL_2PASS_1_SGIS);
  GL_CONST(GL_4PASS_0_SGIS);
  GL_CONST(GL_4PASS_1_SGIS);
  GL_CONST(GL_4PASS_2_SGIS);
  GL_CONST(GL_4PASS_3_SGIS);
  GL_CONST(GL_SAMPLE_BUFFERS_SGIS);
  GL_CONST(GL_SAMPLES_SGIS);
  GL_CONST(GL_SAMPLE_MASK_VALUE_SGIS);
  GL_CONST(GL_SAMPLE_MASK_INVERT_SGIS);
  GL_CONST(GL_SAMPLE_PATTERN_SGIS);
  GL_CONST(GL_RESCALE_NORMAL_EXT);
  GL_CONST(GL_VERTEX_ARRAY_EXT);
  GL_CONST(GL_NORMAL_ARRAY_EXT);
  GL_CONST(GL_COLOR_ARRAY_EXT);
  GL_CONST(GL_INDEX_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_EXT);
  GL_CONST(GL_EDGE_FLAG_ARRAY_EXT);
  GL_CONST(GL_VERTEX_ARRAY_SIZE_EXT);
  GL_CONST(GL_VERTEX_ARRAY_TYPE_EXT);
  GL_CONST(GL_VERTEX_ARRAY_STRIDE_EXT);
  GL_CONST(GL_VERTEX_ARRAY_COUNT_EXT);
  GL_CONST(GL_NORMAL_ARRAY_TYPE_EXT);
  GL_CONST(GL_NORMAL_ARRAY_STRIDE_EXT);
  GL_CONST(GL_NORMAL_ARRAY_COUNT_EXT);
  GL_CONST(GL_COLOR_ARRAY_SIZE_EXT);
  GL_CONST(GL_COLOR_ARRAY_TYPE_EXT);
  GL_CONST(GL_COLOR_ARRAY_STRIDE_EXT);
  GL_CONST(GL_COLOR_ARRAY_COUNT_EXT);
  GL_CONST(GL_INDEX_ARRAY_TYPE_EXT);
  GL_CONST(GL_INDEX_ARRAY_STRIDE_EXT);
  GL_CONST(GL_INDEX_ARRAY_COUNT_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_SIZE_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_TYPE_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_STRIDE_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_COUNT_EXT);
  GL_CONST(GL_EDGE_FLAG_ARRAY_STRIDE_EXT);
  GL_CONST(GL_EDGE_FLAG_ARRAY_COUNT_EXT);
  GL_CONST(GL_VERTEX_ARRAY_POINTER_EXT);
  GL_CONST(GL_NORMAL_ARRAY_POINTER_EXT);
  GL_CONST(GL_COLOR_ARRAY_POINTER_EXT);
  GL_CONST(GL_INDEX_ARRAY_POINTER_EXT);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_POINTER_EXT);
  GL_CONST(GL_EDGE_FLAG_ARRAY_POINTER_EXT);
  GL_CONST(GL_GENERATE_MIPMAP_SGIS);
  GL_CONST(GL_GENERATE_MIPMAP_HINT_SGIS);
  GL_CONST(GL_LINEAR_CLIPMAP_LINEAR_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_CENTER_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_FRAME_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_OFFSET_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX);
  GL_CONST(GL_TEXTURE_CLIPMAP_DEPTH_SGIX);
  GL_CONST(GL_MAX_CLIPMAP_DEPTH_SGIX);
  GL_CONST(GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX);
  GL_CONST(GL_NEAREST_CLIPMAP_NEAREST_SGIX);
  GL_CONST(GL_NEAREST_CLIPMAP_LINEAR_SGIX);
  GL_CONST(GL_LINEAR_CLIPMAP_NEAREST_SGIX);
  GL_CONST(GL_TEXTURE_COMPARE_SGIX);
  GL_CONST(GL_TEXTURE_COMPARE_OPERATOR_SGIX);
  GL_CONST(GL_TEXTURE_LEQUAL_R_SGIX);
  GL_CONST(GL_TEXTURE_GEQUAL_R_SGIX);
  GL_CONST(GL_CLAMP_TO_EDGE_SGIS);
  GL_CONST(GL_CLAMP_TO_BORDER_SGIS);
  GL_CONST(GL_FUNC_ADD_EXT);
  GL_CONST(GL_MIN_EXT);
  GL_CONST(GL_MAX_EXT);
  GL_CONST(GL_BLEND_EQUATION_EXT);
  GL_CONST(GL_FUNC_SUBTRACT_EXT);
  GL_CONST(GL_FUNC_REVERSE_SUBTRACT_EXT);
  GL_CONST(GL_INTERLACE_SGIX);
  GL_CONST(GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX);
  GL_CONST(GL_PIXEL_TILE_CACHE_INCREMENT_SGIX);
  GL_CONST(GL_PIXEL_TILE_WIDTH_SGIX);
  GL_CONST(GL_PIXEL_TILE_HEIGHT_SGIX);
  GL_CONST(GL_PIXEL_TILE_GRID_WIDTH_SGIX);
  GL_CONST(GL_PIXEL_TILE_GRID_HEIGHT_SGIX);
  GL_CONST(GL_PIXEL_TILE_GRID_DEPTH_SGIX);
  GL_CONST(GL_PIXEL_TILE_CACHE_SIZE_SGIX);
  GL_CONST(GL_DUAL_ALPHA4_SGIS);
  GL_CONST(GL_DUAL_ALPHA8_SGIS);
  GL_CONST(GL_DUAL_ALPHA12_SGIS);
  GL_CONST(GL_DUAL_ALPHA16_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE4_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE8_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE12_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE16_SGIS);
  GL_CONST(GL_DUAL_INTENSITY4_SGIS);
  GL_CONST(GL_DUAL_INTENSITY8_SGIS);
  GL_CONST(GL_DUAL_INTENSITY12_SGIS);
  GL_CONST(GL_DUAL_INTENSITY16_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE_ALPHA4_SGIS);
  GL_CONST(GL_DUAL_LUMINANCE_ALPHA8_SGIS);
  GL_CONST(GL_QUAD_ALPHA4_SGIS);
  GL_CONST(GL_QUAD_ALPHA8_SGIS);
  GL_CONST(GL_QUAD_LUMINANCE4_SGIS);
  GL_CONST(GL_QUAD_LUMINANCE8_SGIS);
  GL_CONST(GL_QUAD_INTENSITY4_SGIS);
  GL_CONST(GL_QUAD_INTENSITY8_SGIS);
  GL_CONST(GL_DUAL_TEXTURE_SELECT_SGIS);
  GL_CONST(GL_QUAD_TEXTURE_SELECT_SGIS);
  GL_CONST(GL_SPRITE_SGIX);
  GL_CONST(GL_SPRITE_MODE_SGIX);
  GL_CONST(GL_SPRITE_AXIS_SGIX);
  GL_CONST(GL_SPRITE_TRANSLATION_SGIX);
  GL_CONST(GL_SPRITE_AXIAL_SGIX);
  GL_CONST(GL_SPRITE_OBJECT_ALIGNED_SGIX);
  GL_CONST(GL_SPRITE_EYE_ALIGNED_SGIX);
  GL_CONST(GL_TEXTURE_MULTI_BUFFER_HINT_SGIX);
  GL_CONST(GL_POINT_SIZE_MIN_EXT);
  GL_CONST(GL_POINT_SIZE_MAX_EXT);
  GL_CONST(GL_POINT_FADE_THRESHOLD_SIZE_EXT);
  GL_CONST(GL_DISTANCE_ATTENUATION_EXT);
  GL_CONST(GL_POINT_SIZE_MIN_SGIS);
  GL_CONST(GL_POINT_SIZE_MAX_SGIS);
  GL_CONST(GL_POINT_FADE_THRESHOLD_SIZE_SGIS);
  GL_CONST(GL_DISTANCE_ATTENUATION_SGIS);
  GL_CONST(GL_INSTRUMENT_BUFFER_POINTER_SGIX);
  GL_CONST(GL_INSTRUMENT_MEASUREMENTS_SGIX);
  GL_CONST(GL_POST_TEXTURE_FILTER_BIAS_SGIX);
  GL_CONST(GL_POST_TEXTURE_FILTER_SCALE_SGIX);
  GL_CONST(GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX);
  GL_CONST(GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX);
  GL_CONST(GL_FRAMEZOOM_SGIX);
  GL_CONST(GL_FRAMEZOOM_FACTOR_SGIX);
  GL_CONST(GL_MAX_FRAMEZOOM_FACTOR_SGIX);
  GL_CONST(GL_TEXTURE_DEFORMATION_BIT_SGIX);
  GL_CONST(GL_GEOMETRY_DEFORMATION_BIT_SGIX);
  GL_CONST(GL_GEOMETRY_DEFORMATION_SGIX);
  GL_CONST(GL_TEXTURE_DEFORMATION_SGIX);
  GL_CONST(GL_DEFORMATIONS_MASK_SGIX);
  GL_CONST(GL_MAX_DEFORMATION_ORDER_SGIX);
  GL_CONST(GL_REFERENCE_PLANE_SGIX);
  GL_CONST(GL_REFERENCE_PLANE_EQUATION_SGIX);
  GL_CONST(GL_DEPTH_COMPONENT16_SGIX);
  GL_CONST(GL_DEPTH_COMPONENT24_SGIX);
  GL_CONST(GL_DEPTH_COMPONENT32_SGIX);
  GL_CONST(GL_FOG_FUNC_SGIS);
  GL_CONST(GL_FOG_FUNC_POINTS_SGIS);
  GL_CONST(GL_MAX_FOG_FUNC_POINTS_SGIS);
  GL_CONST(GL_FOG_OFFSET_SGIX);
  GL_CONST(GL_FOG_OFFSET_VALUE_SGIX);
  GL_CONST(GL_IMAGE_SCALE_X_HP);
  GL_CONST(GL_IMAGE_SCALE_Y_HP);
  GL_CONST(GL_IMAGE_TRANSLATE_X_HP);
  GL_CONST(GL_IMAGE_TRANSLATE_Y_HP);
  GL_CONST(GL_IMAGE_ROTATE_ANGLE_HP);
  GL_CONST(GL_IMAGE_ROTATE_ORIGIN_X_HP);
  GL_CONST(GL_IMAGE_ROTATE_ORIGIN_Y_HP);
  GL_CONST(GL_IMAGE_MAG_FILTER_HP);
  GL_CONST(GL_IMAGE_MIN_FILTER_HP);
  GL_CONST(GL_IMAGE_CUBIC_WEIGHT_HP);
  GL_CONST(GL_CUBIC_HP);
  GL_CONST(GL_AVERAGE_HP);
  GL_CONST(GL_IMAGE_TRANSFORM_2D_HP);
  GL_CONST(GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP);
  GL_CONST(GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP);
  GL_CONST(GL_IGNORE_BORDER_HP);
  GL_CONST(GL_CONSTANT_BORDER_HP);
  GL_CONST(GL_REPLICATE_BORDER_HP);
  GL_CONST(GL_CONVOLUTION_BORDER_COLOR_HP);
  GL_CONST(GL_TEXTURE_ENV_BIAS_SGIX);
  GL_CONST(GL_VERTEX_DATA_HINT_PGI);
  GL_CONST(GL_VERTEX_CONSISTENT_HINT_PGI);
  GL_CONST(GL_MATERIAL_SIDE_HINT_PGI);
  GL_CONST(GL_MAX_VERTEX_HINT_PGI);
  GL_CONST(GL_COLOR3_BIT_PGI);
  GL_CONST(GL_COLOR4_BIT_PGI);
  GL_CONST(GL_EDGEFLAG_BIT_PGI);
  GL_CONST(GL_INDEX_BIT_PGI);
  GL_CONST(GL_MAT_AMBIENT_BIT_PGI);
  GL_CONST(GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI);
  GL_CONST(GL_MAT_DIFFUSE_BIT_PGI);
  GL_CONST(GL_MAT_EMISSION_BIT_PGI);
  GL_CONST(GL_MAT_COLOR_INDEXES_BIT_PGI);
  GL_CONST(GL_MAT_SHININESS_BIT_PGI);
  GL_CONST(GL_MAT_SPECULAR_BIT_PGI);
  GL_CONST(GL_NORMAL_BIT_PGI);
  GL_CONST(GL_TEXCOORD1_BIT_PGI);
  GL_CONST(GL_TEXCOORD2_BIT_PGI);
  GL_CONST(GL_TEXCOORD3_BIT_PGI);
  GL_CONST(GL_TEXCOORD4_BIT_PGI);
  GL_CONST(GL_VERTEX23_BIT_PGI);
  GL_CONST(GL_VERTEX4_BIT_PGI);
  GL_CONST(GL_PREFER_DOUBLEBUFFER_HINT_PGI);
  GL_CONST(GL_CONSERVE_MEMORY_HINT_PGI);
  GL_CONST(GL_RECLAIM_MEMORY_HINT_PGI);
  GL_CONST(GL_NATIVE_GRAPHICS_HANDLE_PGI);
  GL_CONST(GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI);
  GL_CONST(GL_NATIVE_GRAPHICS_END_HINT_PGI);
  GL_CONST(GL_ALWAYS_FAST_HINT_PGI);
  GL_CONST(GL_ALWAYS_SOFT_HINT_PGI);
  GL_CONST(GL_ALLOW_DRAW_OBJ_HINT_PGI);
  GL_CONST(GL_ALLOW_DRAW_WIN_HINT_PGI);
  GL_CONST(GL_ALLOW_DRAW_FRG_HINT_PGI);
  GL_CONST(GL_ALLOW_DRAW_MEM_HINT_PGI);
  GL_CONST(GL_STRICT_DEPTHFUNC_HINT_PGI);
  GL_CONST(GL_STRICT_LIGHTING_HINT_PGI);
  GL_CONST(GL_STRICT_SCISSOR_HINT_PGI);
  GL_CONST(GL_FULL_STIPPLE_HINT_PGI);
  GL_CONST(GL_CLIP_NEAR_HINT_PGI);
  GL_CONST(GL_CLIP_FAR_HINT_PGI);
  GL_CONST(GL_WIDE_LINE_HINT_PGI);
  GL_CONST(GL_BACK_NORMALS_HINT_PGI);
  GL_CONST(GL_COLOR_INDEX1_EXT);
  GL_CONST(GL_COLOR_INDEX2_EXT);
  GL_CONST(GL_COLOR_INDEX4_EXT);
  GL_CONST(GL_COLOR_INDEX8_EXT);
  GL_CONST(GL_COLOR_INDEX12_EXT);
  GL_CONST(GL_COLOR_INDEX16_EXT);
  GL_CONST(GL_TEXTURE_INDEX_SIZE_EXT);
  GL_CONST(GL_CLIP_VOLUME_CLIPPING_HINT_EXT);
  GL_CONST(GL_LIST_PRIORITY_SGIX);
  GL_CONST(GL_IR_INSTRUMENT1_SGIX);
  GL_CONST(GL_CALLIGRAPHIC_FRAGMENT_SGIX);
  GL_CONST(GL_TEXTURE_LOD_BIAS_S_SGIX);
  GL_CONST(GL_TEXTURE_LOD_BIAS_T_SGIX);
  GL_CONST(GL_TEXTURE_LOD_BIAS_R_SGIX);
  GL_CONST(GL_SHADOW_AMBIENT_SGIX);
  GL_CONST(GL_INDEX_MATERIAL_EXT);
  GL_CONST(GL_INDEX_MATERIAL_PARAMETER_EXT);
  GL_CONST(GL_INDEX_MATERIAL_FACE_EXT);
  GL_CONST(GL_INDEX_TEST_EXT);
  GL_CONST(GL_INDEX_TEST_FUNC_EXT);
  GL_CONST(GL_INDEX_TEST_REF_EXT);
  GL_CONST(GL_IUI_V2F_EXT);
  GL_CONST(GL_IUI_V3F_EXT);
  GL_CONST(GL_IUI_N3F_V2F_EXT);
  GL_CONST(GL_IUI_N3F_V3F_EXT);
  GL_CONST(GL_T2F_IUI_V2F_EXT);
  GL_CONST(GL_T2F_IUI_V3F_EXT);
  GL_CONST(GL_T2F_IUI_N3F_V2F_EXT);
  GL_CONST(GL_T2F_IUI_N3F_V3F_EXT);
  GL_CONST(GL_ARRAY_ELEMENT_LOCK_FIRST_EXT);
  GL_CONST(GL_ARRAY_ELEMENT_LOCK_COUNT_EXT);
  GL_CONST(GL_CULL_VERTEX_EXT);
  GL_CONST(GL_CULL_VERTEX_EYE_POSITION_EXT);
  GL_CONST(GL_CULL_VERTEX_OBJECT_POSITION_EXT);
  GL_CONST(GL_YCRCB_422_SGIX);
  GL_CONST(GL_YCRCB_444_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHTING_SGIX);
  GL_CONST(GL_FRAGMENT_COLOR_MATERIAL_SGIX);
  GL_CONST(GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX);
  GL_CONST(GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX);
  GL_CONST(GL_MAX_FRAGMENT_LIGHTS_SGIX);
  GL_CONST(GL_MAX_ACTIVE_LIGHTS_SGIX);
  GL_CONST(GL_CURRENT_RASTER_NORMAL_SGIX);
  GL_CONST(GL_LIGHT_ENV_MODE_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT0_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT1_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT2_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT3_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT4_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT5_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT6_SGIX);
  GL_CONST(GL_FRAGMENT_LIGHT7_SGIX);
  GL_CONST(GL_RASTER_POSITION_UNCLIPPED_IBM);
  GL_CONST(GL_TEXTURE_LIGHTING_MODE_HP);
  GL_CONST(GL_TEXTURE_POST_SPECULAR_HP);
  GL_CONST(GL_TEXTURE_PRE_SPECULAR_HP);
  GL_CONST(GL_MAX_ELEMENTS_VERTICES_EXT);
  GL_CONST(GL_MAX_ELEMENTS_INDICES_EXT);
  GL_CONST(GL_PHONG_WIN);
  GL_CONST(GL_PHONG_HINT_WIN);
  GL_CONST(GL_FOG_SPECULAR_TEXTURE_WIN);
  GL_CONST(GL_FRAGMENT_MATERIAL_EXT);
  GL_CONST(GL_FRAGMENT_NORMAL_EXT);
  GL_CONST(GL_FRAGMENT_COLOR_EXT);
  GL_CONST(GL_ATTENUATION_EXT);
  GL_CONST(GL_SHADOW_ATTENUATION_EXT);
  GL_CONST(GL_TEXTURE_APPLICATION_MODE_EXT);
  GL_CONST(GL_TEXTURE_LIGHT_EXT);
  GL_CONST(GL_TEXTURE_MATERIAL_FACE_EXT);
  GL_CONST(GL_TEXTURE_MATERIAL_PARAMETER_EXT);
  GL_CONST(GL_ALPHA_MIN_SGIX);
  GL_CONST(GL_ALPHA_MAX_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_Q_CEILING_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_Q_ROUND_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX);
  GL_CONST(GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX);
  GL_CONST(GL_BGR_EXT);
  GL_CONST(GL_BGRA_EXT);
  GL_CONST(GL_ASYNC_MARKER_SGIX);
  GL_CONST(GL_ASYNC_TEX_IMAGE_SGIX);
  GL_CONST(GL_ASYNC_DRAW_PIXELS_SGIX);
  GL_CONST(GL_ASYNC_READ_PIXELS_SGIX);
  GL_CONST(GL_MAX_ASYNC_TEX_IMAGE_SGIX);
  GL_CONST(GL_MAX_ASYNC_DRAW_PIXELS_SGIX);
  GL_CONST(GL_MAX_ASYNC_READ_PIXELS_SGIX);
  GL_CONST(GL_ASYNC_HISTOGRAM_SGIX);
  GL_CONST(GL_MAX_ASYNC_HISTOGRAM_SGIX);
  GL_CONST(GL_PARALLEL_ARRAYS_INTEL);
  GL_CONST(GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL);
  GL_CONST(GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL);
  GL_CONST(GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL);
  GL_CONST(GL_OCCLUSION_TEST_HP);
  GL_CONST(GL_OCCLUSION_TEST_RESULT_HP);
  GL_CONST(GL_PIXEL_TRANSFORM_2D_EXT);
  GL_CONST(GL_PIXEL_MAG_FILTER_EXT);
  GL_CONST(GL_PIXEL_MIN_FILTER_EXT);
  GL_CONST(GL_PIXEL_CUBIC_WEIGHT_EXT);
  GL_CONST(GL_CUBIC_EXT);
  GL_CONST(GL_AVERAGE_EXT);
  GL_CONST(GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT);
  GL_CONST(GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT);
  GL_CONST(GL_PIXEL_TRANSFORM_2D_MATRIX_EXT);
  GL_CONST(GL_SHARED_TEXTURE_PALETTE_EXT);
  GL_CONST(GL_LIGHT_MODEL_COLOR_CONTROL_EXT);
  GL_CONST(GL_SINGLE_COLOR_EXT);
  GL_CONST(GL_SEPARATE_SPECULAR_COLOR_EXT);
  GL_CONST(GL_COLOR_SUM_EXT);
  GL_CONST(GL_CURRENT_SECONDARY_COLOR_EXT);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_SIZE_EXT);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_TYPE_EXT);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_POINTER_EXT);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_EXT);
  GL_CONST(GL_PERTURB_EXT);
  GL_CONST(GL_TEXTURE_NORMAL_EXT);
  GL_CONST(GL_FOG_COORDINATE_SOURCE_EXT);
  GL_CONST(GL_FOG_COORDINATE_EXT);
  GL_CONST(GL_FRAGMENT_DEPTH_EXT);
  GL_CONST(GL_CURRENT_FOG_COORDINATE_EXT);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_TYPE_EXT);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_STRIDE_EXT);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_POINTER_EXT);
  GL_CONST(GL_FOG_COORDINATE_ARRAY_EXT);
  GL_CONST(GL_SCREEN_COORDINATES_REND);
  GL_CONST(GL_INVERTED_SCREEN_W_REND);
  GL_CONST(GL_TANGENT_ARRAY_EXT);
  GL_CONST(GL_BINORMAL_ARRAY_EXT);
  GL_CONST(GL_CURRENT_TANGENT_EXT);
  GL_CONST(GL_CURRENT_BINORMAL_EXT);
  GL_CONST(GL_TANGENT_ARRAY_TYPE_EXT);
  GL_CONST(GL_TANGENT_ARRAY_STRIDE_EXT);
  GL_CONST(GL_BINORMAL_ARRAY_TYPE_EXT);
  GL_CONST(GL_BINORMAL_ARRAY_STRIDE_EXT);
  GL_CONST(GL_TANGENT_ARRAY_POINTER_EXT);
  GL_CONST(GL_BINORMAL_ARRAY_POINTER_EXT);
  GL_CONST(GL_MAP1_TANGENT_EXT);
  GL_CONST(GL_MAP2_TANGENT_EXT);
  GL_CONST(GL_MAP1_BINORMAL_EXT);
  GL_CONST(GL_MAP2_BINORMAL_EXT);
  GL_CONST(GL_COMBINE_EXT);
  GL_CONST(GL_COMBINE_RGB_EXT);
  GL_CONST(GL_COMBINE_ALPHA_EXT);
  GL_CONST(GL_RGB_SCALE_EXT);
  GL_CONST(GL_ADD_SIGNED_EXT);
  GL_CONST(GL_INTERPOLATE_EXT);
  GL_CONST(GL_CONSTANT_EXT);
  GL_CONST(GL_PRIMARY_COLOR_EXT);
  GL_CONST(GL_PREVIOUS_EXT);
  GL_CONST(GL_SOURCE0_RGB_EXT);
  GL_CONST(GL_SOURCE1_RGB_EXT);
  GL_CONST(GL_SOURCE2_RGB_EXT);
  GL_CONST(GL_SOURCE0_ALPHA_EXT);
  GL_CONST(GL_SOURCE1_ALPHA_EXT);
  GL_CONST(GL_SOURCE2_ALPHA_EXT);
  GL_CONST(GL_OPERAND0_RGB_EXT);
  GL_CONST(GL_OPERAND1_RGB_EXT);
  GL_CONST(GL_OPERAND2_RGB_EXT);
  GL_CONST(GL_OPERAND0_ALPHA_EXT);
  GL_CONST(GL_OPERAND1_ALPHA_EXT);
  GL_CONST(GL_OPERAND2_ALPHA_EXT);
  GL_CONST(GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE);
  GL_CONST(GL_TRANSFORM_HINT_APPLE);
  GL_CONST(GL_FOG_SCALE_SGIX);
  GL_CONST(GL_FOG_SCALE_VALUE_SGIX);
  GL_CONST(GL_UNPACK_CONSTANT_DATA_SUNX);
  GL_CONST(GL_TEXTURE_CONSTANT_DATA_SUNX);
  GL_CONST(GL_GLOBAL_ALPHA_SUN);
  GL_CONST(GL_GLOBAL_ALPHA_FACTOR_SUN);
  GL_CONST(GL_RESTART_SUN);
  GL_CONST(GL_REPLACE_MIDDLE_SUN);
  GL_CONST(GL_REPLACE_OLDEST_SUN);
  GL_CONST(GL_TRIANGLE_LIST_SUN);
  GL_CONST(GL_REPLACEMENT_CODE_SUN);
  GL_CONST(GL_REPLACEMENT_CODE_ARRAY_SUN);
  GL_CONST(GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN);
  GL_CONST(GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN);
  GL_CONST(GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN);
  GL_CONST(GL_R1UI_V3F_SUN);
  GL_CONST(GL_R1UI_C4UB_V3F_SUN);
  GL_CONST(GL_R1UI_C3F_V3F_SUN);
  GL_CONST(GL_R1UI_N3F_V3F_SUN);
  GL_CONST(GL_R1UI_C4F_N3F_V3F_SUN);
  GL_CONST(GL_R1UI_T2F_V3F_SUN);
  GL_CONST(GL_R1UI_T2F_N3F_V3F_SUN);
  GL_CONST(GL_R1UI_T2F_C4F_N3F_V3F_SUN);
  GL_CONST(GL_BLEND_DST_RGB_EXT);
  GL_CONST(GL_BLEND_SRC_RGB_EXT);
  GL_CONST(GL_BLEND_DST_ALPHA_EXT);
  GL_CONST(GL_BLEND_SRC_ALPHA_EXT);
  GL_CONST(GL_RED_MIN_CLAMP_INGR);
  GL_CONST(GL_GREEN_MIN_CLAMP_INGR);
  GL_CONST(GL_BLUE_MIN_CLAMP_INGR);
  GL_CONST(GL_ALPHA_MIN_CLAMP_INGR);
  GL_CONST(GL_RED_MAX_CLAMP_INGR);
  GL_CONST(GL_GREEN_MAX_CLAMP_INGR);
  GL_CONST(GL_BLUE_MAX_CLAMP_INGR);
  GL_CONST(GL_ALPHA_MAX_CLAMP_INGR);
  GL_CONST(GL_INTERLACE_READ_INGR);
  GL_CONST(GL_INCR_WRAP_EXT);
  GL_CONST(GL_DECR_WRAP_EXT);
  GL_CONST(GL_422_EXT);
  GL_CONST(GL_422_REV_EXT);
  GL_CONST(GL_422_AVERAGE_EXT);
  GL_CONST(GL_422_REV_AVERAGE_EXT);
  GL_CONST(GL_NORMAL_MAP_NV);
  GL_CONST(GL_REFLECTION_MAP_NV);
  GL_CONST(GL_NORMAL_MAP_EXT);
  GL_CONST(GL_REFLECTION_MAP_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_EXT);
  GL_CONST(GL_TEXTURE_BINDING_CUBE_MAP_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT);
  GL_CONST(GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT);
  GL_CONST(GL_PROXY_TEXTURE_CUBE_MAP_EXT);
  GL_CONST(GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT);
  GL_CONST(GL_WRAP_BORDER_SUN);
  GL_CONST(GL_MAX_TEXTURE_LOD_BIAS_EXT);
  GL_CONST(GL_TEXTURE_FILTER_CONTROL_EXT);
  GL_CONST(GL_TEXTURE_LOD_BIAS_EXT);
  GL_CONST(GL_TEXTURE_MAX_ANISOTROPY_EXT);
  GL_CONST(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT);
  GL_CONST(GL_MODELVIEW1_STACK_DEPTH_EXT);
  GL_CONST(GL_MODELVIEW1_MATRIX_EXT);
  GL_CONST(GL_VERTEX_WEIGHTING_EXT);
  GL_CONST(GL_MODELVIEW1_EXT);
  GL_CONST(GL_CURRENT_VERTEX_WEIGHT_EXT);
  GL_CONST(GL_VERTEX_WEIGHT_ARRAY_EXT);
  GL_CONST(GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT);
  GL_CONST(GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT);
  GL_CONST(GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT);
  GL_CONST(GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT);
  GL_CONST(GL_MAX_SHININESS_NV);
  GL_CONST(GL_MAX_SPOT_EXPONENT_NV);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_NV);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_LENGTH_NV);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_VALID_NV);
  GL_CONST(GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_POINTER_NV);
  GL_CONST(GL_REGISTER_COMBINERS_NV);
  GL_CONST(GL_VARIABLE_A_NV);
  GL_CONST(GL_VARIABLE_B_NV);
  GL_CONST(GL_VARIABLE_C_NV);
  GL_CONST(GL_VARIABLE_D_NV);
  GL_CONST(GL_VARIABLE_E_NV);
  GL_CONST(GL_VARIABLE_F_NV);
  GL_CONST(GL_VARIABLE_G_NV);
  GL_CONST(GL_CONSTANT_COLOR0_NV);
  GL_CONST(GL_CONSTANT_COLOR1_NV);
  GL_CONST(GL_PRIMARY_COLOR_NV);
  GL_CONST(GL_SECONDARY_COLOR_NV);
  GL_CONST(GL_SPARE0_NV);
  GL_CONST(GL_SPARE1_NV);
  GL_CONST(GL_DISCARD_NV);
  GL_CONST(GL_E_TIMES_F_NV);
  GL_CONST(GL_SPARE0_PLUS_SECONDARY_COLOR_NV);
  GL_CONST(GL_UNSIGNED_IDENTITY_NV);
  GL_CONST(GL_UNSIGNED_INVERT_NV);
  GL_CONST(GL_EXPAND_NORMAL_NV);
  GL_CONST(GL_EXPAND_NEGATE_NV);
  GL_CONST(GL_HALF_BIAS_NORMAL_NV);
  GL_CONST(GL_HALF_BIAS_NEGATE_NV);
  GL_CONST(GL_SIGNED_IDENTITY_NV);
  GL_CONST(GL_SIGNED_NEGATE_NV);
  GL_CONST(GL_SCALE_BY_TWO_NV);
  GL_CONST(GL_SCALE_BY_FOUR_NV);
  GL_CONST(GL_SCALE_BY_ONE_HALF_NV);
  GL_CONST(GL_BIAS_BY_NEGATIVE_ONE_HALF_NV);
  GL_CONST(GL_COMBINER_INPUT_NV);
  GL_CONST(GL_COMBINER_MAPPING_NV);
  GL_CONST(GL_COMBINER_COMPONENT_USAGE_NV);
  GL_CONST(GL_COMBINER_AB_DOT_PRODUCT_NV);
  GL_CONST(GL_COMBINER_CD_DOT_PRODUCT_NV);
  GL_CONST(GL_COMBINER_MUX_SUM_NV);
  GL_CONST(GL_COMBINER_SCALE_NV);
  GL_CONST(GL_COMBINER_BIAS_NV);
  GL_CONST(GL_COMBINER_AB_OUTPUT_NV);
  GL_CONST(GL_COMBINER_CD_OUTPUT_NV);
  GL_CONST(GL_COMBINER_SUM_OUTPUT_NV);
  GL_CONST(GL_MAX_GENERAL_COMBINERS_NV);
  GL_CONST(GL_NUM_GENERAL_COMBINERS_NV);
  GL_CONST(GL_COLOR_SUM_CLAMP_NV);
  GL_CONST(GL_COMBINER0_NV);
  GL_CONST(GL_COMBINER1_NV);
  GL_CONST(GL_COMBINER2_NV);
  GL_CONST(GL_COMBINER3_NV);
  GL_CONST(GL_COMBINER4_NV);
  GL_CONST(GL_COMBINER5_NV);
  GL_CONST(GL_COMBINER6_NV);
  GL_CONST(GL_COMBINER7_NV);
  GL_CONST(GL_FOG_DISTANCE_MODE_NV);
  GL_CONST(GL_EYE_RADIAL_NV);
  GL_CONST(GL_EYE_PLANE_ABSOLUTE_NV);
  GL_CONST(GL_EMBOSS_LIGHT_NV);
  GL_CONST(GL_EMBOSS_CONSTANT_NV);
  GL_CONST(GL_EMBOSS_MAP_NV);
  GL_CONST(GL_COMBINE4_NV);
  GL_CONST(GL_SOURCE3_RGB_NV);
  GL_CONST(GL_SOURCE3_ALPHA_NV);
  GL_CONST(GL_OPERAND3_RGB_NV);
  GL_CONST(GL_OPERAND3_ALPHA_NV);
  GL_CONST(GL_COMPRESSED_RGB_S3TC_DXT1_EXT);
  GL_CONST(GL_COMPRESSED_RGBA_S3TC_DXT1_EXT);
  GL_CONST(GL_COMPRESSED_RGBA_S3TC_DXT3_EXT);
  GL_CONST(GL_COMPRESSED_RGBA_S3TC_DXT5_EXT);
  GL_CONST(GL_PACK_SUBSAMPLE_RATE_SGIX);
  GL_CONST(GL_UNPACK_SUBSAMPLE_RATE_SGIX);
  GL_CONST(GL_PIXEL_SUBSAMPLE_4444_SGIX);
  GL_CONST(GL_PIXEL_SUBSAMPLE_2424_SGIX);
  GL_CONST(GL_PIXEL_SUBSAMPLE_4242_SGIX);
  GL_CONST(GL_YCRCB_SGIX);
  GL_CONST(GL_YCRCBA_SGIX);
  GL_CONST(GL_DEPTH_PASS_INSTRUMENT_SGIX);
  GL_CONST(GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGIX);
  GL_CONST(GL_DEPTH_PASS_INSTRUMENT_MAX_SGIX);
  GL_CONST(GL_COMPRESSED_RGB_FXT1_3DFX);
  GL_CONST(GL_COMPRESSED_RGBA_FXT1_3DFX);
  GL_CONST(GL_MULTISAMPLE_3DFX);
  GL_CONST(GL_SAMPLE_BUFFERS_3DFX);
  GL_CONST(GL_SAMPLES_3DFX);
  GL_CONST(GL_MULTISAMPLE_BIT_3DFX);
  GL_CONST(GL_MULTISAMPLE_EXT);
  GL_CONST(GL_SAMPLE_ALPHA_TO_MASK_EXT);
  GL_CONST(GL_SAMPLE_ALPHA_TO_ONE_EXT);
  GL_CONST(GL_SAMPLE_MASK_EXT);
  GL_CONST(GL_1PASS_EXT);
  GL_CONST(GL_2PASS_0_EXT);
  GL_CONST(GL_2PASS_1_EXT);
  GL_CONST(GL_4PASS_0_EXT);
  GL_CONST(GL_4PASS_1_EXT);
  GL_CONST(GL_4PASS_2_EXT);
  GL_CONST(GL_4PASS_3_EXT);
  GL_CONST(GL_SAMPLE_BUFFERS_EXT);
  GL_CONST(GL_SAMPLES_EXT);
  GL_CONST(GL_SAMPLE_MASK_VALUE_EXT);
  GL_CONST(GL_SAMPLE_MASK_INVERT_EXT);
  GL_CONST(GL_SAMPLE_PATTERN_EXT);
  GL_CONST(GL_MULTISAMPLE_BIT_EXT);
  GL_CONST(GL_VERTEX_PRECLIP_SGIX);
  GL_CONST(GL_VERTEX_PRECLIP_HINT_SGIX);
  GL_CONST(GL_CONVOLUTION_HINT_SGIX);
  GL_CONST(GL_PACK_RESAMPLE_SGIX);
  GL_CONST(GL_UNPACK_RESAMPLE_SGIX);
  GL_CONST(GL_RESAMPLE_REPLICATE_SGIX);
  GL_CONST(GL_RESAMPLE_ZERO_FILL_SGIX);
  GL_CONST(GL_RESAMPLE_DECIMATE_SGIX);
  GL_CONST(GL_EYE_DISTANCE_TO_POINT_SGIS);
  GL_CONST(GL_OBJECT_DISTANCE_TO_POINT_SGIS);
  GL_CONST(GL_EYE_DISTANCE_TO_LINE_SGIS);
  GL_CONST(GL_OBJECT_DISTANCE_TO_LINE_SGIS);
  GL_CONST(GL_EYE_POINT_SGIS);
  GL_CONST(GL_OBJECT_POINT_SGIS);
  GL_CONST(GL_EYE_LINE_SGIS);
  GL_CONST(GL_OBJECT_LINE_SGIS);
  GL_CONST(GL_TEXTURE_COLOR_WRITEMASK_SGIS);
  GL_CONST(GL_DOT3_RGB_EXT);
  GL_CONST(GL_DOT3_RGBA_EXT);
  GL_CONST(GL_MIRROR_CLAMP_ATI);
  GL_CONST(GL_MIRROR_CLAMP_TO_EDGE_ATI);
  GL_CONST(GL_ALL_COMPLETED_NV);
  GL_CONST(GL_FENCE_STATUS_NV);
  GL_CONST(GL_FENCE_CONDITION_NV);
  GL_CONST(GL_MIRRORED_REPEAT_IBM);
  GL_CONST(GL_EVAL_2D_NV);
  GL_CONST(GL_EVAL_TRIANGULAR_2D_NV);
  GL_CONST(GL_MAP_TESSELLATION_NV);
  GL_CONST(GL_MAP_ATTRIB_U_ORDER_NV);
  GL_CONST(GL_MAP_ATTRIB_V_ORDER_NV);
  GL_CONST(GL_EVAL_FRACTIONAL_TESSELLATION_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB0_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB1_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB2_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB3_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB4_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB5_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB6_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB7_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB8_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB9_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB10_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB11_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB12_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB13_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB14_NV);
  GL_CONST(GL_EVAL_VERTEX_ATTRIB15_NV);
  GL_CONST(GL_MAX_MAP_TESSELLATION_NV);
  GL_CONST(GL_MAX_RATIONAL_EVAL_ORDER_NV);
  GL_CONST(GL_DEPTH_STENCIL_NV);
  GL_CONST(GL_UNSIGNED_INT_24_8_NV);
  GL_CONST(GL_PER_STAGE_CONSTANTS_NV);
  GL_CONST(GL_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_TEXTURE_BINDING_RECTANGLE_NV);
  GL_CONST(GL_PROXY_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_MAX_RECTANGLE_TEXTURE_SIZE_NV);
  GL_CONST(GL_OFFSET_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV);
  GL_CONST(GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV);
  GL_CONST(GL_UNSIGNED_INT_S8_S8_8_8_NV);
  GL_CONST(GL_UNSIGNED_INT_8_8_S8_S8_REV_NV);
  GL_CONST(GL_DSDT_MAG_INTENSITY_NV);
  GL_CONST(GL_SHADER_CONSISTENT_NV);
  GL_CONST(GL_TEXTURE_SHADER_NV);
  GL_CONST(GL_SHADER_OPERATION_NV);
  GL_CONST(GL_CULL_MODES_NV);
  GL_CONST(GL_OFFSET_TEXTURE_MATRIX_NV);
  GL_CONST(GL_OFFSET_TEXTURE_SCALE_NV);
  GL_CONST(GL_OFFSET_TEXTURE_BIAS_NV);
  GL_CONST(GL_PREVIOUS_TEXTURE_INPUT_NV);
  GL_CONST(GL_CONST_EYE_NV);
  GL_CONST(GL_PASS_THROUGH_NV);
  GL_CONST(GL_CULL_FRAGMENT_NV);
  GL_CONST(GL_OFFSET_TEXTURE_2D_NV);
  GL_CONST(GL_DEPENDENT_AR_TEXTURE_2D_NV);
  GL_CONST(GL_DEPENDENT_GB_TEXTURE_2D_NV);
  GL_CONST(GL_DOT_PRODUCT_NV);
  GL_CONST(GL_DOT_PRODUCT_DEPTH_REPLACE_NV);
  GL_CONST(GL_DOT_PRODUCT_TEXTURE_2D_NV);
  GL_CONST(GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV);
  GL_CONST(GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV);
  GL_CONST(GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV);
  GL_CONST(GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV);
  GL_CONST(GL_HILO_NV);
  GL_CONST(GL_DSDT_NV);
  GL_CONST(GL_DSDT_MAG_NV);
  GL_CONST(GL_DSDT_MAG_VIB_NV);
  GL_CONST(GL_HILO16_NV);
  GL_CONST(GL_SIGNED_HILO_NV);
  GL_CONST(GL_SIGNED_HILO16_NV);
  GL_CONST(GL_SIGNED_RGBA_NV);
  GL_CONST(GL_SIGNED_RGBA8_NV);
  GL_CONST(GL_SIGNED_RGB_NV);
  GL_CONST(GL_SIGNED_RGB8_NV);
  GL_CONST(GL_SIGNED_LUMINANCE_NV);
  GL_CONST(GL_SIGNED_LUMINANCE8_NV);
  GL_CONST(GL_SIGNED_LUMINANCE_ALPHA_NV);
  GL_CONST(GL_SIGNED_LUMINANCE8_ALPHA8_NV);
  GL_CONST(GL_SIGNED_ALPHA_NV);
  GL_CONST(GL_SIGNED_ALPHA8_NV);
  GL_CONST(GL_SIGNED_INTENSITY_NV);
  GL_CONST(GL_SIGNED_INTENSITY8_NV);
  GL_CONST(GL_DSDT8_NV);
  GL_CONST(GL_DSDT8_MAG8_NV);
  GL_CONST(GL_DSDT8_MAG8_INTENSITY8_NV);
  GL_CONST(GL_SIGNED_RGB_UNSIGNED_ALPHA_NV);
  GL_CONST(GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV);
  GL_CONST(GL_HI_SCALE_NV);
  GL_CONST(GL_LO_SCALE_NV);
  GL_CONST(GL_DS_SCALE_NV);
  GL_CONST(GL_DT_SCALE_NV);
  GL_CONST(GL_MAGNITUDE_SCALE_NV);
  GL_CONST(GL_VIBRANCE_SCALE_NV);
  GL_CONST(GL_HI_BIAS_NV);
  GL_CONST(GL_LO_BIAS_NV);
  GL_CONST(GL_DS_BIAS_NV);
  GL_CONST(GL_DT_BIAS_NV);
  GL_CONST(GL_MAGNITUDE_BIAS_NV);
  GL_CONST(GL_VIBRANCE_BIAS_NV);
  GL_CONST(GL_TEXTURE_BORDER_VALUES_NV);
  GL_CONST(GL_TEXTURE_HI_SIZE_NV);
  GL_CONST(GL_TEXTURE_LO_SIZE_NV);
  GL_CONST(GL_TEXTURE_DS_SIZE_NV);
  GL_CONST(GL_TEXTURE_DT_SIZE_NV);
  GL_CONST(GL_TEXTURE_MAG_SIZE_NV);
  GL_CONST(GL_DOT_PRODUCT_TEXTURE_3D_NV);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV);
  GL_CONST(GL_VERTEX_PROGRAM_NV);
  GL_CONST(GL_VERTEX_STATE_PROGRAM_NV);
  GL_CONST(GL_ATTRIB_ARRAY_SIZE_NV);
  GL_CONST(GL_ATTRIB_ARRAY_STRIDE_NV);
  GL_CONST(GL_ATTRIB_ARRAY_TYPE_NV);
  GL_CONST(GL_CURRENT_ATTRIB_NV);
  GL_CONST(GL_PROGRAM_LENGTH_NV);
  GL_CONST(GL_PROGRAM_STRING_NV);
  GL_CONST(GL_MODELVIEW_PROJECTION_NV);
  GL_CONST(GL_IDENTITY_NV);
  GL_CONST(GL_INVERSE_NV);
  GL_CONST(GL_TRANSPOSE_NV);
  GL_CONST(GL_INVERSE_TRANSPOSE_NV);
  GL_CONST(GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV);
  GL_CONST(GL_MAX_TRACK_MATRICES_NV);
  GL_CONST(GL_MATRIX0_NV);
  GL_CONST(GL_MATRIX1_NV);
  GL_CONST(GL_MATRIX2_NV);
  GL_CONST(GL_MATRIX3_NV);
  GL_CONST(GL_MATRIX4_NV);
  GL_CONST(GL_MATRIX5_NV);
  GL_CONST(GL_MATRIX6_NV);
  GL_CONST(GL_MATRIX7_NV);
  GL_CONST(GL_CURRENT_MATRIX_STACK_DEPTH_NV);
  GL_CONST(GL_CURRENT_MATRIX_NV);
  GL_CONST(GL_VERTEX_PROGRAM_POINT_SIZE_NV);
  GL_CONST(GL_VERTEX_PROGRAM_TWO_SIDE_NV);
  GL_CONST(GL_PROGRAM_PARAMETER_NV);
  GL_CONST(GL_ATTRIB_ARRAY_POINTER_NV);
  GL_CONST(GL_PROGRAM_TARGET_NV);
  GL_CONST(GL_PROGRAM_RESIDENT_NV);
  GL_CONST(GL_TRACK_MATRIX_NV);
  GL_CONST(GL_TRACK_MATRIX_TRANSFORM_NV);
  GL_CONST(GL_VERTEX_PROGRAM_BINDING_NV);
  GL_CONST(GL_PROGRAM_ERROR_POSITION_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY0_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY1_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY2_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY3_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY4_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY5_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY6_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY7_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY8_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY9_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY10_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY11_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY12_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY13_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY14_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY15_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB0_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB1_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB2_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB3_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB4_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB5_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB6_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB7_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB8_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB9_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB10_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB11_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB12_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB13_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB14_4_NV);
  GL_CONST(GL_MAP1_VERTEX_ATTRIB15_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB0_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB1_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB2_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB3_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB4_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB5_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB6_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB7_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB8_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB9_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB10_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB11_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB12_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB13_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB14_4_NV);
  GL_CONST(GL_MAP2_VERTEX_ATTRIB15_4_NV);
  GL_CONST(GL_TEXTURE_MAX_CLAMP_S_SGIX);
  GL_CONST(GL_TEXTURE_MAX_CLAMP_T_SGIX);
  GL_CONST(GL_TEXTURE_MAX_CLAMP_R_SGIX);
  GL_CONST(GL_SCALEBIAS_HINT_SGIX);
  GL_CONST(GL_INTERLACE_OML);
  GL_CONST(GL_INTERLACE_READ_OML);
  GL_CONST(GL_FORMAT_SUBSAMPLE_24_24_OML);
  GL_CONST(GL_FORMAT_SUBSAMPLE_244_244_OML);
  GL_CONST(GL_PACK_RESAMPLE_OML);
  GL_CONST(GL_UNPACK_RESAMPLE_OML);
  GL_CONST(GL_RESAMPLE_REPLICATE_OML);
  GL_CONST(GL_RESAMPLE_ZERO_FILL_OML);
  GL_CONST(GL_RESAMPLE_AVERAGE_OML);
  GL_CONST(GL_RESAMPLE_DECIMATE_OML);
  GL_CONST(GL_DEPTH_STENCIL_TO_RGBA_NV);
  GL_CONST(GL_DEPTH_STENCIL_TO_BGRA_NV);
  GL_CONST(GL_BUMP_ROT_MATRIX_ATI);
  GL_CONST(GL_BUMP_ROT_MATRIX_SIZE_ATI);
  GL_CONST(GL_BUMP_NUM_TEX_UNITS_ATI);
  GL_CONST(GL_BUMP_TEX_UNITS_ATI);
  GL_CONST(GL_DUDV_ATI);
  GL_CONST(GL_DU8DV8_ATI);
  GL_CONST(GL_BUMP_ENVMAP_ATI);
  GL_CONST(GL_BUMP_TARGET_ATI);
  GL_CONST(GL_FRAGMENT_SHADER_ATI);
  GL_CONST(GL_REG_0_ATI);
  GL_CONST(GL_REG_1_ATI);
  GL_CONST(GL_REG_2_ATI);
  GL_CONST(GL_REG_3_ATI);
  GL_CONST(GL_REG_4_ATI);
  GL_CONST(GL_REG_5_ATI);
  GL_CONST(GL_REG_6_ATI);
  GL_CONST(GL_REG_7_ATI);
  GL_CONST(GL_REG_8_ATI);
  GL_CONST(GL_REG_9_ATI);
  GL_CONST(GL_REG_10_ATI);
  GL_CONST(GL_REG_11_ATI);
  GL_CONST(GL_REG_12_ATI);
  GL_CONST(GL_REG_13_ATI);
  GL_CONST(GL_REG_14_ATI);
  GL_CONST(GL_REG_15_ATI);
  GL_CONST(GL_REG_16_ATI);
  GL_CONST(GL_REG_17_ATI);
  GL_CONST(GL_REG_18_ATI);
  GL_CONST(GL_REG_19_ATI);
  GL_CONST(GL_REG_20_ATI);
  GL_CONST(GL_REG_21_ATI);
  GL_CONST(GL_REG_22_ATI);
  GL_CONST(GL_REG_23_ATI);
  GL_CONST(GL_REG_24_ATI);
  GL_CONST(GL_REG_25_ATI);
  GL_CONST(GL_REG_26_ATI);
  GL_CONST(GL_REG_27_ATI);
  GL_CONST(GL_REG_28_ATI);
  GL_CONST(GL_REG_29_ATI);
  GL_CONST(GL_REG_30_ATI);
  GL_CONST(GL_REG_31_ATI);
  GL_CONST(GL_CON_0_ATI);
  GL_CONST(GL_CON_1_ATI);
  GL_CONST(GL_CON_2_ATI);
  GL_CONST(GL_CON_3_ATI);
  GL_CONST(GL_CON_4_ATI);
  GL_CONST(GL_CON_5_ATI);
  GL_CONST(GL_CON_6_ATI);
  GL_CONST(GL_CON_7_ATI);
  GL_CONST(GL_CON_8_ATI);
  GL_CONST(GL_CON_9_ATI);
  GL_CONST(GL_CON_10_ATI);
  GL_CONST(GL_CON_11_ATI);
  GL_CONST(GL_CON_12_ATI);
  GL_CONST(GL_CON_13_ATI);
  GL_CONST(GL_CON_14_ATI);
  GL_CONST(GL_CON_15_ATI);
  GL_CONST(GL_CON_16_ATI);
  GL_CONST(GL_CON_17_ATI);
  GL_CONST(GL_CON_18_ATI);
  GL_CONST(GL_CON_19_ATI);
  GL_CONST(GL_CON_20_ATI);
  GL_CONST(GL_CON_21_ATI);
  GL_CONST(GL_CON_22_ATI);
  GL_CONST(GL_CON_23_ATI);
  GL_CONST(GL_CON_24_ATI);
  GL_CONST(GL_CON_25_ATI);
  GL_CONST(GL_CON_26_ATI);
  GL_CONST(GL_CON_27_ATI);
  GL_CONST(GL_CON_28_ATI);
  GL_CONST(GL_CON_29_ATI);
  GL_CONST(GL_CON_30_ATI);
  GL_CONST(GL_CON_31_ATI);
  GL_CONST(GL_MOV_ATI);
  GL_CONST(GL_ADD_ATI);
  GL_CONST(GL_MUL_ATI);
  GL_CONST(GL_SUB_ATI);
  GL_CONST(GL_DOT3_ATI);
  GL_CONST(GL_DOT4_ATI);
  GL_CONST(GL_MAD_ATI);
  GL_CONST(GL_LERP_ATI);
  GL_CONST(GL_CND_ATI);
  GL_CONST(GL_CND0_ATI);
  GL_CONST(GL_DOT2_ADD_ATI);
  GL_CONST(GL_SECONDARY_INTERPOLATOR_ATI);
  GL_CONST(GL_NUM_FRAGMENT_REGISTERS_ATI);
  GL_CONST(GL_NUM_FRAGMENT_CONSTANTS_ATI);
  GL_CONST(GL_NUM_PASSES_ATI);
  GL_CONST(GL_NUM_INSTRUCTIONS_PER_PASS_ATI);
  GL_CONST(GL_NUM_INSTRUCTIONS_TOTAL_ATI);
  GL_CONST(GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI);
  GL_CONST(GL_NUM_LOOPBACK_COMPONENTS_ATI);
  GL_CONST(GL_COLOR_ALPHA_PAIRING_ATI);
  GL_CONST(GL_SWIZZLE_STR_ATI);
  GL_CONST(GL_SWIZZLE_STQ_ATI);
  GL_CONST(GL_SWIZZLE_STR_DR_ATI);
  GL_CONST(GL_SWIZZLE_STQ_DQ_ATI);
  GL_CONST(GL_SWIZZLE_STRQ_ATI);
  GL_CONST(GL_SWIZZLE_STRQ_DQ_ATI);
  GL_CONST(GL_RED_BIT_ATI);
  GL_CONST(GL_GREEN_BIT_ATI);
  GL_CONST(GL_BLUE_BIT_ATI);
  GL_CONST(GL_2X_BIT_ATI);
  GL_CONST(GL_4X_BIT_ATI);
  GL_CONST(GL_8X_BIT_ATI);
  GL_CONST(GL_HALF_BIT_ATI);
  GL_CONST(GL_QUARTER_BIT_ATI);
  GL_CONST(GL_EIGHTH_BIT_ATI);
  GL_CONST(GL_SATURATE_BIT_ATI);
  GL_CONST(GL_COMP_BIT_ATI);
  GL_CONST(GL_NEGATE_BIT_ATI);
  GL_CONST(GL_BIAS_BIT_ATI);
  GL_CONST(GL_PN_TRIANGLES_ATI);
  GL_CONST(GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI);
  GL_CONST(GL_PN_TRIANGLES_POINT_MODE_ATI);
  GL_CONST(GL_PN_TRIANGLES_NORMAL_MODE_ATI);
  GL_CONST(GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI);
  GL_CONST(GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI);
  GL_CONST(GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI);
  GL_CONST(GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI);
  GL_CONST(GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI);
  GL_CONST(GL_STATIC_ATI);
  GL_CONST(GL_DYNAMIC_ATI);
  GL_CONST(GL_PRESERVE_ATI);
  GL_CONST(GL_DISCARD_ATI);
  GL_CONST(GL_OBJECT_BUFFER_SIZE_ATI);
  GL_CONST(GL_OBJECT_BUFFER_USAGE_ATI);
  GL_CONST(GL_ARRAY_OBJECT_BUFFER_ATI);
  GL_CONST(GL_ARRAY_OBJECT_OFFSET_ATI);
  GL_CONST(GL_VERTEX_SHADER_EXT);
  GL_CONST(GL_VERTEX_SHADER_BINDING_EXT);
  GL_CONST(GL_OP_INDEX_EXT);
  GL_CONST(GL_OP_NEGATE_EXT);
  GL_CONST(GL_OP_DOT3_EXT);
  GL_CONST(GL_OP_DOT4_EXT);
  GL_CONST(GL_OP_MUL_EXT);
  GL_CONST(GL_OP_ADD_EXT);
  GL_CONST(GL_OP_MADD_EXT);
  GL_CONST(GL_OP_FRAC_EXT);
  GL_CONST(GL_OP_MAX_EXT);
  GL_CONST(GL_OP_MIN_EXT);
  GL_CONST(GL_OP_SET_GE_EXT);
  GL_CONST(GL_OP_SET_LT_EXT);
  GL_CONST(GL_OP_CLAMP_EXT);
  GL_CONST(GL_OP_FLOOR_EXT);
  GL_CONST(GL_OP_ROUND_EXT);
  GL_CONST(GL_OP_EXP_BASE_2_EXT);
  GL_CONST(GL_OP_LOG_BASE_2_EXT);
  GL_CONST(GL_OP_POWER_EXT);
  GL_CONST(GL_OP_RECIP_EXT);
  GL_CONST(GL_OP_RECIP_SQRT_EXT);
  GL_CONST(GL_OP_SUB_EXT);
  GL_CONST(GL_OP_CROSS_PRODUCT_EXT);
  GL_CONST(GL_OP_MULTIPLY_MATRIX_EXT);
  GL_CONST(GL_OP_MOV_EXT);
  GL_CONST(GL_OUTPUT_VERTEX_EXT);
  GL_CONST(GL_OUTPUT_COLOR0_EXT);
  GL_CONST(GL_OUTPUT_COLOR1_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD0_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD1_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD2_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD3_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD4_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD5_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD6_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD7_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD8_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD9_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD10_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD11_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD12_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD13_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD14_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD15_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD16_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD17_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD18_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD19_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD20_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD21_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD22_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD23_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD24_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD25_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD26_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD27_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD28_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD29_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD30_EXT);
  GL_CONST(GL_OUTPUT_TEXTURE_COORD31_EXT);
  GL_CONST(GL_OUTPUT_FOG_EXT);
  GL_CONST(GL_SCALAR_EXT);
  GL_CONST(GL_VECTOR_EXT);
  GL_CONST(GL_MATRIX_EXT);
  GL_CONST(GL_VARIANT_EXT);
  GL_CONST(GL_INVARIANT_EXT);
  GL_CONST(GL_LOCAL_CONSTANT_EXT);
  GL_CONST(GL_LOCAL_EXT);
  GL_CONST(GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT);
  GL_CONST(GL_MAX_VERTEX_SHADER_VARIANTS_EXT);
  GL_CONST(GL_MAX_VERTEX_SHADER_INVARIANTS_EXT);
  GL_CONST(GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT);
  GL_CONST(GL_MAX_VERTEX_SHADER_LOCALS_EXT);
  GL_CONST(GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT);
  GL_CONST(GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT);
  GL_CONST(GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT);
  GL_CONST(GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT);
  GL_CONST(GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT);
  GL_CONST(GL_VERTEX_SHADER_INSTRUCTIONS_EXT);
  GL_CONST(GL_VERTEX_SHADER_VARIANTS_EXT);
  GL_CONST(GL_VERTEX_SHADER_INVARIANTS_EXT);
  GL_CONST(GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT);
  GL_CONST(GL_VERTEX_SHADER_LOCALS_EXT);
  GL_CONST(GL_VERTEX_SHADER_OPTIMIZED_EXT);
  GL_CONST(GL_X_EXT);
  GL_CONST(GL_Y_EXT);
  GL_CONST(GL_Z_EXT);
  GL_CONST(GL_W_EXT);
  GL_CONST(GL_NEGATIVE_X_EXT);
  GL_CONST(GL_NEGATIVE_Y_EXT);
  GL_CONST(GL_NEGATIVE_Z_EXT);
  GL_CONST(GL_NEGATIVE_W_EXT);
  GL_CONST(GL_ZERO_EXT);
  GL_CONST(GL_ONE_EXT);
  GL_CONST(GL_NEGATIVE_ONE_EXT);
  GL_CONST(GL_NORMALIZED_RANGE_EXT);
  GL_CONST(GL_FULL_RANGE_EXT);
  GL_CONST(GL_CURRENT_VERTEX_EXT);
  GL_CONST(GL_MVP_MATRIX_EXT);
  GL_CONST(GL_VARIANT_VALUE_EXT);
  GL_CONST(GL_VARIANT_DATATYPE_EXT);
  GL_CONST(GL_VARIANT_ARRAY_STRIDE_EXT);
  GL_CONST(GL_VARIANT_ARRAY_TYPE_EXT);
  GL_CONST(GL_VARIANT_ARRAY_EXT);
  GL_CONST(GL_VARIANT_ARRAY_POINTER_EXT);
  GL_CONST(GL_INVARIANT_VALUE_EXT);
  GL_CONST(GL_INVARIANT_DATATYPE_EXT);
  GL_CONST(GL_LOCAL_CONSTANT_VALUE_EXT);
  GL_CONST(GL_LOCAL_CONSTANT_DATATYPE_EXT);
  GL_CONST(GL_MAX_VERTEX_STREAMS_ATI);
  GL_CONST(GL_VERTEX_STREAM0_ATI);
  GL_CONST(GL_VERTEX_STREAM1_ATI);
  GL_CONST(GL_VERTEX_STREAM2_ATI);
  GL_CONST(GL_VERTEX_STREAM3_ATI);
  GL_CONST(GL_VERTEX_STREAM4_ATI);
  GL_CONST(GL_VERTEX_STREAM5_ATI);
  GL_CONST(GL_VERTEX_STREAM6_ATI);
  GL_CONST(GL_VERTEX_STREAM7_ATI);
  GL_CONST(GL_VERTEX_SOURCE_ATI);
  GL_CONST(GL_ELEMENT_ARRAY_ATI);
  GL_CONST(GL_ELEMENT_ARRAY_TYPE_ATI);
  GL_CONST(GL_ELEMENT_ARRAY_POINTER_ATI);
  GL_CONST(GL_QUAD_MESH_SUN);
  GL_CONST(GL_TRIANGLE_MESH_SUN);
  GL_CONST(GL_SLICE_ACCUM_SUN);
  GL_CONST(GL_MULTISAMPLE_FILTER_HINT_NV);
  GL_CONST(GL_DEPTH_CLAMP_NV);
  GL_CONST(GL_PIXEL_COUNTER_BITS_NV);
  GL_CONST(GL_CURRENT_OCCLUSION_QUERY_ID_NV);
  GL_CONST(GL_PIXEL_COUNT_NV);
  GL_CONST(GL_PIXEL_COUNT_AVAILABLE_NV);
  GL_CONST(GL_POINT_SPRITE_NV);
  GL_CONST(GL_COORD_REPLACE_NV);
  GL_CONST(GL_POINT_SPRITE_R_MODE_NV);
  GL_CONST(GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV);
  GL_CONST(GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV);
  GL_CONST(GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV);
  GL_CONST(GL_OFFSET_HILO_TEXTURE_2D_NV);
  GL_CONST(GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV);
  GL_CONST(GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV);
  GL_CONST(GL_DEPENDENT_HILO_TEXTURE_2D_NV);
  GL_CONST(GL_DEPENDENT_RGB_TEXTURE_3D_NV);
  GL_CONST(GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV);
  GL_CONST(GL_DOT_PRODUCT_PASS_THROUGH_NV);
  GL_CONST(GL_DOT_PRODUCT_TEXTURE_1D_NV);
  GL_CONST(GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV);
  GL_CONST(GL_HILO8_NV);
  GL_CONST(GL_SIGNED_HILO8_NV);
  GL_CONST(GL_FORCE_BLUE_TO_ONE_NV);
  GL_CONST(GL_STENCIL_TEST_TWO_SIDE_EXT);
  GL_CONST(GL_ACTIVE_STENCIL_FACE_EXT);
  GL_CONST(GL_TEXT_FRAGMENT_SHADER_ATI);
  GL_CONST(GL_UNPACK_CLIENT_STORAGE_APPLE);
  GL_CONST(GL_ELEMENT_ARRAY_APPLE);
  GL_CONST(GL_ELEMENT_ARRAY_TYPE_APPLE);
  GL_CONST(GL_ELEMENT_ARRAY_POINTER_APPLE);
  GL_CONST(GL_DRAW_PIXELS_APPLE);
  GL_CONST(GL_FENCE_APPLE);
  GL_CONST(GL_VERTEX_ARRAY_BINDING_APPLE);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_APPLE);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE);
  GL_CONST(GL_VERTEX_ARRAY_STORAGE_HINT_APPLE);
  GL_CONST(GL_VERTEX_ARRAY_RANGE_POINTER_APPLE);
  GL_CONST(GL_STORAGE_CLIENT_APPLE);
  GL_CONST(GL_STORAGE_CACHED_APPLE);
  GL_CONST(GL_STORAGE_SHARED_APPLE);
  GL_CONST(GL_YCBCR_422_APPLE);
  GL_CONST(GL_UNSIGNED_SHORT_8_8_APPLE);
  GL_CONST(GL_UNSIGNED_SHORT_8_8_REV_APPLE);
  GL_CONST(GL_RGB_S3TC);
  GL_CONST(GL_RGB4_S3TC);
  GL_CONST(GL_RGBA_S3TC);
  GL_CONST(GL_RGBA4_S3TC);
  GL_CONST(GL_MAX_DRAW_BUFFERS_ATI);
  GL_CONST(GL_DRAW_BUFFER0_ATI);
  GL_CONST(GL_DRAW_BUFFER1_ATI);
  GL_CONST(GL_DRAW_BUFFER2_ATI);
  GL_CONST(GL_DRAW_BUFFER3_ATI);
  GL_CONST(GL_DRAW_BUFFER4_ATI);
  GL_CONST(GL_DRAW_BUFFER5_ATI);
  GL_CONST(GL_DRAW_BUFFER6_ATI);
  GL_CONST(GL_DRAW_BUFFER7_ATI);
  GL_CONST(GL_DRAW_BUFFER8_ATI);
  GL_CONST(GL_DRAW_BUFFER9_ATI);
  GL_CONST(GL_DRAW_BUFFER10_ATI);
  GL_CONST(GL_DRAW_BUFFER11_ATI);
  GL_CONST(GL_DRAW_BUFFER12_ATI);
  GL_CONST(GL_DRAW_BUFFER13_ATI);
  GL_CONST(GL_DRAW_BUFFER14_ATI);
  GL_CONST(GL_DRAW_BUFFER15_ATI);
  GL_CONST(GL_TYPE_RGBA_FLOAT_ATI);
  GL_CONST(GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI);
  GL_CONST(GL_MODULATE_ADD_ATI);
  GL_CONST(GL_MODULATE_SIGNED_ADD_ATI);
  GL_CONST(GL_MODULATE_SUBTRACT_ATI);
  GL_CONST(GL_RGBA_FLOAT32_ATI);
  GL_CONST(GL_RGB_FLOAT32_ATI);
  GL_CONST(GL_ALPHA_FLOAT32_ATI);
  GL_CONST(GL_INTENSITY_FLOAT32_ATI);
  GL_CONST(GL_LUMINANCE_FLOAT32_ATI);
  GL_CONST(GL_LUMINANCE_ALPHA_FLOAT32_ATI);
  GL_CONST(GL_RGBA_FLOAT16_ATI);
  GL_CONST(GL_RGB_FLOAT16_ATI);
  GL_CONST(GL_ALPHA_FLOAT16_ATI);
  GL_CONST(GL_INTENSITY_FLOAT16_ATI);
  GL_CONST(GL_LUMINANCE_FLOAT16_ATI);
  GL_CONST(GL_LUMINANCE_ALPHA_FLOAT16_ATI);
  GL_CONST(GL_FLOAT_R_NV);
  GL_CONST(GL_FLOAT_RG_NV);
  GL_CONST(GL_FLOAT_RGB_NV);
  GL_CONST(GL_FLOAT_RGBA_NV);
  GL_CONST(GL_FLOAT_R16_NV);
  GL_CONST(GL_FLOAT_R32_NV);
  GL_CONST(GL_FLOAT_RG16_NV);
  GL_CONST(GL_FLOAT_RG32_NV);
  GL_CONST(GL_FLOAT_RGB16_NV);
  GL_CONST(GL_FLOAT_RGB32_NV);
  GL_CONST(GL_FLOAT_RGBA16_NV);
  GL_CONST(GL_FLOAT_RGBA32_NV);
  GL_CONST(GL_TEXTURE_FLOAT_COMPONENTS_NV);
  GL_CONST(GL_FLOAT_CLEAR_COLOR_VALUE_NV);
  GL_CONST(GL_FLOAT_RGBA_MODE_NV);
  GL_CONST(GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV);
  GL_CONST(GL_FRAGMENT_PROGRAM_NV);
  GL_CONST(GL_MAX_TEXTURE_COORDS_NV);
  GL_CONST(GL_MAX_TEXTURE_IMAGE_UNITS_NV);
  GL_CONST(GL_FRAGMENT_PROGRAM_BINDING_NV);
  GL_CONST(GL_PROGRAM_ERROR_STRING_NV);
  GL_CONST(GL_HALF_FLOAT_NV);
  GL_CONST(GL_WRITE_PIXEL_DATA_RANGE_NV);
  GL_CONST(GL_READ_PIXEL_DATA_RANGE_NV);
  GL_CONST(GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV);
  GL_CONST(GL_READ_PIXEL_DATA_RANGE_LENGTH_NV);
  GL_CONST(GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV);
  GL_CONST(GL_READ_PIXEL_DATA_RANGE_POINTER_NV);
  GL_CONST(GL_PRIMITIVE_RESTART_NV);
  GL_CONST(GL_PRIMITIVE_RESTART_INDEX_NV);
  GL_CONST(GL_TEXTURE_UNSIGNED_REMAP_MODE_NV);
  GL_CONST(GL_STENCIL_BACK_FUNC_ATI);
  GL_CONST(GL_STENCIL_BACK_FAIL_ATI);
  GL_CONST(GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI);
  GL_CONST(GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI);
  GL_CONST(GL_IMPLEMENTATION_COLOR_READ_TYPE_OES);
  GL_CONST(GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES);
  GL_CONST(GL_DEPTH_BOUNDS_TEST_EXT);
  GL_CONST(GL_DEPTH_BOUNDS_EXT);
  GL_CONST(GL_MIRROR_CLAMP_EXT);
  GL_CONST(GL_MIRROR_CLAMP_TO_EDGE_EXT);
  GL_CONST(GL_MIRROR_CLAMP_TO_BORDER_EXT);
  GL_CONST(GL_BLEND_EQUATION_RGB_EXT);
  GL_CONST(GL_BLEND_EQUATION_ALPHA_EXT);
  GL_CONST(GL_PACK_INVERT_MESA);
  GL_CONST(GL_UNSIGNED_SHORT_8_8_MESA);
  GL_CONST(GL_UNSIGNED_SHORT_8_8_REV_MESA);
  GL_CONST(GL_YCBCR_MESA);
  GL_CONST(GL_PIXEL_PACK_BUFFER_EXT);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER_EXT);
  GL_CONST(GL_PIXEL_PACK_BUFFER_BINDING_EXT);
  GL_CONST(GL_PIXEL_UNPACK_BUFFER_BINDING_EXT);
  GL_CONST(GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV);
  GL_CONST(GL_MAX_PROGRAM_CALL_DEPTH_NV);
  GL_CONST(GL_MAX_PROGRAM_IF_DEPTH_NV);
  GL_CONST(GL_MAX_PROGRAM_LOOP_DEPTH_NV);
  GL_CONST(GL_MAX_PROGRAM_LOOP_COUNT_NV);
  GL_CONST(GL_INVALID_FRAMEBUFFER_OPERATION_EXT);
  GL_CONST(GL_MAX_RENDERBUFFER_SIZE_EXT);
  GL_CONST(GL_FRAMEBUFFER_BINDING_EXT);
  GL_CONST(GL_RENDERBUFFER_BINDING_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT);
  GL_CONST(GL_FRAMEBUFFER_COMPLETE_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT);
  GL_CONST(GL_FRAMEBUFFER_UNSUPPORTED_EXT);
  GL_CONST(GL_MAX_COLOR_ATTACHMENTS_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT0_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT1_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT2_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT3_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT4_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT5_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT6_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT7_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT8_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT9_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT10_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT11_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT12_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT13_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT14_EXT);
  GL_CONST(GL_COLOR_ATTACHMENT15_EXT);
  GL_CONST(GL_DEPTH_ATTACHMENT_EXT);
  GL_CONST(GL_STENCIL_ATTACHMENT_EXT);
  GL_CONST(GL_FRAMEBUFFER_EXT);
  GL_CONST(GL_RENDERBUFFER_EXT);
  GL_CONST(GL_RENDERBUFFER_WIDTH_EXT);
  GL_CONST(GL_RENDERBUFFER_HEIGHT_EXT);
  GL_CONST(GL_RENDERBUFFER_INTERNAL_FORMAT_EXT);
  GL_CONST(GL_STENCIL_INDEX1_EXT);
  GL_CONST(GL_STENCIL_INDEX4_EXT);
  GL_CONST(GL_STENCIL_INDEX8_EXT);
  GL_CONST(GL_STENCIL_INDEX16_EXT);
  GL_CONST(GL_RENDERBUFFER_RED_SIZE_EXT);
  GL_CONST(GL_RENDERBUFFER_GREEN_SIZE_EXT);
  GL_CONST(GL_RENDERBUFFER_BLUE_SIZE_EXT);
  GL_CONST(GL_RENDERBUFFER_ALPHA_SIZE_EXT);
  GL_CONST(GL_RENDERBUFFER_DEPTH_SIZE_EXT);
  GL_CONST(GL_RENDERBUFFER_STENCIL_SIZE_EXT);
  GL_CONST(GL_DEPTH_STENCIL_EXT);
  GL_CONST(GL_UNSIGNED_INT_24_8_EXT);
  GL_CONST(GL_DEPTH24_STENCIL8_EXT);
  GL_CONST(GL_TEXTURE_STENCIL_SIZE_EXT);
  GL_CONST(GL_STENCIL_TAG_BITS_EXT);
  GL_CONST(GL_STENCIL_CLEAR_TAG_VALUE_EXT);
  GL_CONST(GL_SRGB_EXT);
  GL_CONST(GL_SRGB8_EXT);
  GL_CONST(GL_SRGB_ALPHA_EXT);
  GL_CONST(GL_SRGB8_ALPHA8_EXT);
  GL_CONST(GL_SLUMINANCE_ALPHA_EXT);
  GL_CONST(GL_SLUMINANCE8_ALPHA8_EXT);
  GL_CONST(GL_SLUMINANCE_EXT);
  GL_CONST(GL_SLUMINANCE8_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA_EXT);
  GL_CONST(GL_COMPRESSED_SLUMINANCE_EXT);
  GL_CONST(GL_COMPRESSED_SLUMINANCE_ALPHA_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_S3TC_DXT1_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT);
  GL_CONST(GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT);
  GL_CONST(GL_READ_FRAMEBUFFER_EXT);
  GL_CONST(GL_DRAW_FRAMEBUFFER_EXT);
  GL_CONST(GL_READ_FRAMEBUFFER_BINDING_EXT);
  GL_CONST(GL_RENDERBUFFER_SAMPLES_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT);
  GL_CONST(GL_MAX_SAMPLES_EXT);
  GL_CONST(GL_TEXTURE_1D_STACK_MESAX);
  GL_CONST(GL_TEXTURE_2D_STACK_MESAX);
  GL_CONST(GL_PROXY_TEXTURE_1D_STACK_MESAX);
  GL_CONST(GL_PROXY_TEXTURE_2D_STACK_MESAX);
  GL_CONST(GL_TEXTURE_1D_STACK_BINDING_MESAX);
  GL_CONST(GL_TEXTURE_2D_STACK_BINDING_MESAX);
  GL_CONST(GL_TIME_ELAPSED_EXT);
  GL_CONST(GL_BUFFER_SERIALIZED_MODIFY_APPLE);
  GL_CONST(GL_BUFFER_FLUSHING_UNMAP_APPLE);
  GL_CONST(GL_MIN_PROGRAM_TEXEL_OFFSET_NV);
  GL_CONST(GL_MAX_PROGRAM_TEXEL_OFFSET_NV);
  GL_CONST(GL_PROGRAM_ATTRIB_COMPONENTS_NV);
  GL_CONST(GL_PROGRAM_RESULT_COMPONENTS_NV);
  GL_CONST(GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV);
  GL_CONST(GL_MAX_PROGRAM_RESULT_COMPONENTS_NV);
  GL_CONST(GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV);
  GL_CONST(GL_MAX_PROGRAM_GENERIC_RESULTS_NV);
  GL_CONST(GL_LINES_ADJACENCY_EXT);
  GL_CONST(GL_LINE_STRIP_ADJACENCY_EXT);
  GL_CONST(GL_TRIANGLES_ADJACENCY_EXT);
  GL_CONST(GL_TRIANGLE_STRIP_ADJACENCY_EXT);
  GL_CONST(GL_GEOMETRY_PROGRAM_NV);
  GL_CONST(GL_MAX_PROGRAM_OUTPUT_VERTICES_NV);
  GL_CONST(GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV);
  GL_CONST(GL_GEOMETRY_VERTICES_OUT_EXT);
  GL_CONST(GL_GEOMETRY_INPUT_TYPE_EXT);
  GL_CONST(GL_GEOMETRY_OUTPUT_TYPE_EXT);
  GL_CONST(GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT);
  GL_CONST(GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT);
  GL_CONST(GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT);
  GL_CONST(GL_PROGRAM_POINT_SIZE_EXT);
  GL_CONST(GL_GEOMETRY_SHADER_EXT);
  GL_CONST(GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT);
  GL_CONST(GL_MAX_VERTEX_VARYING_COMPONENTS_EXT);
  GL_CONST(GL_MAX_VARYING_COMPONENTS_EXT);
  GL_CONST(GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT);
  GL_CONST(GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT);
  GL_CONST(GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV);
  GL_CONST(GL_SAMPLER_1D_ARRAY_EXT);
  GL_CONST(GL_SAMPLER_2D_ARRAY_EXT);
  GL_CONST(GL_SAMPLER_BUFFER_EXT);
  GL_CONST(GL_SAMPLER_1D_ARRAY_SHADOW_EXT);
  GL_CONST(GL_SAMPLER_2D_ARRAY_SHADOW_EXT);
  GL_CONST(GL_SAMPLER_CUBE_SHADOW_EXT);
  GL_CONST(GL_UNSIGNED_INT_VEC2_EXT);
  GL_CONST(GL_UNSIGNED_INT_VEC3_EXT);
  GL_CONST(GL_UNSIGNED_INT_VEC4_EXT);
  GL_CONST(GL_INT_SAMPLER_1D_EXT);
  GL_CONST(GL_INT_SAMPLER_2D_EXT);
  GL_CONST(GL_INT_SAMPLER_3D_EXT);
  GL_CONST(GL_INT_SAMPLER_CUBE_EXT);
  GL_CONST(GL_INT_SAMPLER_2D_RECT_EXT);
  GL_CONST(GL_INT_SAMPLER_1D_ARRAY_EXT);
  GL_CONST(GL_INT_SAMPLER_2D_ARRAY_EXT);
  GL_CONST(GL_INT_SAMPLER_BUFFER_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_1D_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_3D_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_CUBE_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT);
  GL_CONST(GL_R11F_G11F_B10F_EXT);
  GL_CONST(GL_UNSIGNED_INT_10F_11F_11F_REV_EXT);
  GL_CONST(GL_RGBA_SIGNED_COMPONENTS_EXT);
  GL_CONST(GL_TEXTURE_1D_ARRAY_EXT);
  GL_CONST(GL_PROXY_TEXTURE_1D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_2D_ARRAY_EXT);
  GL_CONST(GL_PROXY_TEXTURE_2D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_BINDING_1D_ARRAY_EXT);
  GL_CONST(GL_TEXTURE_BINDING_2D_ARRAY_EXT);
  GL_CONST(GL_MAX_ARRAY_TEXTURE_LAYERS_EXT);
  GL_CONST(GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT);
  GL_CONST(GL_TEXTURE_BUFFER_EXT);
  GL_CONST(GL_MAX_TEXTURE_BUFFER_SIZE_EXT);
  GL_CONST(GL_TEXTURE_BINDING_BUFFER_EXT);
  GL_CONST(GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT);
  GL_CONST(GL_TEXTURE_BUFFER_FORMAT_EXT);
  GL_CONST(GL_COMPRESSED_LUMINANCE_LATC1_EXT);
  GL_CONST(GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT);
  GL_CONST(GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT);
  GL_CONST(GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT);
  GL_CONST(GL_COMPRESSED_RED_RGTC1_EXT);
  GL_CONST(GL_COMPRESSED_SIGNED_RED_RGTC1_EXT);
  GL_CONST(GL_COMPRESSED_RED_GREEN_RGTC2_EXT);
  GL_CONST(GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT);
  GL_CONST(GL_RGB9_E5_EXT);
  GL_CONST(GL_UNSIGNED_INT_5_9_9_9_REV_EXT);
  GL_CONST(GL_TEXTURE_SHARED_SIZE_EXT);
  GL_CONST(GL_DEPTH_COMPONENT32F_NV);
  GL_CONST(GL_DEPTH32F_STENCIL8_NV);
  GL_CONST(GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV);
  GL_CONST(GL_DEPTH_BUFFER_FLOAT_MODE_NV);
  GL_CONST(GL_RENDERBUFFER_COVERAGE_SAMPLES_NV);
  GL_CONST(GL_RENDERBUFFER_COLOR_SAMPLES_NV);
  GL_CONST(GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV);
  GL_CONST(GL_MULTISAMPLE_COVERAGE_MODES_NV);
  GL_CONST(GL_FRAMEBUFFER_SRGB_EXT);
  GL_CONST(GL_FRAMEBUFFER_SRGB_CAPABLE_EXT);
  GL_CONST(GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV);
  GL_CONST(GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV);
  GL_CONST(GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV);
  GL_CONST(GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV);
  GL_CONST(GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV);
  GL_CONST(GL_BACK_PRIMARY_COLOR_NV);
  GL_CONST(GL_BACK_SECONDARY_COLOR_NV);
  GL_CONST(GL_TEXTURE_COORD_NV);
  GL_CONST(GL_CLIP_DISTANCE_NV);
  GL_CONST(GL_VERTEX_ID_NV);
  GL_CONST(GL_PRIMITIVE_ID_NV);
  GL_CONST(GL_GENERIC_ATTRIB_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_ATTRIBS_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV);
  GL_CONST(GL_ACTIVE_VARYINGS_NV);
  GL_CONST(GL_ACTIVE_VARYING_MAX_LENGTH_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_VARYINGS_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_START_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_RECORD_NV);
  GL_CONST(GL_PRIMITIVES_GENERATED_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV);
  GL_CONST(GL_RASTERIZER_DISCARD_NV);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_ATTRIBS_NV);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV);
  GL_CONST(GL_INTERLEAVED_ATTRIBS_NV);
  GL_CONST(GL_SEPARATE_ATTRIBS_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV);
  GL_CONST(GL_LAYER_NV);
  GL_CONST(GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT);
  GL_CONST(GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT);
  GL_CONST(GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT);
  GL_CONST(GL_MAX_BINDABLE_UNIFORM_SIZE_EXT);
  GL_CONST(GL_UNIFORM_BUFFER_EXT);
  GL_CONST(GL_UNIFORM_BUFFER_BINDING_EXT);
  GL_CONST(GL_RGBA32UI_EXT);
  GL_CONST(GL_RGB32UI_EXT);
  GL_CONST(GL_ALPHA32UI_EXT);
  GL_CONST(GL_INTENSITY32UI_EXT);
  GL_CONST(GL_LUMINANCE32UI_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA32UI_EXT);
  GL_CONST(GL_RGBA16UI_EXT);
  GL_CONST(GL_RGB16UI_EXT);
  GL_CONST(GL_ALPHA16UI_EXT);
  GL_CONST(GL_INTENSITY16UI_EXT);
  GL_CONST(GL_LUMINANCE16UI_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA16UI_EXT);
  GL_CONST(GL_RGBA8UI_EXT);
  GL_CONST(GL_RGB8UI_EXT);
  GL_CONST(GL_ALPHA8UI_EXT);
  GL_CONST(GL_INTENSITY8UI_EXT);
  GL_CONST(GL_LUMINANCE8UI_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA8UI_EXT);
  GL_CONST(GL_RGBA32I_EXT);
  GL_CONST(GL_RGB32I_EXT);
  GL_CONST(GL_ALPHA32I_EXT);
  GL_CONST(GL_INTENSITY32I_EXT);
  GL_CONST(GL_LUMINANCE32I_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA32I_EXT);
  GL_CONST(GL_RGBA16I_EXT);
  GL_CONST(GL_RGB16I_EXT);
  GL_CONST(GL_ALPHA16I_EXT);
  GL_CONST(GL_INTENSITY16I_EXT);
  GL_CONST(GL_LUMINANCE16I_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA16I_EXT);
  GL_CONST(GL_RGBA8I_EXT);
  GL_CONST(GL_RGB8I_EXT);
  GL_CONST(GL_ALPHA8I_EXT);
  GL_CONST(GL_INTENSITY8I_EXT);
  GL_CONST(GL_LUMINANCE8I_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA8I_EXT);
  GL_CONST(GL_RED_INTEGER_EXT);
  GL_CONST(GL_GREEN_INTEGER_EXT);
  GL_CONST(GL_BLUE_INTEGER_EXT);
  GL_CONST(GL_ALPHA_INTEGER_EXT);
  GL_CONST(GL_RGB_INTEGER_EXT);
  GL_CONST(GL_RGBA_INTEGER_EXT);
  GL_CONST(GL_BGR_INTEGER_EXT);
  GL_CONST(GL_BGRA_INTEGER_EXT);
  GL_CONST(GL_LUMINANCE_INTEGER_EXT);
  GL_CONST(GL_LUMINANCE_ALPHA_INTEGER_EXT);
  GL_CONST(GL_RGBA_INTEGER_MODE_EXT);
  GL_CONST(GL_QUERY_WAIT_NV);
  GL_CONST(GL_QUERY_NO_WAIT_NV);
  GL_CONST(GL_QUERY_BY_REGION_WAIT_NV);
  GL_CONST(GL_QUERY_BY_REGION_NO_WAIT_NV);
  GL_CONST(GL_FRAME_NV);
  GL_CONST(GL_FIELDS_NV);
  GL_CONST(GL_CURRENT_TIME_NV);
  GL_CONST(GL_NUM_FILL_STREAMS_NV);
  GL_CONST(GL_PRESENT_TIME_NV);
  GL_CONST(GL_PRESENT_DURATION_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT);
  GL_CONST(GL_INTERLEAVED_ATTRIBS_EXT);
  GL_CONST(GL_SEPARATE_ATTRIBS_EXT);
  GL_CONST(GL_PRIMITIVES_GENERATED_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT);
  GL_CONST(GL_RASTERIZER_DISCARD_EXT);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT);
  GL_CONST(GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_VARYINGS_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT);
  GL_CONST(GL_PROGRAM_MATRIX_EXT);
  GL_CONST(GL_TRANSPOSE_PROGRAM_MATRIX_EXT);
  GL_CONST(GL_PROGRAM_MATRIX_STACK_DEPTH_EXT);
  GL_CONST(GL_TEXTURE_SWIZZLE_R_EXT);
  GL_CONST(GL_TEXTURE_SWIZZLE_G_EXT);
  GL_CONST(GL_TEXTURE_SWIZZLE_B_EXT);
  GL_CONST(GL_TEXTURE_SWIZZLE_A_EXT);
  GL_CONST(GL_TEXTURE_SWIZZLE_RGBA_EXT);
  GL_CONST(GL_SAMPLE_POSITION_NV);
  GL_CONST(GL_SAMPLE_MASK_NV);
  GL_CONST(GL_SAMPLE_MASK_VALUE_NV);
  GL_CONST(GL_TEXTURE_BINDING_RENDERBUFFER_NV);
  GL_CONST(GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV);
  GL_CONST(GL_TEXTURE_RENDERBUFFER_NV);
  GL_CONST(GL_SAMPLER_RENDERBUFFER_NV);
  GL_CONST(GL_INT_SAMPLER_RENDERBUFFER_NV);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV);
  GL_CONST(GL_MAX_SAMPLE_MASK_WORDS_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BINDING_NV);
  GL_CONST(GL_VBO_FREE_MEMORY_ATI);
  GL_CONST(GL_TEXTURE_FREE_MEMORY_ATI);
  GL_CONST(GL_RENDERBUFFER_FREE_MEMORY_ATI);
  GL_CONST(GL_COUNTER_TYPE_AMD);
  GL_CONST(GL_COUNTER_RANGE_AMD);
  GL_CONST(GL_UNSIGNED_INT64_AMD);
  GL_CONST(GL_PERCENTAGE_AMD);
  GL_CONST(GL_PERFMON_RESULT_AVAILABLE_AMD);
  GL_CONST(GL_PERFMON_RESULT_SIZE_AMD);
  GL_CONST(GL_PERFMON_RESULT_AMD);
  GL_CONST(GL_SAMPLER_BUFFER_AMD);
  GL_CONST(GL_INT_SAMPLER_BUFFER_AMD);
  GL_CONST(GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD);
  GL_CONST(GL_TESSELLATION_MODE_AMD);
  GL_CONST(GL_TESSELLATION_FACTOR_AMD);
  GL_CONST(GL_DISCRETE_AMD);
  GL_CONST(GL_CONTINUOUS_AMD);
  GL_CONST(GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT);
  GL_CONST(GL_FIRST_VERTEX_CONVENTION_EXT);
  GL_CONST(GL_LAST_VERTEX_CONVENTION_EXT);
  GL_CONST(GL_PROVOKING_VERTEX_EXT);
  GL_CONST(GL_ALPHA_SNORM);
  GL_CONST(GL_LUMINANCE_SNORM);
  GL_CONST(GL_LUMINANCE_ALPHA_SNORM);
  GL_CONST(GL_INTENSITY_SNORM);
  GL_CONST(GL_ALPHA8_SNORM);
  GL_CONST(GL_LUMINANCE8_SNORM);
  GL_CONST(GL_LUMINANCE8_ALPHA8_SNORM);
  GL_CONST(GL_INTENSITY8_SNORM);
  GL_CONST(GL_ALPHA16_SNORM);
  GL_CONST(GL_LUMINANCE16_SNORM);
  GL_CONST(GL_LUMINANCE16_ALPHA16_SNORM);
  GL_CONST(GL_INTENSITY16_SNORM);
  GL_CONST(GL_TEXTURE_RANGE_LENGTH_APPLE);
  GL_CONST(GL_TEXTURE_RANGE_POINTER_APPLE);
  GL_CONST(GL_TEXTURE_STORAGE_HINT_APPLE);
  GL_CONST(GL_STORAGE_PRIVATE_APPLE);
  GL_CONST(GL_HALF_APPLE);
  GL_CONST(GL_RGBA_FLOAT32_APPLE);
  GL_CONST(GL_RGB_FLOAT32_APPLE);
  GL_CONST(GL_ALPHA_FLOAT32_APPLE);
  GL_CONST(GL_INTENSITY_FLOAT32_APPLE);
  GL_CONST(GL_LUMINANCE_FLOAT32_APPLE);
  GL_CONST(GL_LUMINANCE_ALPHA_FLOAT32_APPLE);
  GL_CONST(GL_RGBA_FLOAT16_APPLE);
  GL_CONST(GL_RGB_FLOAT16_APPLE);
  GL_CONST(GL_ALPHA_FLOAT16_APPLE);
  GL_CONST(GL_INTENSITY_FLOAT16_APPLE);
  GL_CONST(GL_LUMINANCE_FLOAT16_APPLE);
  GL_CONST(GL_LUMINANCE_ALPHA_FLOAT16_APPLE);
  GL_CONST(GL_COLOR_FLOAT_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP1_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP2_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE);
  GL_CONST(GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE);
  GL_CONST(GL_AUX_DEPTH_STENCIL_APPLE);
  GL_CONST(GL_BUFFER_OBJECT_APPLE);
  GL_CONST(GL_RELEASED_APPLE);
  GL_CONST(GL_VOLATILE_APPLE);
  GL_CONST(GL_RETAINED_APPLE);
  GL_CONST(GL_UNDEFINED_APPLE);
  GL_CONST(GL_PURGEABLE_APPLE);
  GL_CONST(GL_PACK_ROW_BYTES_APPLE);
  GL_CONST(GL_UNPACK_ROW_BYTES_APPLE);
  GL_CONST(GL_RGB_422_APPLE);
  GL_CONST(GL_VIDEO_BUFFER_NV);
  GL_CONST(GL_VIDEO_BUFFER_BINDING_NV);
  GL_CONST(GL_FIELD_UPPER_NV);
  GL_CONST(GL_FIELD_LOWER_NV);
  GL_CONST(GL_NUM_VIDEO_CAPTURE_STREAMS_NV);
  GL_CONST(GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV);
  GL_CONST(GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV);
  GL_CONST(GL_LAST_VIDEO_CAPTURE_STATUS_NV);
  GL_CONST(GL_VIDEO_BUFFER_PITCH_NV);
  GL_CONST(GL_VIDEO_COLOR_CONVERSION_MATRIX_NV);
  GL_CONST(GL_VIDEO_COLOR_CONVERSION_MAX_NV);
  GL_CONST(GL_VIDEO_COLOR_CONVERSION_MIN_NV);
  GL_CONST(GL_VIDEO_COLOR_CONVERSION_OFFSET_NV);
  GL_CONST(GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV);
  GL_CONST(GL_PARTIAL_SUCCESS_NV);
  GL_CONST(GL_SUCCESS_NV);
  GL_CONST(GL_FAILURE_NV);
  GL_CONST(GL_YCBYCR8_422_NV);
  GL_CONST(GL_YCBAYCR8A_4224_NV);
  GL_CONST(GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV);
  GL_CONST(GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV);
  GL_CONST(GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV);
  GL_CONST(GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV);
  GL_CONST(GL_Z4Y12Z4CB12Z4CR12_444_NV);
  GL_CONST(GL_VIDEO_CAPTURE_FRAME_WIDTH_NV);
  GL_CONST(GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV);
  GL_CONST(GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV);
  GL_CONST(GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV);
  GL_CONST(GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV);
  GL_CONST(GL_ACTIVE_PROGRAM_EXT);
  GL_CONST(GL_BUFFER_GPU_ADDRESS_NV);
  GL_CONST(GL_GPU_ADDRESS_NV);
  GL_CONST(GL_MAX_SHADER_BUFFER_ADDRESS_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV);
  GL_CONST(GL_ELEMENT_ARRAY_UNIFIED_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV);
  GL_CONST(GL_VERTEX_ARRAY_ADDRESS_NV);
  GL_CONST(GL_NORMAL_ARRAY_ADDRESS_NV);
  GL_CONST(GL_COLOR_ARRAY_ADDRESS_NV);
  GL_CONST(GL_INDEX_ARRAY_ADDRESS_NV);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_ADDRESS_NV);
  GL_CONST(GL_EDGE_FLAG_ARRAY_ADDRESS_NV);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV);
  GL_CONST(GL_FOG_COORD_ARRAY_ADDRESS_NV);
  GL_CONST(GL_ELEMENT_ARRAY_ADDRESS_NV);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV);
  GL_CONST(GL_VERTEX_ARRAY_LENGTH_NV);
  GL_CONST(GL_NORMAL_ARRAY_LENGTH_NV);
  GL_CONST(GL_COLOR_ARRAY_LENGTH_NV);
  GL_CONST(GL_INDEX_ARRAY_LENGTH_NV);
  GL_CONST(GL_TEXTURE_COORD_ARRAY_LENGTH_NV);
  GL_CONST(GL_EDGE_FLAG_ARRAY_LENGTH_NV);
  GL_CONST(GL_SECONDARY_COLOR_ARRAY_LENGTH_NV);
  GL_CONST(GL_FOG_COORD_ARRAY_LENGTH_NV);
  GL_CONST(GL_ELEMENT_ARRAY_LENGTH_NV);
  GL_CONST(GL_DRAW_INDIRECT_UNIFIED_NV);
  GL_CONST(GL_DRAW_INDIRECT_ADDRESS_NV);
  GL_CONST(GL_DRAW_INDIRECT_LENGTH_NV);
  GL_CONST(GL_MAX_IMAGE_UNITS_EXT);
  GL_CONST(GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT);
  GL_CONST(GL_IMAGE_BINDING_NAME_EXT);
  GL_CONST(GL_IMAGE_BINDING_LEVEL_EXT);
  GL_CONST(GL_IMAGE_BINDING_LAYERED_EXT);
  GL_CONST(GL_IMAGE_BINDING_LAYER_EXT);
  GL_CONST(GL_IMAGE_BINDING_ACCESS_EXT);
  GL_CONST(GL_IMAGE_1D_EXT);
  GL_CONST(GL_IMAGE_2D_EXT);
  GL_CONST(GL_IMAGE_3D_EXT);
  GL_CONST(GL_IMAGE_2D_RECT_EXT);
  GL_CONST(GL_IMAGE_CUBE_EXT);
  GL_CONST(GL_IMAGE_BUFFER_EXT);
  GL_CONST(GL_IMAGE_1D_ARRAY_EXT);
  GL_CONST(GL_IMAGE_2D_ARRAY_EXT);
  GL_CONST(GL_IMAGE_CUBE_MAP_ARRAY_EXT);
  GL_CONST(GL_IMAGE_2D_MULTISAMPLE_EXT);
  GL_CONST(GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT);
  GL_CONST(GL_INT_IMAGE_1D_EXT);
  GL_CONST(GL_INT_IMAGE_2D_EXT);
  GL_CONST(GL_INT_IMAGE_3D_EXT);
  GL_CONST(GL_INT_IMAGE_2D_RECT_EXT);
  GL_CONST(GL_INT_IMAGE_CUBE_EXT);
  GL_CONST(GL_INT_IMAGE_BUFFER_EXT);
  GL_CONST(GL_INT_IMAGE_1D_ARRAY_EXT);
  GL_CONST(GL_INT_IMAGE_2D_ARRAY_EXT);
  GL_CONST(GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT);
  GL_CONST(GL_INT_IMAGE_2D_MULTISAMPLE_EXT);
  GL_CONST(GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_1D_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_3D_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_CUBE_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_BUFFER_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT);
  GL_CONST(GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT);
  GL_CONST(GL_MAX_IMAGE_SAMPLES_EXT);
  GL_CONST(GL_IMAGE_BINDING_FORMAT_EXT);
  GL_CONST(GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT);
  GL_CONST(GL_ELEMENT_ARRAY_BARRIER_BIT_EXT);
  GL_CONST(GL_UNIFORM_BARRIER_BIT_EXT);
  GL_CONST(GL_TEXTURE_FETCH_BARRIER_BIT_EXT);
  GL_CONST(GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT);
  GL_CONST(GL_COMMAND_BARRIER_BIT_EXT);
  GL_CONST(GL_PIXEL_BUFFER_BARRIER_BIT_EXT);
  GL_CONST(GL_TEXTURE_UPDATE_BARRIER_BIT_EXT);
  GL_CONST(GL_BUFFER_UPDATE_BARRIER_BIT_EXT);
  GL_CONST(GL_FRAMEBUFFER_BARRIER_BIT_EXT);
  GL_CONST(GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT);
  GL_CONST(GL_ATOMIC_COUNTER_BARRIER_BIT_EXT);
  GL_CONST(GL_DOUBLE_VEC2_EXT);
  GL_CONST(GL_DOUBLE_VEC3_EXT);
  GL_CONST(GL_DOUBLE_VEC4_EXT);
  GL_CONST(GL_DOUBLE_MAT2_EXT);
  GL_CONST(GL_DOUBLE_MAT3_EXT);
  GL_CONST(GL_DOUBLE_MAT4_EXT);
  GL_CONST(GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV);
  GL_CONST(GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV);
  GL_CONST(GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV);
  GL_CONST(GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV);
  GL_CONST(GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV);
  GL_CONST(GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV);
  GL_CONST(GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV);
  GL_CONST(GL_MAX_PROGRAM_SUBROUTINE_NUM_NV);
  GL_CONST(GL_INT64_NV);
  GL_CONST(GL_UNSIGNED_INT64_NV);
  GL_CONST(GL_INT8_NV);
  GL_CONST(GL_INT8_VEC2_NV);
  GL_CONST(GL_INT8_VEC3_NV);
  GL_CONST(GL_INT8_VEC4_NV);
  GL_CONST(GL_INT16_NV);
  GL_CONST(GL_INT16_VEC2_NV);
  GL_CONST(GL_INT16_VEC3_NV);
  GL_CONST(GL_INT16_VEC4_NV);
  GL_CONST(GL_INT64_VEC2_NV);
  GL_CONST(GL_INT64_VEC3_NV);
  GL_CONST(GL_INT64_VEC4_NV);
  GL_CONST(GL_UNSIGNED_INT8_NV);
  GL_CONST(GL_UNSIGNED_INT8_VEC2_NV);
  GL_CONST(GL_UNSIGNED_INT8_VEC3_NV);
  GL_CONST(GL_UNSIGNED_INT8_VEC4_NV);
  GL_CONST(GL_UNSIGNED_INT16_NV);
  GL_CONST(GL_UNSIGNED_INT16_VEC2_NV);
  GL_CONST(GL_UNSIGNED_INT16_VEC3_NV);
  GL_CONST(GL_UNSIGNED_INT16_VEC4_NV);
  GL_CONST(GL_UNSIGNED_INT64_VEC2_NV);
  GL_CONST(GL_UNSIGNED_INT64_VEC3_NV);
  GL_CONST(GL_UNSIGNED_INT64_VEC4_NV);
  GL_CONST(GL_FLOAT16_NV);
  GL_CONST(GL_FLOAT16_VEC2_NV);
  GL_CONST(GL_FLOAT16_VEC3_NV);
  GL_CONST(GL_FLOAT16_VEC4_NV);
  GL_CONST(GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV);
  GL_CONST(GL_MAX_PROGRAM_PATCH_ATTRIBS_NV);
  GL_CONST(GL_TESS_CONTROL_PROGRAM_NV);
  GL_CONST(GL_TESS_EVALUATION_PROGRAM_NV);
  GL_CONST(GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV);
  GL_CONST(GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV);
  GL_CONST(GL_COVERAGE_SAMPLES_NV);
  GL_CONST(GL_COLOR_SAMPLES_NV);
  GL_CONST(GL_DATA_BUFFER_AMD);
  GL_CONST(GL_PERFORMANCE_MONITOR_AMD);
  GL_CONST(GL_QUERY_OBJECT_AMD);
  GL_CONST(GL_VERTEX_ARRAY_OBJECT_AMD);
  GL_CONST(GL_SAMPLER_OBJECT_AMD);
  GL_CONST(GL_MAX_DEBUG_LOGGED_MESSAGES_AMD);
  GL_CONST(GL_DEBUG_LOGGED_MESSAGES_AMD);
  GL_CONST(GL_DEBUG_SEVERITY_HIGH_AMD);
  GL_CONST(GL_DEBUG_SEVERITY_MEDIUM_AMD);
  GL_CONST(GL_DEBUG_SEVERITY_LOW_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_API_ERROR_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_DEPRECATION_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_PERFORMANCE_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_APPLICATION_AMD);
  GL_CONST(GL_DEBUG_CATEGORY_OTHER_AMD);
  GL_CONST(GL_SURFACE_STATE_NV);
  GL_CONST(GL_SURFACE_REGISTERED_NV);
  GL_CONST(GL_SURFACE_MAPPED_NV);
  GL_CONST(GL_WRITE_DISCARD_NV);
  GL_CONST(GL_DEPTH_CLAMP_NEAR_AMD);
  GL_CONST(GL_DEPTH_CLAMP_FAR_AMD);
  GL_CONST(GL_TEXTURE_SRGB_DECODE_EXT);
  GL_CONST(GL_DECODE_EXT);
  GL_CONST(GL_SKIP_DECODE_EXT);
  GL_CONST(GL_TEXTURE_COVERAGE_SAMPLES_NV);
  GL_CONST(GL_TEXTURE_COLOR_SAMPLES_NV);
  GL_CONST(GL_FACTOR_MIN_AMD);
  GL_CONST(GL_FACTOR_MAX_AMD);
  GL_CONST(GL_SUBSAMPLE_DISTANCE_AMD);
  GL_CONST(GL_SYNC_X11_FENCE_EXT);
  GL_CONST(GL_SCALED_RESOLVE_FASTEST_EXT);
  GL_CONST(GL_SCALED_RESOLVE_NICEST_EXT);

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glBlendColor (needs 4)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        GLclampf arg_2 = JSTO<GLclampf> (args[2]);
        GLclampf arg_3 = JSTO<GLclampf> (args[3]);
        
        glBlendColor (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendColor"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquation (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBlendEquation (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquation"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexSubImage3D (needs 9)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        
        glCopyTexSubImage3D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexSubImage3D"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glColorTableParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glColorTableParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorTableParameterfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyColorTable (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyColorTable (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyColorTable"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetColorTableParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetColorTableParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameteriv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyColorSubTable (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyColorSubTable (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyColorSubTable"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glConvolutionParameterf (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glConvolutionParameterf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glConvolutionParameterf"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glConvolutionParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glConvolutionParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glConvolutionParameterfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glConvolutionParameteri (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glConvolutionParameteri (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glConvolutionParameteri"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyConvolutionFilter1D (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyConvolutionFilter1D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyConvolutionFilter1D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glCopyConvolutionFilter2D (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glCopyConvolutionFilter2D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyConvolutionFilter2D"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetConvolutionParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetConvolutionParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetConvolutionParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetConvolutionParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetConvolutionParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetConvolutionParameteriv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetHistogramParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetHistogramParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetHistogramParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetHistogramParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetHistogramParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetHistogramParameteriv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMinmaxParameterfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetMinmaxParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetMinmaxParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMinmaxParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetMinmaxParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMinmaxParameteriv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glHistogram (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        
        glHistogram (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glHistogram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMinmax (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        
        glMinmax (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMinmax"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetHistogram (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetHistogram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetHistogram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetMinmax (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetMinmax (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetMinmax"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveTexture (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glActiveTexture (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleCoverage (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        
        glSampleCoverage (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleCoverage"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientActiveTexture (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glClientActiveTexture (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientActiveTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1d (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glMultiTexCoord1d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1f (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glMultiTexCoord1f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord1fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1i (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glMultiTexCoord1i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1s (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glMultiTexCoord1s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2d (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glMultiTexCoord2d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2f (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMultiTexCoord2f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord2fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2i (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glMultiTexCoord2i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2s (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glMultiTexCoord2s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3d (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMultiTexCoord3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3f (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexCoord3f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord3fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3i (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexCoord3i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3s (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glMultiTexCoord3s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4d (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glMultiTexCoord4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4f (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glMultiTexCoord4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4fv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glMultiTexCoord4fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4i (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glMultiTexCoord4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4s (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glMultiTexCoord4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparate (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glBlendFuncSeparate (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparate"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameterf (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPointParameterf (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameterf"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPointParameterfv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glPointParameterfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameterfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameteri (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPointParameteri (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameteri"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFogCoordf (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glFogCoordf (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoordf"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glFogCoordfv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glFogCoordfv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoordfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFogCoordd (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glFogCoordd (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoordd"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3b (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glSecondaryColor3b (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3b"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glSecondaryColor3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glSecondaryColor3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glSecondaryColor3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glSecondaryColor3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glSecondaryColor3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3ub (needs 3)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        
        glSecondaryColor3ub (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3ub"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3ui (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glSecondaryColor3ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3us (needs 3)"));
        
        GLushort arg_0 = JSTO<GLushort> (args[0]);
        GLushort arg_1 = JSTO<GLushort> (args[1]);
        GLushort arg_2 = JSTO<GLushort> (args[2]);
        
        glSecondaryColor3us (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3us"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2d (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glWindowPos2d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2f (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glWindowPos2f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glWindowPos2fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2i (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glWindowPos2i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2s (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glWindowPos2s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3d (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glWindowPos3d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3f (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glWindowPos3f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3fv (needs 0)"));
        

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[0]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glWindowPos3fv (&vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glWindowPos3i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3s (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glWindowPos3s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsQuery (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsQuery (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsQuery"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBeginQuery (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBeginQuery (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginQuery"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEndQuery (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glEndQuery (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndQuery"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetQueryiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetQueryObjectiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectuiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetQueryObjectuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectuiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindBuffer (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindBuffer (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindBuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsBuffer (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsBuffer (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsBuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glUnmapBuffer (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLboolean ret =
        glUnmapBuffer (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glUnmapBuffer"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetBufferParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetBufferParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBufferParameteriv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparate (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationSeparate (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparate"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glStencilOpSeparate (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glStencilOpSeparate (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilOpSeparate"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glStencilFuncSeparate (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glStencilFuncSeparate (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilFuncSeparate"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glStencilMaskSeparate (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glStencilMaskSeparate (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilMaskSeparate"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glAttachShader (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glAttachShader (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAttachShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCompileShader (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glCompileShader (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCompileShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glCreateProgram (needs 0)"));
        
        GLuint ret =
        glCreateProgram ();
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCreateProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCreateShader (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint ret =
        glCreateShader (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCreateShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDeleteProgram (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDeleteProgram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDeleteShader (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDeleteShader (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDetachShader (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDetachShader (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDetachShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDisableVertexAttribArray (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDisableVertexAttribArray (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableVertexAttribArray"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEnableVertexAttribArray (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glEnableVertexAttribArray (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableVertexAttribArray"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetAttribLocation (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetAttribLocation (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetAttribLocation"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetProgramiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetShaderiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetShaderiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetShaderiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformLocation (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetUniformLocation (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformLocation"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformfv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetUniformfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetUniformfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLint ret;
        glGetUniformiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribdv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetVertexAttribdv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribdv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribfv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetVertexAttribfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsProgram (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsProgram (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsShader (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsShader (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsShader"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLinkProgram (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glLinkProgram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLinkProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glUseProgram (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glUseProgram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUseProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1f (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glUniform1f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2f (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glUniform2f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3f (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glUniform3f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4f (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glUniform4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4f"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1i (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glUniform1i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2i (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glUniform2i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3i (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glUniform3i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4i (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glUniform4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4i"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1fv (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniform1fv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform2fv (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniform2fv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform3fv (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniform3fv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform4fv (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniform4fv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix2fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix2fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix3fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix3fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix4fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix4fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glValidateProgram (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glValidateProgram (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glValidateProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1d (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexAttrib1d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1f (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertexAttrib1f (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1fv (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertexAttrib1fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1s (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glVertexAttrib1s (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2d (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexAttrib2d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2f (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glVertexAttrib2f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2fv (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertexAttrib2fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2s (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glVertexAttrib2s (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3d (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexAttrib3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3f (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glVertexAttrib3f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3fv (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertexAttrib3fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3s (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glVertexAttrib3s (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3s"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4Nub (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLubyte arg_4 = JSTO<GLubyte> (args[4]);
        
        glVertexAttrib4Nub (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4Nub"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4d (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexAttrib4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4f (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glVertexAttrib4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4fv (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glVertexAttrib4fv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4s (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glVertexAttrib4s (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4s"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix2x3fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix2x3fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix2x3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix3x2fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix3x2fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix3x2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix2x4fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix2x4fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix2x4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix4x2fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix4x2fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix4x2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix3x4fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix3x4fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix3x4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformMatrix4x3fv (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glUniformMatrix4x3fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformMatrix4x3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glColorMaski (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLboolean arg_4 = JSTO<GLboolean> (args[4]);
        
        glColorMaski (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorMaski"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEnablei (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glEnablei (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnablei"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDisablei (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDisablei (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisablei"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIsEnabledi (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLboolean ret =
        glIsEnabledi (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsEnabledi"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginTransformFeedback (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBeginTransformFeedback (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndTransformFeedback (needs 0)"));
        
        
        glEndTransformFeedback ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBindBufferBase (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glBindBufferBase (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindBufferBase"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glClampColor (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glClampColor (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClampColor"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBeginConditionalRender (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBeginConditionalRender (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginConditionalRender"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndConditionalRender (needs 0)"));
        
        
        glEndConditionalRender ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndConditionalRender"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribIiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribIiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribIiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribIuiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetVertexAttribIuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribIuiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI1i (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertexAttribI1i (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI2i (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glVertexAttribI2i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI3i (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glVertexAttribI3i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI4i (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glVertexAttribI4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI1ui (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexAttribI1ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI2ui (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glVertexAttribI2ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI3ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribI3ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI4ui (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glVertexAttribI4ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI4ui"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformuiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLuint ret;
        glGetUniformuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformuiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetFragDataLocation (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetFragDataLocation (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragDataLocation"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1ui (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glUniform1ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2ui (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glUniform2ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3ui (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glUniform3ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4ui (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glUniform4ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4ui"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexParameterIiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetTexParameterIiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexParameterIiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexParameterIuiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetTexParameterIuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexParameterIuiv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glClearBufferfv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glClearBufferfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearBufferfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glClearBufferfi (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glClearBufferfi (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearBufferfi"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawArraysInstanced (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawArraysInstanced (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArraysInstanced"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexBuffer (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glTexBuffer (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexBuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPrimitiveRestartIndex (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glPrimitiveRestartIndex (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPrimitiveRestartIndex"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetBufferParameteri64v (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint64 ret;
        glGetBufferParameteri64v (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBufferParameteri64v"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glFramebufferTexture (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribDivisor (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexAttribDivisor (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribDivisor"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMinSampleShading (needs 1)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        
        glMinSampleShading (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMinSampleShading"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationi (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationi (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationi"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparatei (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendEquationSeparatei (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparatei"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendFunci (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendFunci (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFunci"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparatei (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glBlendFuncSeparatei (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparatei"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveTextureARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glActiveTextureARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveTextureARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientActiveTextureARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glClientActiveTextureARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientActiveTextureARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1dARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glMultiTexCoord1dARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1fARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glMultiTexCoord1fARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1iARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glMultiTexCoord1iARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord1sARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glMultiTexCoord1sARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord1sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2dARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glMultiTexCoord2dARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2fARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glMultiTexCoord2fARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2iARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glMultiTexCoord2iARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord2sARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glMultiTexCoord2sARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord2sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3dARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMultiTexCoord3dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3fARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexCoord3fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3iARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexCoord3iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord3sARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glMultiTexCoord3sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord3sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4dARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glMultiTexCoord4dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4fARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glMultiTexCoord4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4iARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glMultiTexCoord4iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoord4sARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glMultiTexCoord4sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoord4sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleCoverageARB (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        
        glSampleCoverageARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleCoverageARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameterfARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPointParameterfARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameterfARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexBlendARB (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glVertexBlendARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexBlendARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCurrentPaletteMatrixARB (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glCurrentPaletteMatrixARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCurrentPaletteMatrixARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2dARB (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glWindowPos2dARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2fARB (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glWindowPos2fARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2iARB (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glWindowPos2iARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2sARB (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glWindowPos2sARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3dARB (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glWindowPos3dARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3fARB (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glWindowPos3fARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3iARB (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glWindowPos3iARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3sARB (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glWindowPos3sARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1dARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexAttrib1dARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1fARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertexAttrib1fARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1sARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glVertexAttrib1sARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2dARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexAttrib2dARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2fARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glVertexAttrib2fARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2sARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glVertexAttrib2sARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3dARB (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexAttrib3dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3fARB (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glVertexAttrib3fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3sARB (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glVertexAttrib3sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4NubARB (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLubyte arg_4 = JSTO<GLubyte> (args[4]);
        
        glVertexAttrib4NubARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4NubARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4dARB (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexAttrib4dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4fARB (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glVertexAttrib4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4sARB (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glVertexAttrib4sARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4sARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEnableVertexAttribArrayARB (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glEnableVertexAttribArrayARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableVertexAttribArrayARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDisableVertexAttribArrayARB (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDisableVertexAttribArrayARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableVertexAttribArrayARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindProgramARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindProgramARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindProgramARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramEnvParameter4dARB (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        
        glProgramEnvParameter4dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramEnvParameter4dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramEnvParameter4fARB (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glProgramEnvParameter4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramEnvParameter4fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramLocalParameter4dARB (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        
        glProgramLocalParameter4dARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramLocalParameter4dARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramLocalParameter4fARB (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glProgramLocalParameter4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramLocalParameter4fARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramEnvParameterdvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLdouble ret;
        glGetProgramEnvParameterdvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramEnvParameterdvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramEnvParameterfvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLfloat ret;
        glGetProgramEnvParameterfvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramEnvParameterfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramLocalParameterdvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLdouble ret;
        glGetProgramLocalParameterdvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramLocalParameterdvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramLocalParameterfvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLfloat ret;
        glGetProgramLocalParameterfvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramLocalParameterfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramivARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetProgramivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribdvARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetVertexAttribdvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribdvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribfvARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetVertexAttribfvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribivARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribivARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsProgramARB (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsProgramARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsProgramARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindBufferARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindBufferARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindBufferARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsBufferARB (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsBufferARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsBufferARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glUnmapBufferARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLboolean ret =
        glUnmapBufferARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glUnmapBufferARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetBufferParameterivARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetBufferParameterivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBufferParameterivARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsQueryARB (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsQueryARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsQueryARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBeginQueryARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBeginQueryARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginQueryARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEndQueryARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glEndQueryARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndQueryARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryivARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetQueryivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectivARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetQueryObjectivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectuivARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetQueryObjectuivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectuivARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetHandleARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLhandleARB ret =
        glGetHandleARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGetHandleARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCreateShaderObjectARB (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLhandleARB ret =
        glCreateShaderObjectARB (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCreateShaderObjectARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glCreateProgramObjectARB (needs 0)"));
        
        GLhandleARB ret =
        glCreateProgramObjectARB ();
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCreateProgramObjectARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1fARB (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glUniform1fARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2fARB (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glUniform2fARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3fARB (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glUniform3fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4fARB (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glUniform4fARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4fARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1iARB (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glUniform1iARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2iARB (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glUniform2iARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3iARB (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glUniform3iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4iARB (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glUniform4iARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4iARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glClampColorARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glClampColorARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClampColorARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawArraysInstancedARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawArraysInstancedARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArraysInstancedARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsRenderbuffer (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsRenderbuffer (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsRenderbuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindRenderbuffer (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindRenderbuffer (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindRenderbuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRenderbufferStorage (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glRenderbufferStorage (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRenderbufferStorage"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetRenderbufferParameteriv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetRenderbufferParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetRenderbufferParameteriv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsFramebuffer (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsFramebuffer (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsFramebuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindFramebuffer (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindFramebuffer (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindFramebuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCheckFramebufferStatus (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum ret =
        glCheckFramebufferStatus (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCheckFramebufferStatus"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture1D (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTexture1D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture1D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture2D (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTexture2D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture2D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture3D (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glFramebufferTexture3D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture3D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferRenderbuffer (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glFramebufferRenderbuffer (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferRenderbuffer"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetFramebufferAttachmentParameteriv (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetFramebufferAttachmentParameteriv (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFramebufferAttachmentParameteriv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenerateMipmap (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glGenerateMipmap (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGenerateMipmap"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glBlitFramebuffer (needs 10)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        GLbitfield arg_8 = JSTO<GLbitfield> (args[8]);
        GLenum arg_9 = JSTO<GLenum> (args[9]);
        
        glBlitFramebuffer (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlitFramebuffer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glRenderbufferStorageMultisample (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glRenderbufferStorageMultisample (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRenderbufferStorageMultisample"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureLayer (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTextureLayer (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureLayer"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramParameteriARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glProgramParameteriARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramParameteriARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureARB (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glFramebufferTextureARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureLayerARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTextureLayerARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureLayerARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureFaceARB (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glFramebufferTextureFaceARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureFaceARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribDivisorARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexAttribDivisorARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribDivisorARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexBufferARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glTexBufferARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexBufferARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindVertexArray (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBindVertexArray (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindVertexArray"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsVertexArray (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsVertexArray (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsVertexArray"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformBlockIndex (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetUniformBlockIndex (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformBlockIndex"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetActiveUniformBlockiv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetActiveUniformBlockiv (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetActiveUniformBlockiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformBlockBinding (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glUniformBlockBinding (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformBlockBinding"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glProvokingVertex (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glProvokingVertex (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProvokingVertex"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFenceSync (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLbitfield arg_1 = JSTO<GLbitfield> (args[1]);
        GLsync ret =
        glFenceSync (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glFenceSync"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetInteger64v (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLint64 ret;
        glGetInteger64v (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetInteger64v"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glTexImage2DMultisample (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLboolean arg_5 = JSTO<GLboolean> (args[5]);
        
        glTexImage2DMultisample (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexImage2DMultisample"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glTexImage3DMultisample (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLboolean arg_6 = JSTO<GLboolean> (args[6]);
        
        glTexImage3DMultisample (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexImage3DMultisample"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMultisamplefv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetMultisamplefv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetMultisamplefv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleMaski (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLbitfield arg_1 = JSTO<GLbitfield> (args[1]);
        
        glSampleMaski (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleMaski"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationiARB (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationiARB (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationiARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparateiARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendEquationSeparateiARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparateiARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendFunciARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendFunciARB (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFunciARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparateiARB (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glBlendFuncSeparateiARB (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparateiARB"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMinSampleShadingARB (needs 1)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        
        glMinSampleShadingARB (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMinSampleShadingARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetFragDataIndex (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetFragDataIndex (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragDataIndex"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsSampler (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsSampler (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsSampler"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindSampler (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindSampler (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindSampler"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSamplerParameteri (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glSamplerParameteri (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSamplerParameteri"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSamplerParameterf (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glSamplerParameterf (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSamplerParameterf"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSamplerParameterfv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glSamplerParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSamplerParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSamplerParameteriv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetSamplerParameteriv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSamplerParameteriv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSamplerParameterIiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetSamplerParameterIiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSamplerParameterIiv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSamplerParameterfv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glGetSamplerParameterfv (arg_0, arg_1, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGetSamplerParameterfv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSamplerParameterIuiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetSamplerParameterIuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSamplerParameterIuiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glQueryCounter (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glQueryCounter (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glQueryCounter"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjecti64v (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint64 ret;
        glGetQueryObjecti64v (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjecti64v"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectui64v (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64 ret;
        glGetQueryObjectui64v (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectui64v"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexP2ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexP2ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexP2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexP3ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexP3ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexP4ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexP4ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexP4ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoordP1ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glTexCoordP1ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoordP1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoordP2ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glTexCoordP2ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoordP2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoordP3ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glTexCoordP3ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoordP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexCoordP4ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glTexCoordP4ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoordP4ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoordP1ui (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glMultiTexCoordP1ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoordP1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoordP2ui (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glMultiTexCoordP2ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoordP2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoordP3ui (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glMultiTexCoordP3ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoordP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexCoordP4ui (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glMultiTexCoordP4ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexCoordP4ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glNormalP3ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glNormalP3ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glColorP3ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glColorP3ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glColorP4ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glColorP4ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorP4ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColorP3ui (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glSecondaryColorP3ui (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColorP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribP1ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribP1ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribP1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribP2ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribP2ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribP2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribP3ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribP3ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribP3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribP4ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribP4ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribP4ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1d (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glUniform1d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2d (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glUniform2d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3d (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glUniform3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4d (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glUniform4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4d"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformdv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLdouble ret;
        glGetUniformdv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformdv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSubroutineUniformLocation (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLchar ret;
        glGetSubroutineUniformLocation (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSubroutineUniformLocation"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetSubroutineIndex (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLchar ret;
        glGetSubroutineIndex (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSubroutineIndex"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetActiveSubroutineUniformiv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLint ret;
        glGetActiveSubroutineUniformiv (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetActiveSubroutineUniformiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformSubroutineuiv (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLuint ret;
        glGetUniformSubroutineuiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformSubroutineuiv"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramStageiv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetProgramStageiv (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramStageiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPatchParameteri (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPatchParameteri (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPatchParameteri"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPatchParameterfv (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glPatchParameterfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPatchParameterfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindTransformFeedback (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindTransformFeedback (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsTransformFeedback (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsTransformFeedback (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glPauseTransformFeedback (needs 0)"));
        
        
        glPauseTransformFeedback ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPauseTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glResumeTransformFeedback (needs 0)"));
        
        
        glResumeTransformFeedback ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResumeTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDrawTransformFeedback (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDrawTransformFeedback (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawTransformFeedback"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDrawTransformFeedbackStream (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glDrawTransformFeedbackStream (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawTransformFeedbackStream"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBeginQueryIndexed (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glBeginQueryIndexed (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginQueryIndexed"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEndQueryIndexed (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glEndQueryIndexed (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndQueryIndexed"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryIndexediv (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetQueryIndexediv (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryIndexediv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glReleaseShaderCompiler (needs 0)"));
        
        
        glReleaseShaderCompiler ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReleaseShaderCompiler"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDepthRangef (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        
        glDepthRangef (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthRangef"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClearDepthf (needs 1)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        
        glClearDepthf (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearDepthf"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramParameteri (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glProgramParameteri (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramParameteri"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUseProgramStages (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLbitfield arg_1 = JSTO<GLbitfield> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glUseProgramStages (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUseProgramStages"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glActiveShaderProgram (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glActiveShaderProgram (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveShaderProgram"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindProgramPipeline (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBindProgramPipeline (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindProgramPipeline"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsProgramPipeline (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsProgramPipeline (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsProgramPipeline"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramPipelineiv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetProgramPipelineiv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramPipelineiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1i (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glProgramUniform1i (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1f (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glProgramUniform1f (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1fv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniform1fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1d (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glProgramUniform1d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1ui (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glProgramUniform1ui (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2i (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glProgramUniform2i (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2f (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glProgramUniform2f (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2fv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniform2fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2d (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glProgramUniform2d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2ui (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glProgramUniform2ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3i (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glProgramUniform3i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3f (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glProgramUniform3f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3fv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniform3fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3d (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glProgramUniform3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3ui (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glProgramUniform3ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3ui"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4i (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glProgramUniform4i (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4i"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4f (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glProgramUniform4f (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4f"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4fv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[3]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniform4fv (arg_0, arg_1, arg_2, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4d (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        
        glProgramUniform4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4ui (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glProgramUniform4ui (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4ui"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix2fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix2fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix3fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix3fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix4fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix4fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix2x3fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix2x3fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix2x3fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix3x2fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix3x2fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix3x2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix2x4fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix2x4fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix2x4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix4x2fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix4x2fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix4x2fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix3x4fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix3x4fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix3x4fv"), tmpl -> GetFunction ());
  }
// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniformMatrix4x3fv (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[4]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glProgramUniformMatrix4x3fv (arg_0, arg_1, arg_2, arg_3, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniformMatrix4x3fv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glValidateProgramPipeline (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glValidateProgramPipeline (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glValidateProgramPipeline"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL1d (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexAttribL1d (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL1d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL2d (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexAttribL2d (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL2d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL3d (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexAttribL3d (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL3d"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL4d (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexAttribL4d (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL4d"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribLdv (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetVertexAttribLdv (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribLdv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glViewportIndexedf (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glViewportIndexedf (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glViewportIndexedf"), tmpl -> GetFunction ());
  }

// FV

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glViewportIndexedfv (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);

        std::vector<GLfloat> vect;
        Handle<Array> arr = Handle<Array>::Cast (args[1]);
        const size_t N = arr -> Length ();
        vect . reserve (N);
        for (size_t i = 0; i < N; ++i)
          vect.push_back (JSTO<GLfloat> (arr -> Get (i)));
        
        glViewportIndexedfv (arg_0, &vect[0]);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glViewportIndexedfv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glScissorIndexed (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glScissorIndexed (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glScissorIndexed"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDepthRangeIndexed (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLclampd arg_1 = JSTO<GLclampd> (args[1]);
        GLclampd arg_2 = JSTO<GLclampd> (args[2]);
        
        glDepthRangeIndexed (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthRangeIndexed"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glGetGraphicsResetStatusARB (needs 0)"));
        
        GLenum ret =
        glGetGraphicsResetStatusARB ();
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGetGraphicsResetStatusARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnMapdvARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLdouble ret;
        glGetnMapdvARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnMapdvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnMapfvARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLfloat ret;
        glGetnMapfvARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnMapfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnMapivARB (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLint ret;
        glGetnMapivARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnMapivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetnPixelMapfvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        GLfloat ret;
        glGetnPixelMapfvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnPixelMapfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetnPixelMapuivARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        GLuint ret;
        glGetnPixelMapuivARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnPixelMapuivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetnPixelMapusvARB (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        GLushort ret;
        glGetnPixelMapusvARB (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnPixelMapusvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetnPolygonStippleARB (needs 1)"));
        
        GLsizei arg_0 = JSTO<GLsizei> (args[0]);
        
        GLubyte ret;
        glGetnPolygonStippleARB (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnPolygonStippleARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnUniformfvARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLfloat ret;
        glGetnUniformfvARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnUniformfvARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnUniformivARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLint ret;
        glGetnUniformivARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnUniformivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnUniformuivARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLuint ret;
        glGetnUniformuivARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnUniformuivARB"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetnUniformdvARB (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        GLdouble ret;
        glGetnUniformdvARB (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetnUniformdvARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glDrawArraysInstancedBaseInstance (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glDrawArraysInstancedBaseInstance (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArraysInstancedBaseInstance"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDrawTransformFeedbackInstanced (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glDrawTransformFeedbackInstanced (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawTransformFeedbackInstanced"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawTransformFeedbackStreamInstanced (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawTransformFeedbackStreamInstanced (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawTransformFeedbackStreamInstanced"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetInternalformativ (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        GLint ret;
        glGetInternalformativ (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetInternalformativ"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetActiveAtomicCounterBufferiv (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetActiveAtomicCounterBufferiv (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetActiveAtomicCounterBufferiv"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glBindImageTexture (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        GLenum arg_6 = JSTO<GLenum> (args[6]);
        
        glBindImageTexture (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindImageTexture"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMemoryBarrier (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glMemoryBarrier (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMemoryBarrier"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTexStorage1D (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glTexStorage1D (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexStorage1D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glTexStorage2D (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glTexStorage2D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexStorage2D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glTexStorage3D (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glTexStorage3D (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexStorage3D"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glTextureStorage1DEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glTextureStorage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureStorage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glTextureStorage2DEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glTextureStorage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureStorage2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glTextureStorage3DEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        
        glTextureStorage3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureStorage3DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glBlendColorEXT (needs 4)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        GLclampf arg_2 = JSTO<GLclampf> (args[2]);
        GLclampf arg_3 = JSTO<GLclampf> (args[3]);
        
        glBlendColorEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendColorEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPolygonOffsetEXT (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPolygonOffsetEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPolygonOffsetEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexFilterFuncSGIS (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetTexFilterFuncSGIS (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexFilterFuncSGIS"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexImage1DEXT (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        
        glCopyTexImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexImage2DEXT (needs 8)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        
        glCopyTexImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexImage2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexSubImage1DEXT (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glCopyTexSubImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexSubImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexSubImage2DEXT (needs 8)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        
        glCopyTexSubImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexSubImage2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyTexSubImage3DEXT (needs 9)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        
        glCopyTexSubImage3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTexSubImage3DEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetHistogramParameterfvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetHistogramParameterfvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetHistogramParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetHistogramParameterivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetHistogramParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetHistogramParameterivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMinmaxParameterfvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetMinmaxParameterfvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMinmaxParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMinmaxParameterivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetMinmaxParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMinmaxParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glHistogramEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        
        glHistogramEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glHistogramEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMinmaxEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        
        glMinmaxEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMinmaxEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetHistogramEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetHistogramEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetHistogramEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glResetMinmaxEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glResetMinmaxEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResetMinmaxEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glConvolutionParameterfEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glConvolutionParameterfEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glConvolutionParameterfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glConvolutionParameteriEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glConvolutionParameteriEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glConvolutionParameteriEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyConvolutionFilter1DEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyConvolutionFilter1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyConvolutionFilter1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glCopyConvolutionFilter2DEXT (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glCopyConvolutionFilter2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyConvolutionFilter2DEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetConvolutionParameterfvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetConvolutionParameterfvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetConvolutionParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetConvolutionParameterivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetConvolutionParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetConvolutionParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyColorTableSGI (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyColorTableSGI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyColorTableSGI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameterfvSGI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetColorTableParameterfvSGI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameterfvSGI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameterivSGI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetColorTableParameterivSGI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameterivSGI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPixelTexGenSGIX (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glPixelTexGenSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTexGenSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelTexGenParameteriSGIS (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPixelTexGenParameteriSGIS (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTexGenParameteriSGIS"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPixelTexGenParameterfSGIS (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPixelTexGenParameterfSGIS (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTexGenParameterfSGIS"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetPixelTexGenParameterivSGIS (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLint ret;
        glGetPixelTexGenParameterivSGIS (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetPixelTexGenParameterivSGIS"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetPixelTexGenParameterfvSGIS (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLfloat ret;
        glGetPixelTexGenParameterfvSGIS (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetPixelTexGenParameterfvSGIS"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindTextureEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindTextureEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsTextureEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsTextureEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsTextureEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetDetailTexFuncSGIS (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLfloat ret;
        glGetDetailTexFuncSGIS (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetDetailTexFuncSGIS"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetSharpenTexFuncSGIS (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLfloat ret;
        glGetSharpenTexFuncSGIS (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetSharpenTexFuncSGIS"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleMaskSGIS (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        
        glSampleMaskSGIS (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleMaskSGIS"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glSamplePatternSGIS (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glSamplePatternSGIS (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSamplePatternSGIS"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glArrayElementEXT (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glArrayElementEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glArrayElementEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDrawArraysEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glDrawArraysEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArraysEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBlendEquationEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSpriteParameterfSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glSpriteParameterfSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSpriteParameterfSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSpriteParameteriSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glSpriteParameteriSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSpriteParameteriSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameterfEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPointParameterfEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameterfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameterfSGIS (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPointParameterfSGIS (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameterfSGIS"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glGetInstrumentsSGIX (needs 0)"));
        
        GLint ret =
        glGetInstrumentsSGIX ();
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGetInstrumentsSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glReadInstrumentsSGIX (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glReadInstrumentsSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReadInstrumentsSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glStartInstrumentsSGIX (needs 0)"));
        
        
        glStartInstrumentsSGIX ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStartInstrumentsSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glStopInstrumentsSGIX (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glStopInstrumentsSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStopInstrumentsSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFrameZoomSGIX (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glFrameZoomSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFrameZoomSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTagSampleBufferSGIX (needs 0)"));
        
        
        glTagSampleBufferSGIX ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTagSampleBufferSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDeformSGIX (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glDeformSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeformSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glLoadIdentityDeformationMapSGIX (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glLoadIdentityDeformationMapSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLoadIdentityDeformationMapSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glFlushRasterSGIX (needs 0)"));
        
        
        glFlushRasterSGIX ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFlushRasterSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glImageTransformParameteriHP (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glImageTransformParameteriHP (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glImageTransformParameteriHP"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glImageTransformParameterfHP (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glImageTransformParameterfHP (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glImageTransformParameterfHP"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetImageTransformParameterivHP (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetImageTransformParameterivHP (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetImageTransformParameterivHP"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetImageTransformParameterfvHP (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetImageTransformParameterfvHP (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetImageTransformParameterfvHP"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glCopyColorSubTableEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glCopyColorSubTableEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyColorSubTableEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glHintPGI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glHintPGI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glHintPGI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameterivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetColorTableParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameterivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetColorTableParameterfvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetColorTableParameterfvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetColorTableParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetListParameterfvSGIX (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetListParameterfvSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetListParameterfvSGIX"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetListParameterivSGIX (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetListParameterivSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetListParameterivSGIX"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glListParameterfSGIX (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glListParameterfSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glListParameterfSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glListParameteriSGIX (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glListParameteriSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glListParameteriSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIndexMaterialEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glIndexMaterialEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexMaterialEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIndexFuncEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLclampf arg_1 = JSTO<GLclampf> (args[1]);
        
        glIndexFuncEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexFuncEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glLockArraysEXT (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glLockArraysEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLockArraysEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glUnlockArraysEXT (needs 0)"));
        
        
        glUnlockArraysEXT ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUnlockArraysEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFragmentColorMaterialSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glFragmentColorMaterialSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentColorMaterialSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glFragmentLightfSGIX (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glFragmentLightfSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentLightfSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glFragmentLightiSGIX (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glFragmentLightiSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentLightiSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFragmentLightModelfSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glFragmentLightModelfSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentLightModelfSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFragmentLightModeliSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glFragmentLightModeliSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentLightModeliSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glFragmentMaterialfSGIX (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glFragmentMaterialfSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentMaterialfSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glFragmentMaterialiSGIX (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glFragmentMaterialiSGIX (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFragmentMaterialiSGIX"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFragmentLightfvSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetFragmentLightfvSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragmentLightfvSGIX"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFragmentLightivSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetFragmentLightivSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragmentLightivSGIX"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFragmentMaterialfvSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetFragmentMaterialfvSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragmentMaterialfvSGIX"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFragmentMaterialivSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetFragmentMaterialivSGIX (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragmentMaterialivSGIX"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glLightEnviSGIX (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glLightEnviSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glLightEnviSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glApplyTextureEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glApplyTextureEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glApplyTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTextureLightEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glTextureLightEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureLightEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTextureMaterialEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glTextureMaterialEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureMaterialEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glAsyncMarkerSGIX (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glAsyncMarkerSGIX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAsyncMarkerSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenAsyncMarkersSGIX (needs 1)"));
        
        GLsizei arg_0 = JSTO<GLsizei> (args[0]);
        GLuint ret =
        glGenAsyncMarkersSGIX (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGenAsyncMarkersSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDeleteAsyncMarkersSGIX (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glDeleteAsyncMarkersSGIX (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteAsyncMarkersSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsAsyncMarkerSGIX (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsAsyncMarkerSGIX (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsAsyncMarkerSGIX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glPixelTransformParameteriEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glPixelTransformParameteriEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTransformParameteriEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glPixelTransformParameterfEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glPixelTransformParameterfEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPixelTransformParameterfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3bEXT (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glSecondaryColor3bEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3bEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3dEXT (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glSecondaryColor3dEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3fEXT (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glSecondaryColor3fEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3iEXT (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glSecondaryColor3iEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3sEXT (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glSecondaryColor3sEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3sEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3ubEXT (needs 3)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        
        glSecondaryColor3ubEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3ubEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3uiEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glSecondaryColor3uiEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColor3usEXT (needs 3)"));
        
        GLushort arg_0 = JSTO<GLushort> (args[0]);
        GLushort arg_1 = JSTO<GLushort> (args[1]);
        GLushort arg_2 = JSTO<GLushort> (args[2]);
        
        glSecondaryColor3usEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColor3usEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTextureNormalEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glTextureNormalEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureNormalEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFogCoordfEXT (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glFogCoordfEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoordfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFogCoorddEXT (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glFogCoorddEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoorddEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTangent3bEXT (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glTangent3bEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTangent3bEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTangent3dEXT (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glTangent3dEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTangent3dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTangent3fEXT (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glTangent3fEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTangent3fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTangent3iEXT (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glTangent3iEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTangent3iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTangent3sEXT (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glTangent3sEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTangent3sEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBinormal3bEXT (needs 3)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        
        glBinormal3bEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBinormal3bEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBinormal3dEXT (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glBinormal3dEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBinormal3dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBinormal3fEXT (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glBinormal3fEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBinormal3fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBinormal3iEXT (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glBinormal3iEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBinormal3iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBinormal3sEXT (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glBinormal3sEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBinormal3sEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glFinishTextureSUNX (needs 0)"));
        
        
        glFinishTextureSUNX ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFinishTextureSUNX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactorbSUN (needs 1)"));
        
        GLbyte arg_0 = JSTO<GLbyte> (args[0]);
        
        glGlobalAlphaFactorbSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactorbSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactorsSUN (needs 1)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        
        glGlobalAlphaFactorsSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactorsSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactoriSUN (needs 1)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        
        glGlobalAlphaFactoriSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactoriSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactorfSUN (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glGlobalAlphaFactorfSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactorfSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactordSUN (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glGlobalAlphaFactordSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactordSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactorubSUN (needs 1)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        
        glGlobalAlphaFactorubSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactorubSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactorusSUN (needs 1)"));
        
        GLushort arg_0 = JSTO<GLushort> (args[0]);
        
        glGlobalAlphaFactorusSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactorusSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGlobalAlphaFactoruiSUN (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glGlobalAlphaFactoruiSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGlobalAlphaFactoruiSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiSUN (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glReplacementCodeuiSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeusSUN (needs 1)"));
        
        GLushort arg_0 = JSTO<GLushort> (args[0]);
        
        glReplacementCodeusSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeusSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeubSUN (needs 1)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        
        glReplacementCodeubSUN (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeubSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glColor4ubVertex2fSUN (needs 6)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glColor4ubVertex2fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor4ubVertex2fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glColor4ubVertex3fSUN (needs 7)"));
        
        GLubyte arg_0 = JSTO<GLubyte> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        
        glColor4ubVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor4ubVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glColor3fVertex3fSUN (needs 6)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glColor3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glNormal3fVertex3fSUN (needs 6)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glColor4fNormal3fVertex3fSUN (needs 10)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        GLfloat arg_9 = JSTO<GLfloat> (args[9]);
        
        glColor4fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColor4fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fVertex3fSUN (needs 5)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glTexCoord2fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4fVertex4fSUN (needs 8)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        
        glTexCoord4fVertex4fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4fVertex4fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fColor4ubVertex3fSUN (needs 9)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLubyte arg_4 = JSTO<GLubyte> (args[4]);
        GLubyte arg_5 = JSTO<GLubyte> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        
        glTexCoord2fColor4ubVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fColor4ubVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fColor3fVertex3fSUN (needs 8)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        
        glTexCoord2fColor3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fColor3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fNormal3fVertex3fSUN (needs 8)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        
        glTexCoord2fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 12)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord2fColor4fNormal3fVertex3fSUN (needs 12)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        GLfloat arg_9 = JSTO<GLfloat> (args[9]);
        GLfloat arg_10 = JSTO<GLfloat> (args[10]);
        GLfloat arg_11 = JSTO<GLfloat> (args[11]);
        
        glTexCoord2fColor4fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord2fColor4fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 15)
          return ThrowException
            (String::New("Not enough arguments for glTexCoord4fColor4fNormal3fVertex4fSUN (needs 15)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        GLfloat arg_9 = JSTO<GLfloat> (args[9]);
        GLfloat arg_10 = JSTO<GLfloat> (args[10]);
        GLfloat arg_11 = JSTO<GLfloat> (args[11]);
        GLfloat arg_12 = JSTO<GLfloat> (args[12]);
        GLfloat arg_13 = JSTO<GLfloat> (args[13]);
        GLfloat arg_14 = JSTO<GLfloat> (args[14]);
        
        glTexCoord4fColor4fNormal3fVertex4fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11
          , arg_12
          , arg_13
          , arg_14);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoord4fColor4fNormal3fVertex4fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiVertex3fSUN (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glReplacementCodeuiVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiColor4ubVertex3fSUN (needs 8)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLubyte arg_4 = JSTO<GLubyte> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        
        glReplacementCodeuiColor4ubVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiColor4ubVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiColor3fVertex3fSUN (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        
        glReplacementCodeuiColor3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiColor3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiNormal3fVertex3fSUN (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        
        glReplacementCodeuiNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 11)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiColor4fNormal3fVertex3fSUN (needs 11)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        GLfloat arg_9 = JSTO<GLfloat> (args[9]);
        GLfloat arg_10 = JSTO<GLfloat> (args[10]);
        
        glReplacementCodeuiColor4fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiColor4fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiTexCoord2fVertex3fSUN (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glReplacementCodeuiTexCoord2fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiTexCoord2fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (needs 9)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        
        glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 13)
          return ThrowException
            (String::New("Not enough arguments for glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (needs 13)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        GLfloat arg_7 = JSTO<GLfloat> (args[7]);
        GLfloat arg_8 = JSTO<GLfloat> (args[8]);
        GLfloat arg_9 = JSTO<GLfloat> (args[9]);
        GLfloat arg_10 = JSTO<GLfloat> (args[10]);
        GLfloat arg_11 = JSTO<GLfloat> (args[11]);
        GLfloat arg_12 = JSTO<GLfloat> (args[12]);
        
        glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11
          , arg_12);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparateEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glBlendFuncSeparateEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparateEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparateINGR (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glBlendFuncSeparateINGR (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparateINGR"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glVertexWeightfEXT (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glVertexWeightfEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexWeightfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glFlushVertexArrayRangeNV (needs 0)"));
        
        
        glFlushVertexArrayRangeNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFlushVertexArrayRangeNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glCombinerParameterfNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glCombinerParameterfNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCombinerParameterfNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glCombinerParameteriNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glCombinerParameteriNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCombinerParameteriNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glCombinerInputNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        
        glCombinerInputNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCombinerInputNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glCombinerOutputNV (needs 10)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        GLenum arg_6 = JSTO<GLenum> (args[6]);
        GLboolean arg_7 = JSTO<GLboolean> (args[7]);
        GLboolean arg_8 = JSTO<GLboolean> (args[8]);
        GLboolean arg_9 = JSTO<GLboolean> (args[9]);
        
        glCombinerOutputNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCombinerOutputNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFinalCombinerInputNV (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glFinalCombinerInputNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFinalCombinerInputNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetCombinerInputParameterfvNV (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLfloat ret;
        glGetCombinerInputParameterfvNV (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetCombinerInputParameterfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetCombinerInputParameterivNV (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLint ret;
        glGetCombinerInputParameterivNV (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetCombinerInputParameterivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetCombinerOutputParameterfvNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetCombinerOutputParameterfvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetCombinerOutputParameterfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetCombinerOutputParameterivNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetCombinerOutputParameterivNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetCombinerOutputParameterivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFinalCombinerInputParameterfvNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetFinalCombinerInputParameterfvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFinalCombinerInputParameterfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFinalCombinerInputParameterivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetFinalCombinerInputParameterivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFinalCombinerInputParameterivNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glResizeBuffersMESA (needs 0)"));
        
        
        glResizeBuffersMESA ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResizeBuffersMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2dMESA (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glWindowPos2dMESA (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2dMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2fMESA (needs 2)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glWindowPos2fMESA (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2fMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2iMESA (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glWindowPos2iMESA (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2iMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos2sMESA (needs 2)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glWindowPos2sMESA (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos2sMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3dMESA (needs 3)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glWindowPos3dMESA (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3dMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3fMESA (needs 3)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glWindowPos3fMESA (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3fMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3iMESA (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glWindowPos3iMESA (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3iMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos3sMESA (needs 3)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glWindowPos3sMESA (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos3sMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos4dMESA (needs 4)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glWindowPos4dMESA (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos4dMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos4fMESA (needs 4)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glWindowPos4fMESA (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos4fMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos4iMESA (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glWindowPos4iMESA (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos4iMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glWindowPos4sMESA (needs 4)"));
        
        GLshort arg_0 = JSTO<GLshort> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glWindowPos4sMESA (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWindowPos4sMESA"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTbufferMask3DFX (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glTbufferMask3DFX (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTbufferMask3DFX"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleMaskEXT (needs 2)"));
        
        GLclampf arg_0 = JSTO<GLclampf> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        
        glSampleMaskEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleMaskEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glSamplePatternEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glSamplePatternEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSamplePatternEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTextureColorMaskSGIS (needs 4)"));
        
        GLboolean arg_0 = JSTO<GLboolean> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        
        glTextureColorMaskSGIS (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureColorMaskSGIS"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsFenceNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsFenceNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsFenceNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTestFenceNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glTestFenceNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glTestFenceNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFenceivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetFenceivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFenceivNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFinishFenceNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glFinishFenceNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFinishFenceNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSetFenceNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glSetFenceNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSetFenceNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMapParameterivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetMapParameterivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapParameterivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMapParameterfvNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetMapParameterfvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapParameterfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMapAttribParameterivNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetMapAttribParameterivNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapAttribParameterivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMapAttribParameterfvNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetMapAttribParameterfvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMapAttribParameterfvNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEvalMapsNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glEvalMapsNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEvalMapsNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetCombinerStageParameterfvNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetCombinerStageParameterfvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetCombinerStageParameterfvNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindProgramNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindProgramNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindProgramNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramParameterdvNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLdouble ret;
        glGetProgramParameterdvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramParameterdvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramParameterfvNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetProgramParameterfvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramParameterfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetProgramivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramStringNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLubyte ret;
        glGetProgramStringNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramStringNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetTrackMatrixivNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetTrackMatrixivNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTrackMatrixivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribdvNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetVertexAttribdvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribdvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribfvNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetVertexAttribfvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribivNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsProgramNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsProgramNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsProgramNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramParameter4dNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        
        glProgramParameter4dNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramParameter4dNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramParameter4fNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glProgramParameter4fNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramParameter4fNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTrackMatrixNV (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glTrackMatrixNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTrackMatrixNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1dNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexAttrib1dNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1dNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1fNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertexAttrib1fNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1fNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib1sNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glVertexAttrib1sNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib1sNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2dNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexAttrib2dNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2dNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2fNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glVertexAttrib2fNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2fNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib2sNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glVertexAttrib2sNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib2sNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3dNV (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexAttrib3dNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3dNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3fNV (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glVertexAttrib3fNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3fNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib3sNV (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glVertexAttrib3sNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib3sNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4dNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexAttrib4dNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4dNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4fNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glVertexAttrib4fNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4fNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4sNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glVertexAttrib4sNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4sNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttrib4ubNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLubyte arg_1 = JSTO<GLubyte> (args[1]);
        GLubyte arg_2 = JSTO<GLubyte> (args[2]);
        GLubyte arg_3 = JSTO<GLubyte> (args[3]);
        GLubyte arg_4 = JSTO<GLubyte> (args[4]);
        
        glVertexAttrib4ubNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttrib4ubNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetTexBumpParameterivATI (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLint ret;
        glGetTexBumpParameterivATI (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexBumpParameterivATI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetTexBumpParameterfvATI (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLfloat ret;
        glGetTexBumpParameterfvATI (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexBumpParameterfvATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenFragmentShadersATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint ret =
        glGenFragmentShadersATI (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGenFragmentShadersATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindFragmentShaderATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBindFragmentShaderATI (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindFragmentShaderATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDeleteFragmentShaderATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDeleteFragmentShaderATI (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteFragmentShaderATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glBeginFragmentShaderATI (needs 0)"));
        
        
        glBeginFragmentShaderATI ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginFragmentShaderATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndFragmentShaderATI (needs 0)"));
        
        
        glEndFragmentShaderATI ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndFragmentShaderATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glPassTexCoordATI (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glPassTexCoordATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPassTexCoordATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSampleMapATI (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glSampleMapATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleMapATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glColorFragmentOp1ATI (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        
        glColorFragmentOp1ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorFragmentOp1ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glColorFragmentOp2ATI (needs 10)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        GLuint arg_7 = JSTO<GLuint> (args[7]);
        GLuint arg_8 = JSTO<GLuint> (args[8]);
        GLuint arg_9 = JSTO<GLuint> (args[9]);
        
        glColorFragmentOp2ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorFragmentOp2ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 13)
          return ThrowException
            (String::New("Not enough arguments for glColorFragmentOp3ATI (needs 13)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        GLuint arg_7 = JSTO<GLuint> (args[7]);
        GLuint arg_8 = JSTO<GLuint> (args[8]);
        GLuint arg_9 = JSTO<GLuint> (args[9]);
        GLuint arg_10 = JSTO<GLuint> (args[10]);
        GLuint arg_11 = JSTO<GLuint> (args[11]);
        GLuint arg_12 = JSTO<GLuint> (args[12]);
        
        glColorFragmentOp3ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11
          , arg_12);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorFragmentOp3ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glAlphaFragmentOp1ATI (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glAlphaFragmentOp1ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAlphaFragmentOp1ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glAlphaFragmentOp2ATI (needs 9)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        GLuint arg_7 = JSTO<GLuint> (args[7]);
        GLuint arg_8 = JSTO<GLuint> (args[8]);
        
        glAlphaFragmentOp2ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAlphaFragmentOp2ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 12)
          return ThrowException
            (String::New("Not enough arguments for glAlphaFragmentOp3ATI (needs 12)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        GLuint arg_7 = JSTO<GLuint> (args[7]);
        GLuint arg_8 = JSTO<GLuint> (args[8]);
        GLuint arg_9 = JSTO<GLuint> (args[9]);
        GLuint arg_10 = JSTO<GLuint> (args[10]);
        GLuint arg_11 = JSTO<GLuint> (args[11]);
        
        glAlphaFragmentOp3ATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glAlphaFragmentOp3ATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPNTrianglesiATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPNTrianglesiATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPNTrianglesiATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPNTrianglesfATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glPNTrianglesfATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPNTrianglesfATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsObjectBufferATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsObjectBufferATI (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsObjectBufferATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetObjectBufferfvATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetObjectBufferfvATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetObjectBufferfvATI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetObjectBufferivATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetObjectBufferivATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetObjectBufferivATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFreeObjectBufferATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glFreeObjectBufferATI (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFreeObjectBufferATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glArrayObjectATI (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glArrayObjectATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glArrayObjectATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetArrayObjectfvATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetArrayObjectfvATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetArrayObjectfvATI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetArrayObjectivATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetArrayObjectivATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetArrayObjectivATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVariantArrayObjectATI (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glVariantArrayObjectATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVariantArrayObjectATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVariantArrayObjectfvATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetVariantArrayObjectfvATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVariantArrayObjectfvATI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVariantArrayObjectivATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVariantArrayObjectivATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVariantArrayObjectivATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glBeginVertexShaderEXT (needs 0)"));
        
        
        glBeginVertexShaderEXT ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginVertexShaderEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndVertexShaderEXT (needs 0)"));
        
        
        glEndVertexShaderEXT ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndVertexShaderEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindVertexShaderEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBindVertexShaderEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindVertexShaderEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenVertexShadersEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint ret =
        glGenVertexShadersEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGenVertexShadersEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDeleteVertexShaderEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDeleteVertexShaderEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDeleteVertexShaderEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glShaderOp1EXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glShaderOp1EXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glShaderOp1EXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glShaderOp2EXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glShaderOp2EXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glShaderOp2EXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glShaderOp3EXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glShaderOp3EXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glShaderOp3EXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glSwizzleEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        
        glSwizzleEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSwizzleEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glWriteMaskEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        
        glWriteMaskEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glWriteMaskEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glInsertComponentEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glInsertComponentEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glInsertComponentEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glExtractComponentEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glExtractComponentEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glExtractComponentEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGenSymbolsEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint ret =
        glGenSymbolsEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGenSymbolsEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEnableVariantClientStateEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glEnableVariantClientStateEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableVariantClientStateEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glDisableVariantClientStateEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glDisableVariantClientStateEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableVariantClientStateEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindLightParameterEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint ret =
        glBindLightParameterEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glBindLightParameterEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindMaterialParameterEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint ret =
        glBindMaterialParameterEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glBindMaterialParameterEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBindTexGenParameterEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint ret =
        glBindTexGenParameterEXT (
            arg_0
          , arg_1
          , arg_2);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glBindTexGenParameterEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindTextureUnitParameterEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint ret =
        glBindTextureUnitParameterEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glBindTextureUnitParameterEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindParameterEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint ret =
        glBindParameterEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glBindParameterEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIsVariantEnabledEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean ret =
        glIsVariantEnabledEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsVariantEnabledEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVariantBooleanvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLboolean ret;
        glGetVariantBooleanvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVariantBooleanvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVariantIntegervEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVariantIntegervEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVariantIntegervEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVariantFloatvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetVariantFloatvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVariantFloatvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetInvariantBooleanvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLboolean ret;
        glGetInvariantBooleanvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetInvariantBooleanvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetInvariantIntegervEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetInvariantIntegervEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetInvariantIntegervEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetInvariantFloatvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetInvariantFloatvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetInvariantFloatvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetLocalConstantBooleanvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLboolean ret;
        glGetLocalConstantBooleanvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetLocalConstantBooleanvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetLocalConstantIntegervEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetLocalConstantIntegervEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetLocalConstantIntegervEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetLocalConstantFloatvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetLocalConstantFloatvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetLocalConstantFloatvEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream1sATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        
        glVertexStream1sATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream1sATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream1iATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertexStream1iATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream1iATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream1fATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertexStream1fATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream1fATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream1dATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexStream1dATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream1dATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream2sATI (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        
        glVertexStream2sATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream2sATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream2iATI (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glVertexStream2iATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream2iATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream2fATI (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glVertexStream2fATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream2fATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream2dATI (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexStream2dATI (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream2dATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream3sATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glVertexStream3sATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream3sATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream3iATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glVertexStream3iATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream3iATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream3fATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glVertexStream3fATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream3fATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream3dATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexStream3dATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream3dATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream4sATI (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        GLshort arg_4 = JSTO<GLshort> (args[4]);
        
        glVertexStream4sATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream4sATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream4iATI (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glVertexStream4iATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream4iATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream4fATI (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glVertexStream4fATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream4fATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexStream4dATI (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexStream4dATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexStream4dATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNormalStream3bATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLbyte arg_1 = JSTO<GLbyte> (args[1]);
        GLbyte arg_2 = JSTO<GLbyte> (args[2]);
        GLbyte arg_3 = JSTO<GLbyte> (args[3]);
        
        glNormalStream3bATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalStream3bATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNormalStream3sATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLshort arg_1 = JSTO<GLshort> (args[1]);
        GLshort arg_2 = JSTO<GLshort> (args[2]);
        GLshort arg_3 = JSTO<GLshort> (args[3]);
        
        glNormalStream3sATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalStream3sATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNormalStream3iATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glNormalStream3iATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalStream3iATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNormalStream3fATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glNormalStream3fATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalStream3fATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNormalStream3dATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glNormalStream3dATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalStream3dATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientActiveVertexStreamATI (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glClientActiveVertexStreamATI (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientActiveVertexStreamATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexBlendEnviATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertexBlendEnviATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexBlendEnviATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexBlendEnvfATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        
        glVertexBlendEnvfATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexBlendEnvfATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDrawElementArrayATI (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glDrawElementArrayATI (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawElementArrayATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawRangeElementArrayATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawRangeElementArrayATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawRangeElementArrayATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawMeshArraysSUN (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawMeshArraysSUN (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawMeshArraysSUN"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsOcclusionQueryNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsOcclusionQueryNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsOcclusionQueryNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginOcclusionQueryNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBeginOcclusionQueryNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginOcclusionQueryNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndOcclusionQueryNV (needs 0)"));
        
        
        glEndOcclusionQueryNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndOcclusionQueryNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetOcclusionQueryivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetOcclusionQueryivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetOcclusionQueryivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetOcclusionQueryuivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetOcclusionQueryuivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetOcclusionQueryuivNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glPointParameteriNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glPointParameteriNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPointParameteriNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveStencilFaceEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glActiveStencilFaceEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveStencilFaceEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glDrawElementArrayAPPLE (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glDrawElementArrayAPPLE (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawElementArrayAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glDrawRangeElementArrayAPPLE (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glDrawRangeElementArrayAPPLE (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawRangeElementArrayAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glSetFenceAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glSetFenceAPPLE (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSetFenceAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsFenceAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsFenceAPPLE (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsFenceAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTestFenceAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glTestFenceAPPLE (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glTestFenceAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFinishFenceAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glFinishFenceAPPLE (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFinishFenceAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTestObjectAPPLE (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLboolean ret =
        glTestObjectAPPLE (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glTestObjectAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFinishObjectAPPLE (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glFinishObjectAPPLE (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFinishObjectAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBindVertexArrayAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBindVertexArrayAPPLE (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindVertexArrayAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsVertexArrayAPPLE (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsVertexArrayAPPLE (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsVertexArrayAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexArrayParameteriAPPLE (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertexArrayParameteriAPPLE (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexArrayParameteriAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glFlushPixelDataRangeNV (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glFlushPixelDataRangeNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFlushPixelDataRangeNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glPrimitiveRestartNV (needs 0)"));
        
        
        glPrimitiveRestartNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPrimitiveRestartNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPrimitiveRestartIndexNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glPrimitiveRestartIndexNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPrimitiveRestartIndexNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glUnmapObjectBufferATI (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glUnmapObjectBufferATI (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUnmapObjectBufferATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glStencilOpSeparateATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        glStencilOpSeparateATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilOpSeparateATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glStencilFuncSeparateATI (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glStencilFuncSeparateATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilFuncSeparateATI"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribArrayObjectATI (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        
        glVertexAttribArrayObjectATI (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribArrayObjectATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribArrayObjectfvATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLfloat ret;
        glGetVertexAttribArrayObjectfvATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribArrayObjectfvATI"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribArrayObjectivATI (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribArrayObjectivATI (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribArrayObjectivATI"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDepthBoundsEXT (needs 2)"));
        
        GLclampd arg_0 = JSTO<GLclampd> (args[0]);
        GLclampd arg_1 = JSTO<GLclampd> (args[1]);
        
        glDepthBoundsEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthBoundsEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparateEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationSeparateEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparateEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsRenderbufferEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsRenderbufferEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsRenderbufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindRenderbufferEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindRenderbufferEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindRenderbufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glRenderbufferStorageEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glRenderbufferStorageEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRenderbufferStorageEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetRenderbufferParameterivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetRenderbufferParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetRenderbufferParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsFramebufferEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsFramebufferEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsFramebufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindFramebufferEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindFramebufferEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindFramebufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glCheckFramebufferStatusEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum ret =
        glCheckFramebufferStatusEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCheckFramebufferStatusEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture1DEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTexture1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture2DEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTexture2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTexture3DEXT (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glFramebufferTexture3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTexture3DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferRenderbufferEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glFramebufferRenderbufferEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferRenderbufferEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetFramebufferAttachmentParameterivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetFramebufferAttachmentParameterivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFramebufferAttachmentParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGenerateMipmapEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glGenerateMipmapEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGenerateMipmapEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glStencilClearTagEXT (needs 2)"));
        
        GLsizei arg_0 = JSTO<GLsizei> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glStencilClearTagEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glStencilClearTagEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glBlitFramebufferEXT (needs 10)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        GLbitfield arg_8 = JSTO<GLbitfield> (args[8]);
        GLenum arg_9 = JSTO<GLenum> (args[9]);
        
        glBlitFramebufferEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlitFramebufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glRenderbufferStorageMultisampleEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glRenderbufferStorageMultisampleEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRenderbufferStorageMultisampleEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjecti64vEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint64EXT ret;
        glGetQueryObjecti64vEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjecti64vEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetQueryObjectui64vEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64EXT ret;
        glGetQueryObjectui64vEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetQueryObjectui64vEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBufferParameteriAPPLE (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glBufferParameteriAPPLE (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBufferParameteriAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramLocalParameterI4iNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glProgramLocalParameterI4iNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramLocalParameterI4iNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramLocalParameterI4uiNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glProgramLocalParameterI4uiNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramLocalParameterI4uiNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramEnvParameterI4iNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glProgramEnvParameterI4iNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramEnvParameterI4iNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramEnvParameterI4uiNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glProgramEnvParameterI4uiNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramEnvParameterI4uiNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramLocalParameterIivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLint ret;
        glGetProgramLocalParameterIivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramLocalParameterIivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramLocalParameterIuivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLuint ret;
        glGetProgramLocalParameterIuivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramLocalParameterIuivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramEnvParameterIivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLint ret;
        glGetProgramEnvParameterIivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramEnvParameterIivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramEnvParameterIuivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLuint ret;
        glGetProgramEnvParameterIuivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramEnvParameterIuivNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glProgramVertexLimitNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glProgramVertexLimitNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramVertexLimitNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glFramebufferTextureEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureLayerEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glFramebufferTextureLayerEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureLayerEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferTextureFaceEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glFramebufferTextureFaceEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferTextureFaceEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramParameteriEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glProgramParameteriEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramParameteriEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI1iEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        glVertexAttribI1iEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI1iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI2iEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glVertexAttribI2iEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI2iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI3iEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glVertexAttribI3iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI3iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI4iEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glVertexAttribI4iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI4iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI1uiEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glVertexAttribI1uiEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI1uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI2uiEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glVertexAttribI2uiEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI2uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI3uiEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glVertexAttribI3uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI3uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribI4uiEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glVertexAttribI4uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribI4uiEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribIivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVertexAttribIivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribIivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribIuivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetVertexAttribIuivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribIuivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformuivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLuint ret;
        glGetUniformuivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformuivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetFragDataLocationEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetFragDataLocationEXT (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFragDataLocationEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUniform1uiEXT (needs 2)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glUniform1uiEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform1uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniform2uiEXT (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glUniform2uiEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform2uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glUniform3uiEXT (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glUniform3uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform3uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glUniform4uiEXT (needs 5)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glUniform4uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniform4uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glDrawArraysInstancedEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glDrawArraysInstancedEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawArraysInstancedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexBufferEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glTexBufferEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexBufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDepthRangedNV (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glDepthRangedNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthRangedNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClearDepthdNV (needs 1)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        
        glClearDepthdNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearDepthdNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDepthBoundsdNV (needs 2)"));
        
        GLdouble arg_0 = JSTO<GLdouble> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glDepthBoundsdNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDepthBoundsdNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glRenderbufferStorageMultisampleCoverageNV (needs 6)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glRenderbufferStorageMultisampleCoverageNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glRenderbufferStorageMultisampleCoverageNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glColorMaskIndexedEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean arg_1 = JSTO<GLboolean> (args[1]);
        GLboolean arg_2 = JSTO<GLboolean> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLboolean arg_4 = JSTO<GLboolean> (args[4]);
        
        glColorMaskIndexedEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorMaskIndexedEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetBooleanIndexedvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLboolean ret;
        glGetBooleanIndexedvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBooleanIndexedvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetIntegerIndexedvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLint ret;
        glGetIntegerIndexedvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetIntegerIndexedvEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEnableIndexedEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glEnableIndexedEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableIndexedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDisableIndexedEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDisableIndexedEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableIndexedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIsEnabledIndexedEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLboolean ret =
        glIsEnabledIndexedEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsEnabledIndexedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginTransformFeedbackNV (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBeginTransformFeedbackNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndTransformFeedbackNV (needs 0)"));
        
        
        glEndTransformFeedbackNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBindBufferBaseNV (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glBindBufferBaseNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindBufferBaseNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetVaryingLocationNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLchar ret;
        glGetVaryingLocationNV (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVaryingLocationNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTransformFeedbackVaryingNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLint ret;
        glGetTransformFeedbackVaryingNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTransformFeedbackVaryingNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glUniformBufferEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glUniformBufferEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUniformBufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformBufferSizeEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint ret =
        glGetUniformBufferSizeEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformBufferSizeEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformOffsetEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLintptr ret =
        glGetUniformOffsetEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformOffsetEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexParameterIivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetTexParameterIivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexParameterIivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetTexParameterIuivEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetTexParameterIuivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTexParameterIuivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glClearColorIiEXT (needs 4)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glClearColorIiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearColorIiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glClearColorIuiEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glClearColorIuiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClearColorIuiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glFrameTerminatorGREMEDY (needs 0)"));
        
        
        glFrameTerminatorGREMEDY ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFrameTerminatorGREMEDY"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBeginConditionalRenderNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBeginConditionalRenderNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginConditionalRenderNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndConditionalRenderNV (needs 0)"));
        
        
        glEndConditionalRenderNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndConditionalRenderNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVideoivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVideouivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint ret;
        glGetVideouivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideouivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoi64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint64EXT ret;
        glGetVideoi64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoi64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoui64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64EXT ret;
        glGetVideoui64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoui64vNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginTransformFeedbackEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glBeginTransformFeedbackEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginTransformFeedbackEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glEndTransformFeedbackEXT (needs 0)"));
        
        
        glEndTransformFeedbackEXT ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndTransformFeedbackEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBindBufferBaseEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glBindBufferBaseEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindBufferBaseEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glClientAttribDefaultEXT (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glClientAttribDefaultEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glClientAttribDefaultEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glPushClientAttribDefaultEXT (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glPushClientAttribDefaultEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPushClientAttribDefaultEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMatrixLoadIdentityEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glMatrixLoadIdentityEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixLoadIdentityEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMatrixRotatefEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glMatrixRotatefEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixRotatefEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glMatrixRotatedEXT (needs 5)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glMatrixRotatedEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixRotatedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMatrixScalefEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMatrixScalefEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixScalefEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMatrixScaledEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMatrixScaledEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixScaledEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMatrixTranslatefEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLfloat arg_1 = JSTO<GLfloat> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMatrixTranslatefEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixTranslatefEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMatrixTranslatedEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMatrixTranslatedEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixTranslatedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glMatrixFrustumEXT (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        GLdouble arg_6 = JSTO<GLdouble> (args[6]);
        
        glMatrixFrustumEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixFrustumEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glMatrixOrthoEXT (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        GLdouble arg_6 = JSTO<GLdouble> (args[6]);
        
        glMatrixOrthoEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixOrthoEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMatrixPopEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glMatrixPopEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixPopEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMatrixPushEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glMatrixPushEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMatrixPushEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTextureParameterfEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glTextureParameterfEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureParameterfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTextureParameteriEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glTextureParameteriEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureParameteriEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glCopyTextureImage1DEXT (needs 8)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        
        glCopyTextureImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTextureImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyTextureImage2DEXT (needs 9)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLint arg_8 = JSTO<GLint> (args[8]);
        
        glCopyTextureImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTextureImage2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glCopyTextureSubImage1DEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        
        glCopyTextureSubImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTextureSubImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyTextureSubImage2DEXT (needs 9)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        
        glCopyTextureSubImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTextureSubImage2DEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureParameterfvEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetTextureParameterfvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureParameterivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetTextureParameterivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureParameterivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureLevelParameterfvEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLfloat ret;
        glGetTextureLevelParameterfvEXT (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureLevelParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureLevelParameterivEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLint ret;
        glGetTextureLevelParameterivEXT (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureLevelParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glCopyTextureSubImage3DEXT (needs 10)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        GLsizei arg_9 = JSTO<GLsizei> (args[9]);
        
        glCopyTextureSubImage3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyTextureSubImage3DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexParameterfEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexParameterfEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexParameterfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexParameteriEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexParameteriEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexParameteriEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glCopyMultiTexImage1DEXT (needs 8)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        
        glCopyMultiTexImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyMultiTexImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyMultiTexImage2DEXT (needs 9)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLint arg_8 = JSTO<GLint> (args[8]);
        
        glCopyMultiTexImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyMultiTexImage2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glCopyMultiTexSubImage1DEXT (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        
        glCopyMultiTexSubImage1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyMultiTexSubImage1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glCopyMultiTexSubImage2DEXT (needs 9)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        
        glCopyMultiTexSubImage2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyMultiTexSubImage2DEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexParameterfvEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetMultiTexParameterfvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexParameterivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetMultiTexParameterivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexParameterivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexLevelParameterfvEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLfloat ret;
        glGetMultiTexLevelParameterfvEXT (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexLevelParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexLevelParameterivEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        
        GLint ret;
        glGetMultiTexLevelParameterivEXT (arg_0, arg_1, arg_2, arg_3, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexLevelParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 10)
          return ThrowException
            (String::New("Not enough arguments for glCopyMultiTexSubImage3DEXT (needs 10)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        GLint arg_7 = JSTO<GLint> (args[7]);
        GLsizei arg_8 = JSTO<GLsizei> (args[8]);
        GLsizei arg_9 = JSTO<GLsizei> (args[9]);
        
        glCopyMultiTexSubImage3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyMultiTexSubImage3DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBindMultiTextureEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glBindMultiTextureEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindMultiTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEnableClientStateIndexedEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glEnableClientStateIndexedEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableClientStateIndexedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDisableClientStateIndexedEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDisableClientStateIndexedEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableClientStateIndexedEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexEnvfEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexEnvfEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexEnvfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexEnviEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexEnviEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexEnviEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexGendEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glMultiTexGendEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexGendEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexGenfEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glMultiTexGenfEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexGenfEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexGeniEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glMultiTexGeniEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexGeniEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexEnvfvEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetMultiTexEnvfvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexEnvfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexEnvivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetMultiTexEnvivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexEnvivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexGendvEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLdouble ret;
        glGetMultiTexGendvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexGendvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexGenfvEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetMultiTexGenfvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexGenfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexGenivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetMultiTexGenivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexGenivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFloatIndexedvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLfloat ret;
        glGetFloatIndexedvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFloatIndexedvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetDoubleIndexedvEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLdouble ret;
        glGetDoubleIndexedvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetDoubleIndexedvEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glNamedProgramLocalParameter4dEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        GLdouble arg_6 = JSTO<GLdouble> (args[6]);
        
        glNamedProgramLocalParameter4dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedProgramLocalParameter4dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glNamedProgramLocalParameter4fEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        GLfloat arg_6 = JSTO<GLfloat> (args[6]);
        
        glNamedProgramLocalParameter4fEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedProgramLocalParameter4fEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedProgramLocalParameterdvEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        GLdouble ret;
        glGetNamedProgramLocalParameterdvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedProgramLocalParameterdvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedProgramLocalParameterfvEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        GLfloat ret;
        glGetNamedProgramLocalParameterfvEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedProgramLocalParameterfvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedProgramivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetNamedProgramivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedProgramivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glNamedProgramLocalParameterI4iEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        
        glNamedProgramLocalParameterI4iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedProgramLocalParameterI4iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glNamedProgramLocalParameterI4uiEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        
        glNamedProgramLocalParameterI4uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedProgramLocalParameterI4uiEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedProgramLocalParameterIivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        GLint ret;
        glGetNamedProgramLocalParameterIivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedProgramLocalParameterIivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedProgramLocalParameterIuivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        GLuint ret;
        glGetNamedProgramLocalParameterIuivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedProgramLocalParameterIuivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureParameterIivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetTextureParameterIivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureParameterIivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetTextureParameterIuivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLuint ret;
        glGetTextureParameterIuivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetTextureParameterIuivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexParameterIivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetMultiTexParameterIivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexParameterIivEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetMultiTexParameterIuivEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLuint ret;
        glGetMultiTexParameterIuivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultiTexParameterIuivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1fEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        
        glProgramUniform1fEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2fEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        
        glProgramUniform2fEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3fEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        
        glProgramUniform3fEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4fEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLfloat arg_2 = JSTO<GLfloat> (args[2]);
        GLfloat arg_3 = JSTO<GLfloat> (args[3]);
        GLfloat arg_4 = JSTO<GLfloat> (args[4]);
        GLfloat arg_5 = JSTO<GLfloat> (args[5]);
        
        glProgramUniform4fEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4fEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1iEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        
        glProgramUniform1iEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2iEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glProgramUniform2iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3iEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glProgramUniform3iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4iEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glProgramUniform4iEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4iEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1uiEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glProgramUniform1uiEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2uiEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glProgramUniform2uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3uiEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glProgramUniform3uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4uiEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        GLuint arg_5 = JSTO<GLuint> (args[5]);
        
        glProgramUniform4uiEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4uiEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glUnmapNamedBufferEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glUnmapNamedBufferEXT (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glUnmapNamedBufferEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedBufferParameterivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetNamedBufferParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedBufferParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glTextureBufferEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glTextureBufferEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureBufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexBufferEXT (needs 4)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glMultiTexBufferEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexBufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNamedRenderbufferStorageEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glNamedRenderbufferStorageEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedRenderbufferStorageEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedRenderbufferParameterivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetNamedRenderbufferParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedRenderbufferParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glCheckNamedFramebufferStatusEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum ret =
        glCheckNamedFramebufferStatusEXT (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glCheckNamedFramebufferStatusEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTexture1DEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glNamedFramebufferTexture1DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTexture1DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTexture2DEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glNamedFramebufferTexture2DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTexture2DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTexture3DEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        
        glNamedFramebufferTexture3DEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTexture3DEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferRenderbufferEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLuint arg_3 = JSTO<GLuint> (args[3]);
        
        glNamedFramebufferRenderbufferEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferRenderbufferEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedFramebufferAttachmentParameterivEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetNamedFramebufferAttachmentParameterivEXT (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedFramebufferAttachmentParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGenerateTextureMipmapEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glGenerateTextureMipmapEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGenerateTextureMipmapEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGenerateMultiTexMipmapEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glGenerateMultiTexMipmapEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glGenerateMultiTexMipmapEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferDrawBufferEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glFramebufferDrawBufferEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferDrawBufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFramebufferReadBufferEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glFramebufferReadBufferEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFramebufferReadBufferEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetFramebufferParameterivEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetFramebufferParameterivEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetFramebufferParameterivEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glNamedRenderbufferStorageMultisampleEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glNamedRenderbufferStorageMultisampleEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedRenderbufferStorageMultisampleEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glNamedRenderbufferStorageMultisampleCoverageEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        
        glNamedRenderbufferStorageMultisampleCoverageEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedRenderbufferStorageMultisampleCoverageEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTextureEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        
        glNamedFramebufferTextureEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTextureLayerEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        
        glNamedFramebufferTextureLayerEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTextureLayerEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glNamedFramebufferTextureFaceEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glNamedFramebufferTextureFaceEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNamedFramebufferTextureFaceEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTextureRenderbufferEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glTextureRenderbufferEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureRenderbufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glMultiTexRenderbufferEXT (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLuint arg_2 = JSTO<GLuint> (args[2]);
        
        glMultiTexRenderbufferEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMultiTexRenderbufferEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform1dEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glProgramUniform1dEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform1dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform2dEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glProgramUniform2dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform2dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform3dEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glProgramUniform3dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform3dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 6)
          return ThrowException
            (String::New("Not enough arguments for glProgramUniform4dEXT (needs 6)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        GLdouble arg_5 = JSTO<GLdouble> (args[5]);
        
        glProgramUniform4dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProgramUniform4dEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetMultisamplefvNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLfloat ret;
        glGetMultisamplefvNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetMultisamplefvNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glSampleMaskIndexedNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLbitfield arg_1 = JSTO<GLbitfield> (args[1]);
        
        glSampleMaskIndexedNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSampleMaskIndexedNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glTexRenderbufferNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glTexRenderbufferNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexRenderbufferNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBindTransformFeedbackNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glBindTransformFeedbackNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsTransformFeedbackNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsTransformFeedbackNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glPauseTransformFeedbackNV (needs 0)"));
        
        
        glPauseTransformFeedbackNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glPauseTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glResumeTransformFeedbackNV (needs 0)"));
        
        
        glResumeTransformFeedbackNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glResumeTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDrawTransformFeedbackNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glDrawTransformFeedbackNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDrawTransformFeedbackNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginPerfMonitorAMD (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBeginPerfMonitorAMD (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginPerfMonitorAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEndPerfMonitorAMD (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glEndPerfMonitorAMD (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndPerfMonitorAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTessellationFactorAMD (needs 1)"));
        
        GLfloat arg_0 = JSTO<GLfloat> (args[0]);
        
        glTessellationFactorAMD (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTessellationFactorAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glTessellationModeAMD (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glTessellationModeAMD (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTessellationModeAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glProvokingVertexEXT (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glProvokingVertexEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glProvokingVertexEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncIndexedAMD (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendFuncIndexedAMD (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncIndexedAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glBlendFuncSeparateIndexedAMD (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLenum arg_4 = JSTO<GLenum> (args[4]);
        
        glBlendFuncSeparateIndexedAMD (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendFuncSeparateIndexedAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationIndexedAMD (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glBlendEquationIndexedAMD (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationIndexedAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glBlendEquationSeparateIndexedAMD (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        glBlendEquationSeparateIndexedAMD (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBlendEquationSeparateIndexedAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glEnableVertexAttribAPPLE (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glEnableVertexAttribAPPLE (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEnableVertexAttribAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glDisableVertexAttribAPPLE (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glDisableVertexAttribAPPLE (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glDisableVertexAttribAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIsVertexAttribEnabledAPPLE (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLboolean ret =
        glIsVertexAttribEnabledAPPLE (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsVertexAttribEnabledAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glObjectPurgeableAPPLE (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum ret =
        glObjectPurgeableAPPLE (
            arg_0
          , arg_1
          , arg_2);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glObjectPurgeableAPPLE"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glObjectUnpurgeableAPPLE (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum ret =
        glObjectUnpurgeableAPPLE (
            arg_0
          , arg_1
          , arg_2);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glObjectUnpurgeableAPPLE"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetObjectParameterivAPPLE (needs 3)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetObjectParameterivAPPLE (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetObjectParameterivAPPLE"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glBeginVideoCaptureNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glBeginVideoCaptureNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBeginVideoCaptureNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glBindVideoCaptureStreamTextureNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLenum arg_3 = JSTO<GLenum> (args[3]);
        GLuint arg_4 = JSTO<GLuint> (args[4]);
        
        glBindVideoCaptureStreamTextureNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindVideoCaptureStreamTextureNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEndVideoCaptureNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glEndVideoCaptureNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEndVideoCaptureNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoCaptureivNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint ret;
        glGetVideoCaptureivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoCaptureivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoCaptureStreamivNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLint ret;
        glGetVideoCaptureStreamivNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoCaptureStreamivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoCaptureStreamfvNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLfloat ret;
        glGetVideoCaptureStreamfvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoCaptureStreamfvNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glGetVideoCaptureStreamdvNV (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        
        GLdouble ret;
        glGetVideoCaptureStreamdvNV (arg_0, arg_1, arg_2, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVideoCaptureStreamdvNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 15)
          return ThrowException
            (String::New("Not enough arguments for glCopyImageSubDataNV (needs 15)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLint arg_5 = JSTO<GLint> (args[5]);
        GLuint arg_6 = JSTO<GLuint> (args[6]);
        GLenum arg_7 = JSTO<GLenum> (args[7]);
        GLint arg_8 = JSTO<GLint> (args[8]);
        GLint arg_9 = JSTO<GLint> (args[9]);
        GLint arg_10 = JSTO<GLint> (args[10]);
        GLint arg_11 = JSTO<GLint> (args[11]);
        GLsizei arg_12 = JSTO<GLsizei> (args[12]);
        GLsizei arg_13 = JSTO<GLsizei> (args[13]);
        GLsizei arg_14 = JSTO<GLsizei> (args[14]);
        
        glCopyImageSubDataNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8
          , arg_9
          , arg_10
          , arg_11
          , arg_12
          , arg_13
          , arg_14);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glCopyImageSubDataNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glUseShaderProgramEXT (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        glUseShaderProgramEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glUseShaderProgramEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glActiveProgramEXT (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glActiveProgramEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glActiveProgramEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMakeBufferResidentNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glMakeBufferResidentNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMakeBufferResidentNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMakeBufferNonResidentNV (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        glMakeBufferNonResidentNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMakeBufferNonResidentNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsBufferResidentNV (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLboolean ret =
        glIsBufferResidentNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsBufferResidentNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glMakeNamedBufferResidentNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        glMakeNamedBufferResidentNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMakeNamedBufferResidentNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMakeNamedBufferNonResidentNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        glMakeNamedBufferNonResidentNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMakeNamedBufferNonResidentNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glIsNamedBufferResidentNV (needs 1)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLboolean ret =
        glIsNamedBufferResidentNV (
            arg_0);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsNamedBufferResidentNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetBufferParameterui64vNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64EXT ret;
        glGetBufferParameterui64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetBufferParameterui64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetNamedBufferParameterui64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64EXT ret;
        glGetNamedBufferParameterui64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetNamedBufferParameterui64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glGetIntegerui64vNV (needs 1)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint64EXT ret;
        glGetIntegerui64vNV (arg_0, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetIntegerui64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformui64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLuint64EXT ret;
        glGetUniformui64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformui64vNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexFormatNV (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glVertexFormatNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glNormalFormatNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glNormalFormatNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glNormalFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glColorFormatNV (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glColorFormatNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glColorFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIndexFormatNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glIndexFormatNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glIndexFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glTexCoordFormatNV (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glTexCoordFormatNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexCoordFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glEdgeFlagFormatNV (needs 1)"));
        
        GLsizei arg_0 = JSTO<GLsizei> (args[0]);
        
        glEdgeFlagFormatNV (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glEdgeFlagFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glSecondaryColorFormatNV (needs 3)"));
        
        GLint arg_0 = JSTO<GLint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        
        glSecondaryColorFormatNV (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glSecondaryColorFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glFogCoordFormatNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        
        glFogCoordFormatNV (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glFogCoordFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribFormatNV (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        
        glVertexAttribFormatNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribIFormatNV (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glVertexAttribIFormatNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribIFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glTextureBarrierNV (needs 0)"));
        
        
        glTextureBarrierNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureBarrierNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glBindImageTextureEXT (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLint arg_2 = JSTO<GLint> (args[2]);
        GLboolean arg_3 = JSTO<GLboolean> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLenum arg_5 = JSTO<GLenum> (args[5]);
        GLint arg_6 = JSTO<GLint> (args[6]);
        
        glBindImageTextureEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glBindImageTextureEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 1)
          return ThrowException
            (String::New("Not enough arguments for glMemoryBarrierEXT (needs 1)"));
        
        GLbitfield arg_0 = JSTO<GLbitfield> (args[0]);
        
        glMemoryBarrierEXT (
            arg_0);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glMemoryBarrierEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL1dEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        
        glVertexAttribL1dEXT (
            arg_0
          , arg_1);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL1dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 3)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL2dEXT (needs 3)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        
        glVertexAttribL2dEXT (
            arg_0
          , arg_1
          , arg_2);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL2dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL3dEXT (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        
        glVertexAttribL3dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL3dEXT"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 5)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribL4dEXT (needs 5)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLdouble arg_1 = JSTO<GLdouble> (args[1]);
        GLdouble arg_2 = JSTO<GLdouble> (args[2]);
        GLdouble arg_3 = JSTO<GLdouble> (args[3]);
        GLdouble arg_4 = JSTO<GLdouble> (args[4]);
        
        glVertexAttribL4dEXT (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribL4dEXT"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribLdvEXT (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLdouble ret;
        glGetVertexAttribLdvEXT (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribLdvEXT"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetProgramSubroutineParameteruivNV (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        
        GLuint ret;
        glGetProgramSubroutineParameteruivNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetProgramSubroutineParameteruivNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetUniformi64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLint arg_1 = JSTO<GLint> (args[1]);
        
        GLint64EXT ret;
        glGetUniformi64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetUniformi64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribLi64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLint64EXT ret;
        glGetVertexAttribLi64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribLi64vNV"), tmpl -> GetFunction ());
  }
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {       
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glGetVertexAttribLui64vNV (needs 2)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        
        GLuint64EXT ret;
        glGetVertexAttribLui64vNV (arg_0, arg_1, &ret);
        return TOJS (ret);
      });
    gl -> Set (String::NewSymbol ("glGetVertexAttribLui64vNV"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 4)
          return ThrowException
            (String::New("Not enough arguments for glVertexAttribLFormatNV (needs 4)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLint arg_1 = JSTO<GLint> (args[1]);
        GLenum arg_2 = JSTO<GLenum> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        
        glVertexAttribLFormatNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVertexAttribLFormatNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 2)
          return ThrowException
            (String::New("Not enough arguments for glIsNameAMD (needs 2)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLuint arg_1 = JSTO<GLuint> (args[1]);
        GLboolean ret =
        glIsNameAMD (
            arg_0
          , arg_1);
        return TOJS(ret);
      });
    gl -> Set (String::NewSymbol ("glIsNameAMD"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 0)
          return ThrowException
            (String::New("Not enough arguments for glVDPAUFiniNV (needs 0)"));
        
        
        glVDPAUFiniNV ();
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glVDPAUFiniNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glTexImage2DMultisampleCoverageNV (needs 7)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLboolean arg_6 = JSTO<GLboolean> (args[6]);
        
        glTexImage2DMultisampleCoverageNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexImage2DMultisampleCoverageNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTexImage3DMultisampleCoverageNV (needs 8)"));
        
        GLenum arg_0 = JSTO<GLenum> (args[0]);
        GLsizei arg_1 = JSTO<GLsizei> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLboolean arg_7 = JSTO<GLboolean> (args[7]);
        
        glTexImage3DMultisampleCoverageNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTexImage3DMultisampleCoverageNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 7)
          return ThrowException
            (String::New("Not enough arguments for glTextureImage2DMultisampleNV (needs 7)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLboolean arg_6 = JSTO<GLboolean> (args[6]);
        
        glTextureImage2DMultisampleNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureImage2DMultisampleNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTextureImage3DMultisampleNV (needs 8)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLint arg_3 = JSTO<GLint> (args[3]);
        GLsizei arg_4 = JSTO<GLsizei> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLboolean arg_7 = JSTO<GLboolean> (args[7]);
        
        glTextureImage3DMultisampleNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureImage3DMultisampleNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 8)
          return ThrowException
            (String::New("Not enough arguments for glTextureImage2DMultisampleCoverageNV (needs 8)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLboolean arg_7 = JSTO<GLboolean> (args[7]);
        
        glTextureImage2DMultisampleCoverageNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureImage2DMultisampleCoverageNV"), tmpl -> GetFunction ());
  }


  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (args . Length () < 9)
          return ThrowException
            (String::New("Not enough arguments for glTextureImage3DMultisampleCoverageNV (needs 9)"));
        
        GLuint arg_0 = JSTO<GLuint> (args[0]);
        GLenum arg_1 = JSTO<GLenum> (args[1]);
        GLsizei arg_2 = JSTO<GLsizei> (args[2]);
        GLsizei arg_3 = JSTO<GLsizei> (args[3]);
        GLint arg_4 = JSTO<GLint> (args[4]);
        GLsizei arg_5 = JSTO<GLsizei> (args[5]);
        GLsizei arg_6 = JSTO<GLsizei> (args[6]);
        GLsizei arg_7 = JSTO<GLsizei> (args[7]);
        GLboolean arg_8 = JSTO<GLboolean> (args[8]);
        
        glTextureImage3DMultisampleCoverageNV (
            arg_0
          , arg_1
          , arg_2
          , arg_3
          , arg_4
          , arg_5
          , arg_6
          , arg_7
          , arg_8);
        return Undefined();
      });
    gl -> Set (String::NewSymbol ("glTextureImage3DMultisampleCoverageNV"), tmpl -> GetFunction ());
  }

// -*- mode: c++ -*-

}
