{
    "targets": [
        {
            "conditions" : [
                [ 'OS=="mac"', {
                    'xcode_settings': {
                        'GCC_ENABLE_CPP_RTTI': 'YES',
                        'MACOSX_DEPLOYMENT_TARGET': '10.7',       # -mmacosx-version-min=10.7
                        'OTHER_CFLAGS': [
                            '-D_DEBUG',
                            '-g',
                            '-std=c++11',
                            '-stdlib=libc++',
                            '-fexceptions',
                            '-Wno-ignored-qualifiers',
                            '-Qunused-arguments'
                        ],
                        "link_settings" : {
                            "libraries" : ["-framework OpenGL -framework AGL"]
                        }
                    }
                }],
                ['OS=="linux"', {
                    'cflags': [
                        '-D_DEBUG',
                        '-g',
                        '-std=gnu++0x',
                        '-fexceptions'
                    ],
                    "link_settings" : {
                        "libraries" : ["-lGL"]
                    }
                }]
            ],
            "target_name": "simplegl",
            "sources": ["src/geeell.cc", "src/geeell_by_hand.cc", "src/simplegl.cc"]
        }
    ]
}
