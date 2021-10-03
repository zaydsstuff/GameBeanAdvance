include(UseD)
add_d_conditions(VERSION GL_AllowDeprecated default Have_bindbc_opengl Have_bindbc_loader DEBUG )
include_directories(/home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/)
include_directories(/home/xdrie/.dub/packages/bindbc-loader-1.0.1/bindbc-loader/source/)
add_library(bindbc-opengl 
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/arb_01.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_30.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_31.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_32.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_33.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_40.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_41.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_42.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_43.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_44.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_45.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/core_46.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/arb/package.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep11.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep12.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep13.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep14.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep20.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep21.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/dep/dep30.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl11.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl12.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl13.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl14.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl15.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl20.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl21.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl30.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl31.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl32.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl33.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl40.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl41.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl42.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl43.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl44.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl45.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/gl46.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/nv/nv_30.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/nv/nv_32.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/nv/nv_44.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/nv/package.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/package.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/bind/types.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/config.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/context.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/gl.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/package.d
    /home/xdrie/.dub/packages/bindbc-opengl-1.0.0/bindbc-opengl/source/bindbc/opengl/util.d
)
target_link_libraries(bindbc-opengl bindbc-loader dl)
set_target_properties(bindbc-opengl PROPERTIES TEXT_INCLUDE_DIRECTORIES "")