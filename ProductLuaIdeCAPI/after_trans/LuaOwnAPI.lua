return {
  media = {
    type = "lib",
    description = [[description: namespace media]],
    childs = {
      MTData = {
        type = "class",
        inherits = "media::Ref",
        childs = {
          Null = {
            type = "value",
            description = [[description: var: media.MTData]],
            valuetype = "media.MTData",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( const MTData& other )]],
            args = '(const MTData& other)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( const MTData& other )]],
            args = '(const MTData& other)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          getBytes = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "unsigned char* ",
            valuetype = "unsigned char",
          },
          getSize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "ssize_t ",
            valuetype = "ssize_t",
          },
          copy = {
            type = "method",
            description = [[description: const unsigned char* bytes, const ssize_t size]],
            args = '(const unsigned char* bytes, const ssize_t size)',
            returns = "void ",
            valuetype = "void",
          },
          fastSet = {
            type = "method",
            description = [[description: unsigned char* bytes, const ssize_t size]],
            args = '(unsigned char* bytes, const ssize_t size)',
            returns = "void ",
            valuetype = "void",
          },
          clear = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          isNull = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
        },
      },
      MEDIA_DECODE_VIDEO_END = {
        type = "value",
      },
      MEDIA_DECODE_VIDEO_ERROR = {
        type = "value",
      },
      MEDIA_DECODE_VIDEO_NOTHING = {
        type = "value",
      },
      MEDIA_DECODE_VIDEO_RETRY = {
        type = "value",
      },
      MEDIA_DECODE_VIDEO_SUCCESS = {
        type = "value",
      },
      MEDIA_READ_PKT_END = {
        type = "value",
      },
      MEDIA_READ_PKT_NOTHING = {
        type = "value",
      },
      MEDIA_READ_PKT_RETRY = {
        type = "value",
      },
      MEDIA_READ_PKT_SUCCESS = {
        type = "value",
      },
      MEDIA_DECODE_AUDIO_END = {
        type = "value",
      },
      MEDIA_DECODE_AUDIO_ERROR = {
        type = "value",
      },
      MEDIA_DECODE_AUDIO_NOTHING = {
        type = "value",
      },
      MEDIA_DECODE_AUDIO_SUCCESS = {
        type = "value",
      },
      MTMVConfig = {
        type = "class",
        childs = {
          getInstance = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "MTMVConfig* ",
            valuetype = "media.MTMVConfig",
          },
          releaseConfigResource = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getMTMVCoreVersion = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
          setLogLevel = {
            type = "method",
            description = [[description: int level]],
            args = '(int level)',
            returns = "void ",
            valuetype = "void",
          },
          getMVSizeWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getMVSizeHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getMVShortSide = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getMVSize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "NS_MEDIA::Size& ",
            valuetype = "media.Size",
          },
          setMVSize = {
            type = "method",
            description = [[description: int width, int height]],
            args = '(int width, int height)',
            returns = "void ",
            valuetype = "void",
          },
          getMaterialPath = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string& ",
            valuetype = "std::string",
          },
          setMaterialPath = {
            type = "method",
            description = [[description: const std::string& path]],
            args = '(const std::string& path)',
            returns = "void ",
            valuetype = "void",
          },
          isVertical = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setUseGlFinish = {
            type = "method",
            description = [[description: bool use]],
            args = '(bool use)',
            returns = "void ",
            valuetype = "void",
          },
          getUseGlFinish = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setVideoCRF = {
            type = "method",
            description = [[description: float crf]],
            args = '(float crf)',
            returns = "void ",
            valuetype = "void",
          },
          getVideoCRF = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setVideoOutputBitrate = {
            type = "method",
            description = [[description: int64_t bitrate]],
            args = '(int64_t bitrate)',
            returns = "void ",
            valuetype = "void",
          },
          getVideoOutputBitrate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          setAudioOutputBitrate = {
            type = "method",
            description = [[description: int64_t bitrate]],
            args = '(int64_t bitrate)',
            returns = "void ",
            valuetype = "void",
          },
          getAudioOutputBitrate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          setVideoOutputFrameRate = {
            type = "method",
            description = [[description: int fps]],
            args = '(int fps)',
            returns = "void ",
            valuetype = "void",
          },
          getVideoOutputFrameRate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
        },
      },
      Clonable = {
        type = "class",
        childs = {
          clone = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Clonable *",
            valuetype = "media.Clonable",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
        },
      },
      Ref = {
        type = "class",
        childs = {
          normal_type = {
            type = "value",
          },
          gl_type = {
            type = "value",
          },
          retain = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          release = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          autorelease = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Ref *",
            valuetype = "media.Ref",
          },
          getReferenceCount = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "unsigned int ",
            valuetype = "unsigned int",
          },
          setType = {
            type = "method",
            description = [[description: RefType type]],
            args = '(RefType type)',
            returns = "void ",
            valuetype = "void",
          },
          getTag = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string &",
            valuetype = "std::string",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          m_nReferenceCount = {
            type = "value",
            description = [[description: var: unsigned int]],
            valuetype = "unsigned int",
          },
          m_refType = {
            type = "value",
            description = [[description: var: RefType]],
            valuetype = "RefType",
          },
          m_sTag = {
            type = "value",
            description = [[description: var: std::string]],
            valuetype = "std::string",
          },
        },
      },
      Color3B = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( GLubyte _r, GLubyte _g, GLubyte _b )]],
            args = '(GLubyte _r, GLubyte _g, GLubyte _b)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( GLubyte _r, GLubyte _g, GLubyte _b )]],
            args = '(GLubyte _r, GLubyte _g, GLubyte _b)',
            returns = "void",
          },
          Color3B = {
            type = "method",
            description = [[description: const Color4B& color]],
            args = '(const Color4B& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          Color3B = {
            type = "method",
            description = [[description: 
   const Color4B& color
   ( const Color4F& color )]],
            args = '(const Color4F& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          equals = {
            type = "method",
            description = [[description: const Color3B& other]],
            args = '(const Color3B& other)',
            returns = "bool ",
            valuetype = "bool",
          },
          r = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          g = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          b = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          WHITE = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          YELLOW = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          BLUE = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          GREEN = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          RED = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          MAGENTA = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          BLACK = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          ORANGE = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          GRAY = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
        },
      },
      Color4B = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a )]],
            args = '(GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a )]],
            args = '(GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a)',
            returns = "void",
          },
          Color4B = {
            type = "method",
            description = [[description: const Color3B& color]],
            args = '(const Color3B& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          Color4B = {
            type = "method",
            description = [[description: 
   const Color3B& color
   ( const Color4F& color )]],
            args = '(const Color4F& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          r = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          g = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          b = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          a = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          WHITE = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          YELLOW = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          BLUE = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          GREEN = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          RED = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          MAGENTA = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          BLACK = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          ORANGE = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
          GRAY = {
            type = "value",
            description = [[description: var: Color4B]],
            valuetype = "Color4B",
          },
        },
      },
      Color4F = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float _r, float _g, float _b, float _a )]],
            args = '(float _r, float _g, float _b, float _a)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float _r, float _g, float _b, float _a )]],
            args = '(float _r, float _g, float _b, float _a)',
            returns = "void",
          },
          Color4F = {
            type = "method",
            description = [[description: const Color3B& color]],
            args = '(const Color3B& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          Color4F = {
            type = "method",
            description = [[description: 
   const Color3B& color
   ( const Color4B& color )]],
            args = '(const Color4B& color)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          equals = {
            type = "method",
            description = [[description: const Color4F &other]],
            args = '(const Color4F &other)',
            returns = "bool ",
            valuetype = "bool",
          },
          r = {
            type = "value",
            description = [[description: var: GLfloat]],
            valuetype = "GLfloat",
          },
          g = {
            type = "value",
            description = [[description: var: GLfloat]],
            valuetype = "GLfloat",
          },
          b = {
            type = "value",
            description = [[description: var: GLfloat]],
            valuetype = "GLfloat",
          },
          a = {
            type = "value",
            description = [[description: var: GLfloat]],
            valuetype = "GLfloat",
          },
          WHITE = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          YELLOW = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          BLUE = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          GREEN = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          RED = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          MAGENTA = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          BLACK = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          ORANGE = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          GRAY = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
        },
      },
      Vertex3F = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: : x(0), y(0), z(0]],
            args = '(: x(0), y(0), z(0)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: : x(0), y(0), z(0]],
            args = '(: x(0), y(0), z(0)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   : x(0), y(0), z(0
   ( float _x, float _y, float _z) : x(_x), y(_y), z(_z )]],
            args = '(float _x, float _y, float _z) : x(_x), y(_y), z(_z)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   : x(0), y(0), z(0
   ( float _x, float _y, float _z) : x(_x), y(_y), z(_z )]],
            args = '(float _x, float _y, float _z) : x(_x), y(_y), z(_z)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          x = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          y = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          z = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
        },
      },
      Tex2F = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: : u(0), v(0]],
            args = '(: u(0), v(0)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: : u(0), v(0]],
            args = '(: u(0), v(0)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   : u(0), v(0
   ( float _u, float _v) : u(_u), v(_ )]],
            args = '(float _u, float _v) : u(_u), v(_)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   : u(0), v(0
   ( float _u, float _v) : u(_u), v(_ )]],
            args = '(float _u, float _v) : u(_u), v(_)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          u = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          v = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
        },
      },
      V3F_C4F_T2F = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          vertices = {
            type = "value",
            description = [[description: var: Vertex3F]],
            valuetype = "Vertex3F",
          },
          colors = {
            type = "value",
            description = [[description: var: Color4F]],
            valuetype = "Color4F",
          },
          texCoords = {
            type = "value",
            description = [[description: var: Tex2F]],
            valuetype = "Tex2F",
          },
        },
      },
      V3F_C4F_T2F_Quad = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          tl = {
            type = "value",
            description = [[description: var: V3F_C4F_T2F]],
            valuetype = "V3F_C4F_T2F",
          },
          bl = {
            type = "value",
            description = [[description: var: V3F_C4F_T2F]],
            valuetype = "V3F_C4F_T2F",
          },
          tr = {
            type = "value",
            description = [[description: var: V3F_C4F_T2F]],
            valuetype = "V3F_C4F_T2F",
          },
          br = {
            type = "value",
            description = [[description: var: V3F_C4F_T2F]],
            valuetype = "V3F_C4F_T2F",
          },
        },
      },
      FontShadow = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          _shadowEnabled = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          _shadowOffset = {
            type = "value",
            description = [[description: var: media.Size]],
            valuetype = "media.Size",
          },
          _shadowBlur = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          _shadowOpacity = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
        },
      },
      FontStroke = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          _strokeEnabled = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          _strokeColor = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          _strokeAlpha = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          _strokeSize = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
        },
      },
      FontDefinition = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          _fontName = {
            type = "value",
            description = [[description: var: std::string]],
            valuetype = "std::string",
          },
          _fontSize = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          _alignment = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          _vertAlignment = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          _dimensions = {
            type = "value",
            description = [[description: var: media.Size]],
            valuetype = "media.Size",
          },
          _fontFillColor = {
            type = "value",
            description = [[description: var: Color3B]],
            valuetype = "Color3B",
          },
          _fontAlpha = {
            type = "value",
            description = [[description: var: GLubyte]],
            valuetype = "GLubyte",
          },
          _shadow = {
            type = "value",
            description = [[description: var: FontShadow]],
            valuetype = "FontShadow",
          },
          _stroke = {
            type = "value",
            description = [[description: var: FontStroke]],
            valuetype = "FontStroke",
          },
        },
      },
      AudioFrame = {
        type = "class",
        inherits = "media.Frame",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          addAudioFrameData = {
            type = "method",
            description = [[description: MMTOOLS::FrameData *audioFrameData]],
            args = '(MMTOOLS::FrameData *audioFrameData)',
            returns = "void ",
            valuetype = "void",
          },
          assembleFrame = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
        },
      },
      LAYOUT_MONO = {
        type = "value",
      },
      LAYOUT_STEREO = {
        type = "value",
      },
      LAYOUT_2POINT1 = {
        type = "value",
      },
      LAYOUT_2_1 = {
        type = "value",
      },
      LAYOUT_SURROUND = {
        type = "value",
      },
      LAYOUT_3POINT1 = {
        type = "value",
      },
      LAYOUT_4POINT0 = {
        type = "value",
      },
      LAYOUT_4POINT1 = {
        type = "value",
      },
      LAYOUT_2_2 = {
        type = "value",
      },
      LAYOUT_QUAD = {
        type = "value",
      },
      LAYOUT_5POINT0 = {
        type = "value",
      },
      LAYOUT_5POINT1 = {
        type = "value",
      },
      LAYOUT_5POINT0_BACK = {
        type = "value",
      },
      LAYOUT_5POINT1_BACK = {
        type = "value",
      },
      LAYOUT_6POINT0 = {
        type = "value",
      },
      LAYOUT_6POINT0_FRONT = {
        type = "value",
      },
      LAYOUT_HEXAGONAL = {
        type = "value",
      },
      LAYOUT_6POINT1 = {
        type = "value",
      },
      LAYOUT_6POINT1_BACK = {
        type = "value",
      },
      LAYOUT_6POINT1_FRONT = {
        type = "value",
      },
      LAYOUT_7POINT0 = {
        type = "value",
      },
      LAYOUT_7POINT0_FRONT = {
        type = "value",
      },
      LAYOUT_7POINT1 = {
        type = "value",
      },
      LAYOUT_7POINT1_WIDE = {
        type = "value",
      },
      LAYOUT_7POINT1_WIDE_BACK = {
        type = "value",
      },
      LAYOUT_OCTAGONAL = {
        type = "value",
      },
      LAYOUT_STEREO_DOWNMIX = {
        type = "value",
      },
      GRAVITY_TOP_LEFT = {
        type = "value",
      },
      GRAVITY_TOP = {
        type = "value",
      },
      GRAVITY_TOP_RIGHT = {
        type = "value",
      },
      GRAVITY_LEFT = {
        type = "value",
      },
      GRAVITY_CENTER = {
        type = "value",
      },
      GRAVITY_RIGHT = {
        type = "value",
      },
      GRAVITY_BOTTOM_LEFT = {
        type = "value",
      },
      GRAVITY_BOTTOM = {
        type = "value",
      },
      GRAVITY_BOTTOM_RIGHT = {
        type = "value",
      },
      SCALE_CROP = {
        type = "value",
      },
      SCALE_FIT = {
        type = "value",
      },
      SCALE_STRETCH = {
        type = "value",
      },
      SCALE_NONE = {
        type = "value",
      },
      ANCHOR_CANVAS = {
        type = "value",
      },
      ANCHOR_VIEWPORT = {
        type = "value",
      },
      FRAME_DISPLAY_NONE = {
        type = "value",
      },
      FRAME_DISPLAY_CLIP = {
        type = "value",
      },
      FRAME_DISPLAY_TIMELINE = {
        type = "value",
      },
      FRAME_DISPLAY_BOTH = {
        type = "value",
      },
      Clip = {
        type = "class",
        inherits = "media.ClipBase",
        childs = {
          gravity = {
            type = "value",
            description = [[description: var: GravityType]],
            valuetype = "GravityType",
          },
          scale = {
            type = "value",
            description = [[description: var: ScaleType]],
            valuetype = "ScaleType",
          },
          anchor = {
            type = "value",
            description = [[description: var: AnchorType]],
            valuetype = "AnchorType",
          },
          display = {
            type = "value",
            description = [[description: var: FrameDisplayType]],
            valuetype = "FrameDisplayType",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( string path )]],
            args = '(string path)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( string path )]],
            args = '(string path)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( string path )
   ( ReaderBase* new_reader )]],
            args = '(ReaderBase* new_reader)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( string path )
   ( ReaderBase* new_reader )]],
            args = '(ReaderBase* new_reader)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          getAudioFrame = {
            type = "method",
            description = [[description: AudioFrame *frame]],
            args = '(AudioFrame *frame)',
            returns = "bool ",
            valuetype = "bool",
          },
          GetFrameByTime = {
            type = "method",
            description = [[description: VideoFrame *frame, int64_t time]],
            args = '(VideoFrame *frame, int64_t time)',
            returns = "bool ",
            valuetype = "bool",
          },
          getReader = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "ReaderBase *",
            valuetype = "media.ReaderBase",
          },
          seekTo = {
            type = "method",
            description = [[description: int64_t time, int mode]],
            args = '(int64_t time, int mode)',
            returns = "void ",
            valuetype = "void",
          },
          setAudioParams = {
            type = "method",
            description = [[description: AudioParams *externAudioParam]],
            args = '(AudioParams *externAudioParam)',
            returns = "void ",
            valuetype = "void",
          },
          applyEffect = {
            type = "method",
            description = [[description: MTMediaEffect *effect]],
            args = '(MTMediaEffect *effect)',
            returns = "void ",
            valuetype = "void",
          },
          hasVideo = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          hasAudio = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          getRotation = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          disableAudio = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          disableVideo = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          open = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          close = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          pause = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          resume = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          startDecoder = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          stopDecoder = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          switchAudioTrack = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          Reader = {
            type = "method",
            description = [[description: ReaderBase* new_reader]],
            args = '(ReaderBase* new_reader)',
            returns = "void ",
            valuetype = "void",
          },
          Reader = {
            type = "method",
            description = [[description: 
   ReaderBase* new_reader
   ( ( void ) )]],
            args = "(void)",
            returns = "ReaderBase* ",
            valuetype = "media.ReaderBase",
          },
          End = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          End = {
            type = "method",
            description = [[description: 
   ( void )
   ( float value )]],
            args = '(float value)',
            returns = "void ",
            valuetype = "void",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
          PropertiesJSON = {
            type = "method",
            description = [[description: int64_t requested_frame]],
            args = '(int64_t requested_frame)',
            returns = "string ",
            valuetype = "string",
          },
          scale_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          scale_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          location_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          location_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          alpha = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          rotation = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          time = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          volume = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          crop_gravity = {
            type = "value",
            description = [[description: var: GravityType]],
            valuetype = "GravityType",
          },
          crop_width = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          crop_height = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          crop_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          crop_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          shear_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          shear_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c1_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c1_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c2_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c2_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c3_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c3_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c4_x = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          perspective_c4_y = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          channel_filter = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          channel_mapping = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          has_audio = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
          has_video = {
            type = "value",
            description = [[description: var: media.Keyframe]],
            valuetype = "media.Keyframe",
          },
        },
      },
      ClipBase = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          Id = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          Position = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          Layer = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          Start = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          End = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          Duration = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          Id = {
            type = "method",
            description = [[description: 
   ( void )
   ( string value )]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          Position = {
            type = "method",
            description = [[description: 
   ( void )
   ( float value )]],
            args = '(float value)',
            returns = "void ",
            valuetype = "void",
          },
          Layer = {
            type = "method",
            description = [[description: 
   ( void )
   ( int value )]],
            args = '(int value)',
            returns = "void ",
            valuetype = "void",
          },
          Start = {
            type = "method",
            description = [[description: 
   ( void )
   ( float value )]],
            args = '(float value)',
            returns = "void ",
            valuetype = "void",
          },
          End = {
            type = "method",
            description = [[description: 
   ( void )
   ( float value )]],
            args = '(float value)',
            returns = "void ",
            valuetype = "void",
          },
          SetMaxSize = {
            type = "method",
            description = [[description: int width, int height]],
            args = '(int width, int height)',
            returns = "void ",
            valuetype = "void",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
          PropertiesJSON = {
            type = "method",
            description = [[description: int64_t requested_frame]],
            args = '(int64_t requested_frame)',
            returns = "string ",
            valuetype = "string",
          },
        },
      },
      Coordinate = {
        type = "class",
        childs = {
          X = {
            type = "value",
            description = [[description: var: double]],
            valuetype = "double",
          },
          Y = {
            type = "value",
            description = [[description: var: double]],
            valuetype = "double",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( double x, double y )]],
            args = '(double x, double y)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( double x, double y )]],
            args = '(double x, double y)',
            returns = "void",
          },
          Repeat = {
            type = "method",
            description = [[description: Fraction is_repeated]],
            args = '(Fraction is_repeated)',
            returns = "void ",
            valuetype = "void",
          },
          Repeat = {
            type = "method",
            description = [[description: 
   Fraction is_repeated
   ( ( void ) )]],
            args = "(void)",
            returns = "Fraction ",
            valuetype = "media.Fraction",
          },
          IsIncreasing = {
            type = "method",
            description = [[description: bool is_increasing]],
            args = '(bool is_increasing)',
            returns = "void ",
            valuetype = "void",
          },
          IsIncreasing = {
            type = "method",
            description = [[description: 
   bool is_increasing
   ( ( void ) )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          Delta = {
            type = "method",
            description = [[description: double new_delta]],
            args = '(double new_delta)',
            returns = "void ",
            valuetype = "void",
          },
          Delta = {
            type = "method",
            description = [[description: 
   double new_delta
   ( ( void ) )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      Fraction = {
        type = "class",
        childs = {
          num = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          den = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( int num, int den )]],
            args = '(int num, int den)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( int num, int den )]],
            args = '(int num, int den)',
            returns = "void",
          },
          GreatestCommonDenominator = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          Reduce = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          ToFloat = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          ToDouble = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "double ",
            valuetype = "double",
          },
          ToInt = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          Reciprocal = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Fraction ",
            valuetype = "media.Fraction",
          },
        },
      },
      Frame = {
        type = "class",
        inherits = "media.Ref",
        childs = {
          number = {
            type = "value",
            description = [[description: var: int64_t]],
            valuetype = "int64_t",
          },
          has_audio_data = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          has_image_data = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          m_pFrameData = {
            type = "value",
            description = [[description: var: MMTOOLS::FrameData]],
            valuetype = "MMTOOLS::FrameData",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( int64_t number, int width, int height, std::string color )]],
            args = '(int64_t number, int width, int height, std::string color)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( int64_t number, int width, int height, std::string color )]],
            args = '(int64_t number, int width, int height, std::string color)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )]],
            args = '(int64_t number, int samples, int channels)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )]],
            args = '(int64_t number, int samples, int channels)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )
   ( int64_t number, int width, int height, std::string color, int samples, int channels )]],
            args = '(int64_t number, int width, int height, std::string color, int samples, int channels)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )
   ( int64_t number, int width, int height, std::string color, int samples, int channels )]],
            args = '(int64_t number, int width, int height, std::string color, int samples, int channels)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )
   ( int64_t number, int width, int height, std::string color, int samples, int channels )
   ( const Frame &other )]],
            args = '(const Frame &other)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( int64_t number, int width, int height, std::string color )
   ( int64_t number, int samples, int channels )
   ( int64_t number, int width, int height, std::string color, int samples, int channels )
   ( const Frame &other )]],
            args = '(const Frame &other)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          AddColor = {
            type = "method",
            description = [[description: int new_width, int new_height, std::string new_color]],
            args = '(int new_width, int new_height, std::string new_color)',
            returns = "void ",
            valuetype = "void",
          },
          AddImage = {
            type = "method",
            description = [[description: int new_width, int new_height, int bytes_per_pixel, Image::Format type, const unsigned char *pixels_]],
            args = '(int new_width, int new_height, int bytes_per_pixel, Image::Format type, const unsigned char *pixels_)',
            returns = "void ",
            valuetype = "void",
          },
          AddImage = {
            type = "method",
            description = [[description: 
   int new_width, int new_height, int bytes_per_pixel, Image::Format type, const unsigned char *pixels_
   ( Image* new_image )]],
            args = '(Image* new_image)',
            returns = "void ",
            valuetype = "void",
          },
          AddImage = {
            type = "method",
            description = [[description: 
   
   int new_width, int new_height, int bytes_per_pixel, Image::Format type, const unsigned char *pixels_
   ( Image* new_image )
   ( Image* new_image, bool only_odd_lines )]],
            args = '(Image* new_image, bool only_odd_lines)',
            returns = "void ",
            valuetype = "void",
          },
          addAudioFrameData = {
            type = "method",
            description = [[description: MMTOOLS::FrameData *audioFrameDat]],
            args = '(MMTOOLS::FrameData *audioFrameDat)',
            returns = "void ",
            valuetype = "void",
          },
          assembleFrame = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          write = {
            type = "method",
            description = [[description: uint8_t *data, size_t dataSize]],
            args = '(uint8_t *data, size_t dataSize)',
            returns = "bool ",
            valuetype = "bool",
          },
          read = {
            type = "method",
            description = [[description: size_t &size]],
            args = '(size_t &size)',
            returns = "uint8_t *",
            valuetype = "uint8_t",
          },
          ChannelsLayout = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "ChannelLayout ",
            valuetype = "ChannelLayout",
          },
          ChannelsLayout = {
            type = "method",
            description = [[description: 
   ( void )
   ( ChannelLayout new_channel_layout )]],
            args = '(ChannelLayout new_channel_layout)',
            returns = "void ",
            valuetype = "void",
          },
          cleanUpBuffer = {
            type = "method",
            description = [[description: void *info]],
            args = '(void *info)',
            returns = "void ",
            valuetype = "void",
          },
          ClearWaveform = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          DeepCopy = {
            type = "method",
            description = [[description: const Frame& other]],
            args = '(const Frame& other)',
            returns = "void ",
            valuetype = "void",
          },
          Display = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          DisplayWaveform = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getImage = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Image *",
            valuetype = "media.Image",
          },
          GetPixelRatio = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Fraction ",
            valuetype = "media.Fraction",
          },
          GetPixels = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "unsigned char* ",
            valuetype = "unsigned char",
          },
          GetPixels = {
            type = "method",
            description = [[description: 
   ( void )
   ( int row )]],
            args = '(int row)',
            returns = "unsigned char* ",
            valuetype = "unsigned char",
          },
          GetHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          GetSamplesPerFrame = {
            type = "method",
            description = [[description: Fraction fps, int sample_rate, int channels]],
            args = '(Fraction fps, int sample_rate, int channels)',
            returns = "int ",
            valuetype = "int",
          },
          GetSamplesPerFrame = {
            type = "method",
            description = [[description: 
   Fraction fps, int sample_rate, int channels
   ( int64_t frame_number, Fraction fps, int sample_rate, int channels )]],
            args = '(int64_t frame_number, Fraction fps, int sample_rate, int channels)',
            returns = "int ",
            valuetype = "int",
          },
          GetWaveform = {
            type = "method",
            description = [[description: int width, int height, int Red, int Green, int Blue, int Alpha]],
            args = '(int width, int height, int Red, int Green, int Blue, int Alpha)',
            returns = "Image *",
            valuetype = "media.Image",
          },
          GetWaveformPixels = {
            type = "method",
            description = [[description: int width, int height, int Red, int Green, int Blue, int Alpha]],
            args = '(int width, int height, int Red, int Green, int Blue, int Alpha)',
            returns = "unsigned char* ",
            valuetype = "unsigned char",
          },
          GetWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          SampleRate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          SampleRate = {
            type = "method",
            description = [[description: 
   ( void )
   ( int orig_sample_rate )]],
            args = '(int orig_sample_rate)',
            returns = "void ",
            valuetype = "void",
          },
          Save = {
            type = "method",
            description = [[description: std::string path, float scale, std::string format="PNG", int quality=100]],
            args = '(std::string path, float scale, std::string format="PNG", int quality=100)',
            returns = "void ",
            valuetype = "void",
          },
          SetFrameNumber = {
            type = "method",
            description = [[description: int64_t number]],
            args = '(int64_t number)',
            returns = "void ",
            valuetype = "void",
          },
          SetPixelRatio = {
            type = "method",
            description = [[description: int num, int den]],
            args = '(int num, int den)',
            returns = "void ",
            valuetype = "void",
          },
          Thumbnail = {
            type = "method",
            description = [[description: std::string path, int new_width, int new_height, std::string mask_path, std::string overlay_path,std::string background_color, bool ignore_aspect, std::string format="png", int quality=100, float rotate=0.0]],
            args = '(std::string path, int new_width, int new_height, std::string mask_path, std::string overlay_path,std::string background_color, bool ignore_aspect, std::string format="png", int quality=100, float rotate=0.0)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      Keyframe = {
        type = "class",
        childs = {
          Points = {
            type = "value",
            description = [[description: var: std::vector<Point>]],
            valuetype = "std::vector<Point>",
          },
          Values = {
            type = "value",
            description = [[description: var: std::vector<Coordinate>]],
            valuetype = "std::vector<Coordinate>",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( double value )]],
            args = '(double value)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( double value )]],
            args = '(double value)',
            returns = "void",
          },
          AddPoint = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "void ",
            valuetype = "void",
          },
          AddPoint = {
            type = "method",
            description = [[description: 
   Point p
   ( double x, double y )]],
            args = '(double x, double y)',
            returns = "void ",
            valuetype = "void",
          },
          AddPoint = {
            type = "method",
            description = [[description: 
   
   Point p
   ( double x, double y )
   ( double x, double y, InterpolationType interpolate )]],
            args = '(double x, double y, InterpolationType interpolate)',
            returns = "void ",
            valuetype = "void",
          },
          Contains = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "bool ",
            valuetype = "bool",
          },
          FlipPoints = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          FindIndex = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          GetValue = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "double ",
            valuetype = "double",
          },
          GetInt = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "int ",
            valuetype = "int",
          },
          GetLong = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          GetRepeatFraction = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "Fraction ",
            valuetype = "media.Fraction",
          },
          GetDelta = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "double ",
            valuetype = "double",
          },
          GetPoint = {
            type = "method",
            description = [[description: int64_t index]],
            args = '(int64_t index)',
            returns = "Point& ",
            valuetype = "media.Point",
          },
          GetClosestPoint = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "Point ",
            valuetype = "media.Point",
          },
          GetClosestPoint = {
            type = "method",
            description = [[description: 
   Point p
   ( Point p, bool useLeft )]],
            args = '(Point p, bool useLeft)',
            returns = "Point ",
            valuetype = "media.Point",
          },
          GetPreviousPoint = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "Point ",
            valuetype = "media.Point",
          },
          GetMaxPoint = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Point ",
            valuetype = "media.Point",
          },
          GetLength = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          GetCount = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int64_t ",
            valuetype = "int64_t",
          },
          IsIncreasing = {
            type = "method",
            description = [[description: int index]],
            args = '(int index)',
            returns = "bool ",
            valuetype = "bool",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
          Process = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          RemovePoint = {
            type = "method",
            description = [[description: Point p]],
            args = '(Point p)',
            returns = "void ",
            valuetype = "void",
          },
          RemovePoint = {
            type = "method",
            description = [[description: 
   Point p
   ( int64_t index )]],
            args = '(int64_t index)',
            returns = "void ",
            valuetype = "void",
          },
          ScalePoints = {
            type = "method",
            description = [[description: double scale]],
            args = '(double scale)',
            returns = "void ",
            valuetype = "void",
          },
          UpdatePoint = {
            type = "method",
            description = [[description: int64_t index, Point p]],
            args = '(int64_t index, Point p)',
            returns = "void ",
            valuetype = "void",
          },
          PrintPoints = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          PrintValues = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      MTMediaEffect = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          getVideoWithEffect = {
            type = "method",
            description = [[description: ReaderBase *reader, VideoFrame *videoFrame, int64_t reqTime]],
            args = '(ReaderBase *reader, VideoFrame *videoFrame, int64_t reqTime)',
            returns = "bool ",
            valuetype = "bool",
          },
          getAudioWithEffect = {
            type = "method",
            description = [[description: ReaderBase *reader, AudioFrame *audioFrame]],
            args = '(ReaderBase *reader, AudioFrame *audioFrame)',
            returns = "bool ",
            valuetype = "bool",
          },
          restart = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      BEZIER = {
        type = "value",
      },
      LINEAR = {
        type = "value",
      },
      CONSTANT = {
        type = "value",
      },
      AUTO = {
        type = "value",
      },
      MANUAL = {
        type = "value",
      },
      Point = {
        type = "class",
        childs = {
          co = {
            type = "value",
            description = [[description: var: media.Coordinate]],
            valuetype = "media.Coordinate",
          },
          handle_left = {
            type = "value",
            description = [[description: var: media.Coordinate]],
            valuetype = "media.Coordinate",
          },
          handle_right = {
            type = "value",
            description = [[description: var: media.Coordinate]],
            valuetype = "media.Coordinate",
          },
          interpolation = {
            type = "value",
            description = [[description: var: InterpolationType]],
            valuetype = "InterpolationType",
          },
          handle_type = {
            type = "value",
            description = [[description: var: HandleType]],
            valuetype = "HandleType",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float y )]],
            args = '(float y)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float y )]],
            args = '(float y)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float y )
   ( float x, float y )]],
            args = '(float x, float y)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float y )
   ( float x, float y )]],
            args = '(float x, float y)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )]],
            args = '(float x, float y, InterpolationType interpolation)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )]],
            args = '(float x, float y, InterpolationType interpolation)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )]],
            args = '(Coordinate co)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )]],
            args = '(Coordinate co)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )
   ( Coordinate co, InterpolationType interpolation )]],
            args = '(Coordinate co, InterpolationType interpolation)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )
   ( Coordinate co, InterpolationType interpolation )]],
            args = '(Coordinate co, InterpolationType interpolation)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )
   ( Coordinate co, InterpolationType interpolation )
   ( Coordinate co, InterpolationType interpolation, HandleType handle_type )]],
            args = '(Coordinate co, InterpolationType interpolation, HandleType handle_type)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   
   
   ( void )
   ( float y )
   ( float x, float y )
   ( float x, float y, InterpolationType interpolation )
   ( Coordinate co )
   ( Coordinate co, InterpolationType interpolation )
   ( Coordinate co, InterpolationType interpolation, HandleType handle_type )]],
            args = '(Coordinate co, InterpolationType interpolation, HandleType handle_type)',
            returns = "void",
          },
          Initialize_Handles = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          Initialize_LeftHandle = {
            type = "method",
            description = [[description: float x, float y]],
            args = '(float x, float y)',
            returns = "void ",
            valuetype = "void",
          },
          Initialize_RightHandle = {
            type = "method",
            description = [[description: float x, float y]],
            args = '(float x, float y)',
            returns = "void ",
            valuetype = "void",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      ReaderInfo = {
        type = "class",
        childs = {
          has_video = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          has_audio = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          has_single_image = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          duration = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          file_size = {
            type = "value",
            description = [[description: var: int64_t]],
            valuetype = "int64_t",
          },
          height = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          width = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          pixel_format = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          fps = {
            type = "value",
            description = [[description: var: media.Fraction]],
            valuetype = "media.Fraction",
          },
          video_bit_rate = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          pixel_ratio = {
            type = "value",
            description = [[description: var: media.Fraction]],
            valuetype = "media.Fraction",
          },
          display_ratio = {
            type = "value",
            description = [[description: var: media.Fraction]],
            valuetype = "media.Fraction",
          },
          vcodec = {
            type = "value",
            description = [[description: var: string]],
            valuetype = "string",
          },
          video_length = {
            type = "value",
            description = [[description: var: int64_t]],
            valuetype = "int64_t",
          },
          video_stream_index = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          video_timebase = {
            type = "value",
            description = [[description: var: media.Fraction]],
            valuetype = "media.Fraction",
          },
          interlaced_frame = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          top_field_first = {
            type = "value",
            description = [[description: var: bool]],
            valuetype = "bool",
          },
          acodec = {
            type = "value",
            description = [[description: var: string]],
            valuetype = "string",
          },
          audio_bit_rate = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          sample_rate = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          channels = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          channel_layout = {
            type = "value",
            description = [[description: var: ChannelLayout]],
            valuetype = "ChannelLayout",
          },
          audio_stream_index = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          audio_timebase = {
            type = "value",
            description = [[description: var: media.Fraction]],
            valuetype = "media.Fraction",
          },
          metadata = {
            type = "value",
          },
          m_nBytesOfPerSample = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          m_nChannels = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          m_nSampleFormat = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          m_nSampleRate = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
        },
      },
      ReaderBase = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          info = {
            type = "value",
            description = [[description: var: media.ReaderInfo]],
            valuetype = "media.ReaderInfo",
          },
          DisplayInfo = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          GetFrame = {
            type = "method",
            description = [[description: int64_t number]],
            args = '(int64_t number)',
            returns = "Frame *",
            valuetype = "media.Frame",
          },
          getAudioFrame = {
            type = "method",
            description = [[description: AudioFrame *audioFrame]],
            args = '(AudioFrame *audioFrame)',
            returns = "bool ",
            valuetype = "bool",
          },
          getVideoFrame = {
            type = "method",
            description = [[description: VideoFrame *videoFrame, int64_t reqTime]],
            args = '(VideoFrame *videoFrame, int64_t reqTime)',
            returns = "bool ",
            valuetype = "bool",
          },
          seekTo = {
            type = "method",
            description = [[description: int64_t requested_frame, int mode]],
            args = '(int64_t requested_frame, int mode)',
            returns = "void ",
            valuetype = "void",
          },
          setAudioParams = {
            type = "method",
            description = [[description: AudioParams *externAudioParam]],
            args = '(AudioParams *externAudioParam)',
            returns = "void ",
            valuetype = "void",
          },
          doDecodeFrame = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          disableAudio = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          disableVideo = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getRotation = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          IsOpen = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          Name = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          Json = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "string ",
            valuetype = "string",
          },
          SetJson = {
            type = "method",
            description = [[description: string value]],
            args = '(string value)',
            returns = "void ",
            valuetype = "void",
          },
          JsonValue = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Json::Value ",
            valuetype = "Json::Value",
          },
          SetJsonValue = {
            type = "method",
            description = [[description: Json::Value root]],
            args = '(Json::Value root)',
            returns = "void ",
            valuetype = "void",
          },
          SetMaxSize = {
            type = "method",
            description = [[description: int width, int height]],
            args = '(int width, int height)',
            returns = "void ",
            valuetype = "void",
          },
          open = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          close = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          pause = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          resume = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          startDecoder = {
            type = "method",
            description = [[description: int64_t startPos]],
            args = '(int64_t startPos)',
            returns = "void ",
            valuetype = "void",
          },
          stopDecoder = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      VideoFrame = {
        type = "class",
        inherits = "media.Frame",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          updateSize = {
            type = "method",
            description = [[description: int width, int height]],
            args = '(int width, int height)',
            returns = "void ",
            valuetype = "void",
          },
          assembleFrame = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
        },
      },
      BACKGROUND_COLOR = {
        type = "value",
      },
      GraphicsSprite = {
        type = "class",
        inherits = "media::Ref",
        childs = {
          FLIP_NONE = {
            type = "value",
          },
          FLIP_VERTICAL = {
            type = "value",
          },
          FLIP_HORIZONTAL = {
            type = "value",
          },
          create = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GraphicsSprite *",
            valuetype = "media.GraphicsSprite",
          },
          createWithFileHandle = {
            type = "method",
            description = [[description: FileHandle *file]],
            args = '(FileHandle *file)',
            returns = "GraphicsSprite *",
            valuetype = "media.GraphicsSprite",
          },
          createWithTexture = {
            type = "method",
            description = [[description: Texture2D *texture]],
            args = '(Texture2D *texture)',
            returns = "GraphicsSprite *",
            valuetype = "media.GraphicsSprite",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          update = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          onEnter = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          onExit = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          cleanup = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          setVisible = {
            type = "method",
            description = [[description: bool visible]],
            args = '(bool visible)',
            returns = "void ",
            valuetype = "void",
          },
          isVisible = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isRunning = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isInSprite = {
            type = "method",
            description = [[description: float pointX, float pointY]],
            args = '(float pointX, float pointY)',
            returns = "bool ",
            valuetype = "bool",
          },
          setTexture = {
            type = "method",
            description = [[description: Texture2D *texture]],
            args = '(Texture2D *texture)',
            returns = "void ",
            valuetype = "void",
          },
          getTexture = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Texture2D *",
            valuetype = "media.Texture2D",
          },
          getGLTexture = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLuint ",
            valuetype = "GLuint",
          },
          getTextureWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getTextureHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          hasShader = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setShader = {
            type = "method",
            description = [[description: GLES20Shader *pShader]],
            args = '(GLES20Shader *pShader)',
            returns = "void ",
            valuetype = "void",
          },
          getShader = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLES20Shader *",
            valuetype = "media.GLES20Shader",
          },
          setUpdateCallback = {
            type = "method",
            description = [[description: UpdateCallback callback]],
            args = '(UpdateCallback callback)',
            returns = "void ",
            valuetype = "void",
          },
          addAnimationShader = {
            type = "method",
            description = [[description: GLES20Shader *aShader]],
            args = '(GLES20Shader *aShader)',
            returns = "void ",
            valuetype = "void",
          },
          removeAnimationShader = {
            type = "method",
            description = [[description: GLES20Shader *aShader]],
            args = '(GLES20Shader *aShader)',
            returns = "void ",
            valuetype = "void",
          },
          getAnimationShaders = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::list<GLES20Shader *> &",
            valuetype = "std::list<GLES20Shader *>",
          },
          setTrackType = {
            type = "method",
            description = [[description: TrackType type]],
            args = '(TrackType type)',
            returns = "void ",
            valuetype = "void",
          },
          getTrackType = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "TrackType &",
            valuetype = "TrackType",
          },
          getQuads = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "V3F_C4F_T2F_Quad *",
            valuetype = "V3F_C4F_T2F_Quad",
          },
          setZOrder = {
            type = "method",
            description = [[description: int order]],
            args = '(int order)',
            returns = "void ",
            valuetype = "void",
          },
          getZOrder = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          setContentRotation = {
            type = "method",
            description = [[description: int angle]],
            args = '(int angle)',
            returns = "void ",
            valuetype = "void",
          },
          getContentRotation = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          setRotation = {
            type = "method",
            description = [[description: float rotation]],
            args = '(float rotation)',
            returns = "void ",
            valuetype = "void",
          },
          getRotation = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setWidthAndHeight = {
            type = "method",
            description = [[description: float width, float height]],
            args = '(float width, float height)',
            returns = "void ",
            valuetype = "void",
          },
          getWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setScale = {
            type = "method",
            description = [[description: float scale]],
            args = '(float scale)',
            returns = "void ",
            valuetype = "void",
          },
          getScale = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setScale = {
            type = "method",
            description = [[description: 
   float scale
   ( float scaleX, float scaleY )]],
            args = '(float scaleX, float scaleY)',
            returns = "void ",
            valuetype = "void",
          },
          getScaleX = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getScaleY = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setPosition = {
            type = "method",
            description = [[description: const Vec2 &position]],
            args = '(const Vec2 &position)',
            returns = "void ",
            valuetype = "void",
          },
          getPosition = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2& ",
            valuetype = "media.Vec2",
          },
          setAnchorPoint = {
            type = "method",
            description = [[description: const Vec2 &anchorPoint]],
            args = '(const Vec2 &anchorPoint)',
            returns = "void ",
            valuetype = "void",
          },
          getAnchorPoint = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2 &",
            valuetype = "media.Vec2",
          },
          setTextureRect = {
            type = "method",
            description = [[description: const NS_MEDIA::Rect rect]],
            args = '(const NS_MEDIA::Rect rect)',
            returns = "void ",
            valuetype = "void",
          },
          getTextureRect = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "NS_MEDIA::Rect& ",
            valuetype = "media.Rect",
          },
          setFlip = {
            type = "method",
            description = [[description: int flipFlags]],
            args = '(int flipFlags)',
            returns = "void ",
            valuetype = "void",
          },
          getFlip = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          setAlpha = {
            type = "method",
            description = [[description: float alpha]],
            args = '(float alpha)',
            returns = "void ",
            valuetype = "void",
          },
          getAlpha = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          setUseColor = {
            type = "method",
            description = [[description: bool use]],
            args = '(bool use)',
            returns = "void ",
            valuetype = "void",
          },
          needUseColor = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setTextColor = {
            type = "method",
            description = [[description: const Vec3 &color]],
            args = '(const Vec3 &color)',
            returns = "void ",
            valuetype = "void",
          },
          getTextColor = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec3 &",
            valuetype = "media.Vec3",
          },
          setScissorBox = {
            type = "method",
            description = [[description: const NS_MEDIA::Rect &rect, bool enableScissor = true]],
            args = '(const NS_MEDIA::Rect &rect, bool enableScissor = true)',
            returns = "void ",
            valuetype = "void",
          },
          getScissorLowerLeft = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2 &",
            valuetype = "media.Vec2",
          },
          getScissorBox = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "NS_MEDIA::Size &",
            valuetype = "media.Size",
          },
          isEnableScissor = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setAlphaPremultiplied = {
            type = "method",
            description = [[description: bool premultiplied]],
            args = '(bool premultiplied)',
            returns = "void ",
            valuetype = "void",
          },
          isAlphaPremultiplied = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
        },
      },
      Image = {
        type = "class",
        inherits = "media.Ref",
        childs = {
          FORMAT_L8 = {
            type = "value",
          },
          FORMAT_LA8 = {
            type = "value",
          },
          FORMAT_R8 = {
            type = "value",
          },
          FORMAT_RG8 = {
            type = "value",
          },
          FORMAT_RGB8 = {
            type = "value",
          },
          FORMAT_RGBA8 = {
            type = "value",
          },
          FORMAT_RGBA4444 = {
            type = "value",
          },
          FORMAT_RGBA5551 = {
            type = "value",
          },
          FORMAT_RF = {
            type = "value",
          },
          FORMAT_RGF = {
            type = "value",
          },
          FORMAT_RGBF = {
            type = "value",
          },
          FORMAT_RGBAF = {
            type = "value",
          },
          FORMAT_RH = {
            type = "value",
          },
          FORMAT_RGH = {
            type = "value",
          },
          FORMAT_RGBH = {
            type = "value",
          },
          FORMAT_RGBAH = {
            type = "value",
          },
          FORMAT_RGBE9995 = {
            type = "value",
          },
          FORMAT_DXT1 = {
            type = "value",
          },
          FORMAT_DXT3 = {
            type = "value",
          },
          FORMAT_DXT5 = {
            type = "value",
          },
          FORMAT_RGTC_R = {
            type = "value",
          },
          FORMAT_RGTC_RG = {
            type = "value",
          },
          FORMAT_BPTC_RGBA = {
            type = "value",
          },
          FORMAT_BPTC_RGBF = {
            type = "value",
          },
          FORMAT_BPTC_RGBFU = {
            type = "value",
          },
          FORMAT_PVRTC2 = {
            type = "value",
          },
          FORMAT_PVRTC2A = {
            type = "value",
          },
          FORMAT_PVRTC4 = {
            type = "value",
          },
          FORMAT_PVRTC4A = {
            type = "value",
          },
          FORMAT_ETC = {
            type = "value",
          },
          FORMAT_ETC2_R11 = {
            type = "value",
          },
          FORMAT_ETC2_R11S = {
            type = "value",
          },
          FORMAT_ETC2_RG11 = {
            type = "value",
          },
          FORMAT_ETC2_RG11S = {
            type = "value",
          },
          FORMAT_ETC2_RGB8 = {
            type = "value",
          },
          FORMAT_ETC2_RGBA8 = {
            type = "value",
          },
          FORMAT_ETC2_RGB8A1 = {
            type = "value",
          },
          FORMAT_MAX = {
            type = "value",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          initWithFileHandel = {
            type = "method",
            description = [[description: const FileHandle *file]],
            args = '(const FileHandle *file)',
            returns = "bool ",
            valuetype = "bool",
          },
          initWithFileData = {
            type = "method",
            description = [[description: const unsigned char* fileData, ssize_t dataLen]],
            args = '(const unsigned char* fileData, ssize_t dataLen)',
            returns = "bool ",
            valuetype = "bool",
          },
          initWithImageInfo = {
            type = "method",
            description = [[description: int pWidth, int pHeight, GLenum format, bool needMallocPixels = true]],
            args = '(int pWidth, int pHeight, GLenum format, bool needMallocPixels = true)',
            returns = "bool ",
            valuetype = "bool",
          },
          setPixels = {
            type = "method",
            description = [[description: void *ps, bool copy = true]],
            args = '(void *ps, bool copy = true)',
            returns = "bool ",
            valuetype = "bool",
          },
          getPixels = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void* ",
            valuetype = "void",
          },
          getWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getLineSize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getComponents = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          isUpdated = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setUpdated = {
            type = "method",
            description = [[description: bool update]],
            args = '(bool update)',
            returns = "void ",
            valuetype = "void",
          },
          getFormat = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLenum ",
            valuetype = "GLenum",
          },
          size = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Size ",
            valuetype = "media.Size",
          },
          create = {
            type = "method",
            description = [[description: int p_width, int p_height, bool p_use_mipmaps, Format p_format]],
            args = '(int p_width, int p_height, bool p_use_mipmaps, Format p_format)',
            returns = "void ",
            valuetype = "void",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( int p_width, int p_height, Format p_format, bool p_use_mipmaps = false )]],
            args = '(int p_width, int p_height, Format p_format, bool p_use_mipmaps = false)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( int p_width, int p_height, Format p_format, bool p_use_mipmaps = false )]],
            args = '(int p_width, int p_height, Format p_format, bool p_use_mipmaps = false)',
            returns = "void",
          },
          get_format_pixel_size = {
            type = "method",
            description = [[description: Format p_format]],
            args = '(Format p_format)',
            returns = "int ",
            valuetype = "int",
          },
          get_format_pixel_rshift = {
            type = "method",
            description = [[description: Format p_format]],
            args = '(Format p_format)',
            returns = "int ",
            valuetype = "int",
          },
          get_format_block_size = {
            type = "method",
            description = [[description: Format p_format]],
            args = '(Format p_format)',
            returns = "int ",
            valuetype = "int",
          },
          get_format_min_pixel_size = {
            type = "method",
            description = [[description: Format p_format, int &r_w, int &r_h]],
            args = '(Format p_format, int &r_w, int &r_h)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      GLES20FramebufferObject = {
        type = "class",
        inherits = "media::Ref",
        childs = {
          create = {
            type = "method",
            description = [[description: bool enableDepth = false]],
            args = '(bool enableDepth = false)',
            returns = "GLES20FramebufferObject* ",
            valuetype = "media.GLES20FramebufferObject",
          },
          new = {
            type = "method",
            description = [[description: bool enableDepth = false]],
            args = '(bool enableDepth = false)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: bool enableDepth = false]],
            args = '(bool enableDepth = false)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          getWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getTexName = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          setup = {
            type = "method",
            description = [[description: const int width, const int height, const int texture = -1]],
            args = '(const int width, const int height, const int texture = -1)',
            returns = "void ",
            valuetype = "void",
          },
          reset = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          enable = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getBitmap = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Image* ",
            valuetype = "media.Image",
          },
          getBitmap = {
            type = "method",
            description = [[description: 
   ( void )
   ( const int orientation )]],
            args = '(const int orientation)',
            returns = "Image* ",
            valuetype = "media.Image",
          },
          getBitmap = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( const int orientation )
   ( const int orientation, const bool mirror )]],
            args = '(const int orientation, const bool mirror)',
            returns = "Image* ",
            valuetype = "media.Image",
          },
          getRGBAPixels = {
            type = "method",
            description = [[description: void *pixels]],
            args = '(void *pixels)',
            returns = "void ",
            valuetype = "void",
          },
          setReleaseTexture = {
            type = "method",
            description = [[description: bool valu]],
            args = '(bool valu)',
            returns = "void ",
            valuetype = "void",
          },
          lock = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          unlock = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          clearAllLocks = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      GLES20FramebufferObjectCache = {
        type = "class",
        childs = {
          fetchFramebufferObjectForSize = {
            type = "method",
            description = [[description: int width ,int height]],
            args = '(int width ,int height)',
            returns = "GLES20FramebufferObject *",
            valuetype = "media.GLES20FramebufferObject",
          },
          fetchFramebufferObjectForSize = {
            type = "method",
            description = [[description: 
   int width ,int height
   ( int width ,int height ,GLES20FramebufferObject *exFBO )]],
            args = '(int width ,int height ,GLES20FramebufferObject *exFBO)',
            returns = "GLES20FramebufferObject *",
            valuetype = "media.GLES20FramebufferObject",
          },
          fetchFramebufferObjectIncontinuity = {
            type = "method",
            description = [[description: int width ,int height]],
            args = '(int width ,int height)',
            returns = "GLES20FramebufferObject *",
            valuetype = "media.GLES20FramebufferObject",
          },
          returnFramebufferObjectToCache = {
            type = "method",
            description = [[description: GLES20FramebufferObject *framebufferObject]],
            args = '(GLES20FramebufferObject *framebufferObject)',
            returns = "void ",
            valuetype = "void",
          },
          purgeAllUnassignedFramebufferObjects = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      Texture2D = {
        type = "class",
        inherits = "media.Texture",
        childs = {
          create = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Texture2D *",
            valuetype = "media.Texture2D",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          load = {
            type = "method",
            description = [[description: int textureID, GLenum format, int w, int h]],
            args = '(int textureID, GLenum format, int w, int h)',
            returns = "bool ",
            valuetype = "bool",
          },
          load = {
            type = "method",
            description = [[description: 
   int textureID, GLenum format, int w, int h
   ( const unsigned char* fileData, size_t dataLen )]],
            args = '(const unsigned char* fileData, size_t dataLen)',
            returns = "bool ",
            valuetype = "bool",
          },
          load = {
            type = "method",
            description = [[description: 
   
   int textureID, GLenum format, int w, int h
   ( const unsigned char* fileData, size_t dataLen )
   ( const Image *image, const NS_MEDIA::Size &out = NS_MEDIA::Size::ZERO )]],
            args = '(const Image *image, const NS_MEDIA::Size &out = NS_MEDIA::Size::ZERO)',
            returns = "bool ",
            valuetype = "bool",
          },
          load = {
            type = "method",
            description = [[description: 
   
   
   int textureID, GLenum format, int w, int h
   ( const unsigned char* fileData, size_t dataLen )
   ( const Image *image, const NS_MEDIA::Size &out = NS_MEDIA::Size::ZERO )
   ( FileHandle *file )]],
            args = '(FileHandle *file)',
            returns = "bool ",
            valuetype = "bool",
          },
          reload = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isLoaded = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          bind = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getWidth = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          getHeight = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "int ",
            valuetype = "int",
          },
          setWidthAndHeight = {
            type = "method",
            description = [[description: int pWidth, int pHeight]],
            args = '(int pWidth, int pHeight)',
            returns = "void ",
            valuetype = "void",
          },
          getTextureID = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLuint ",
            valuetype = "GLuint",
          },
          initMaxTextureSize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getMaxTextureSize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLint ",
            valuetype = "GLint",
          },
          getTexName = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "GLuint ",
            valuetype = "GLuint",
          },
          setFileHandle = {
            type = "method",
            description = [[description: FileHandle* file]],
            args = '(FileHandle* file)',
            returns = "void ",
            valuetype = "void",
          },
          getFileHandle = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "FileHandle* ",
            valuetype = "media.FileHandle",
          },
          setFileName = {
            type = "method",
            description = [[description: const std::string &name]],
            args = '(const std::string &name)',
            returns = "void ",
            valuetype = "void",
          },
          getFileName = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string& ",
            valuetype = "std::string",
          },
        },
      },
      TextureCache = {
        type = "class",
        childs = {
          MAX_CACHE = {
            type = "value",
            description = [[description: var: int]],
            valuetype = "int",
          },
          setCurrentCache = {
            type = "method",
            description = [[description: int index]],
            args = '(int index)',
            returns = "void ",
            valuetype = "void",
          },
          findTexture = {
            type = "method",
            description = [[description: const FileHandle *file]],
            args = '(const FileHandle *file)',
            returns = "Texture2D* ",
            valuetype = "media.Texture2D",
          },
          findTexture = {
            type = "method",
            description = [[description: 
   const FileHandle *file
   ( const std::string &fileName )]],
            args = '(const std::string &fileName)',
            returns = "Texture2D* ",
            valuetype = "media.Texture2D",
          },
          addTextureToCache = {
            type = "method",
            description = [[description: FileHandle *file, Texture2D* texture]],
            args = '(FileHandle *file, Texture2D* texture)',
            returns = "void ",
            valuetype = "void",
          },
          addTextureToCache = {
            type = "method",
            description = [[description: 
   FileHandle *file, Texture2D* texture
   ( const std::string &fileName,Texture2D* texture )]],
            args = '(const std::string &fileName,Texture2D* texture)',
            returns = "void ",
            valuetype = "void",
          },
          addTexture = {
            type = "method",
            description = [[description: FileHandle *file]],
            args = '(FileHandle *file)',
            returns = "Texture2D* ",
            valuetype = "media.Texture2D",
          },
          releaseTexture = {
            type = "method",
            description = [[description: const std::string &fileName]],
            args = '(const std::string &fileName)',
            returns = "void ",
            valuetype = "void",
          },
          releaseTexture = {
            type = "method",
            description = [[description: 
   const std::string &fileName
   ( const FileHandle *file )]],
            args = '(const FileHandle *file)',
            returns = "void ",
            valuetype = "void",
          },
          releaseTexture = {
            type = "method",
            description = [[description: 
   
   const std::string &fileName
   ( const FileHandle *file )
   ( Texture2D* texture )]],
            args = '(Texture2D* texture)',
            returns = "void ",
            valuetype = "void",
          },
          reloadTexture = {
            type = "method",
            description = [[description: Texture2D* texture]],
            args = '(Texture2D* texture)',
            returns = "bool ",
            valuetype = "bool",
          },
          reloadAllTextures = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          removeAllTextures = {
            type = "method",
            description = [[description: int cacheIndex]],
            args = '(int cacheIndex)',
            returns = "void ",
            valuetype = "void",
          },
          removeUnusedTextures = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          dump = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      TextureShader = {
        type = "class",
        inherits = "media::Ref",
        childs = {
          create = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "TextureShader* ",
            valuetype = "media.TextureShader",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          link = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          setMatrix = {
            type = "method",
            description = [[description: const Mat4& m]],
            args = '(const Mat4& m)',
            returns = "void ",
            valuetype = "void",
          },
          setUseColor = {
            type = "method",
            description = [[description: bool use]],
            args = '(bool use)',
            returns = "void ",
            valuetype = "void",
          },
          setTextColor = {
            type = "method",
            description = [[description: const Vec3& color]],
            args = '(const Vec3& color)',
            returns = "void ",
            valuetype = "void",
          },
          setup = {
            type = "method",
            description = [[description: int texName, float alpha = 1]],
            args = '(int texName, float alpha = 1)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      Size = {
        type = "class",
        childs = {
          width = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          height = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float width, float height )]],
            args = '(float width, float height)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float width, float height )]],
            args = '(float width, float height)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float width, float height )
   ( const Size& other )]],
            args = '(const Size& other)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float width, float height )
   ( const Size& other )]],
            args = '(const Size& other)',
            returns = "void",
          },
          Size = {
            type = "method",
            description = [[description: const Vec2& point]],
            args = '(const Vec2& point)',
            returns = "explicit ",
            valuetype = "explicit",
          },
          setSize = {
            type = "method",
            description = [[description: float width, float height]],
            args = '(float width, float height)',
            returns = "void ",
            valuetype = "void",
          },
          equals = {
            type = "method",
            description = [[description: const Size& target]],
            args = '(const Size& target)',
            returns = "bool ",
            valuetype = "bool",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Size]],
            valuetype = "media.Size",
          },
        },
      },
      Rect = {
        type = "class",
        childs = {
          origin = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          size = {
            type = "value",
            description = [[description: var: media.Size]],
            valuetype = "media.Size",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float x, float y, float width, float height )]],
            args = '(float x, float y, float width, float height)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float x, float y, float width, float height )]],
            args = '(float x, float y, float width, float height)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float x, float y, float width, float height )
   ( const Rect& other )]],
            args = '(const Rect& other)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float x, float y, float width, float height )
   ( const Rect& other )]],
            args = '(const Rect& other)',
            returns = "void",
          },
          setRect = {
            type = "method",
            description = [[description: float x, float y, float width, float height]],
            args = '(float x, float y, float width, float height)',
            returns = "void ",
            valuetype = "void",
          },
          getMinX = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getMidX = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getMaxX = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getMinY = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getMidY = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getMaxY = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          equals = {
            type = "method",
            description = [[description: const Rect& rect]],
            args = '(const Rect& rect)',
            returns = "bool ",
            valuetype = "bool",
          },
          containsPoint = {
            type = "method",
            description = [[description: const Vec2& point]],
            args = '(const Vec2& point)',
            returns = "bool ",
            valuetype = "bool",
          },
          intersectsRect = {
            type = "method",
            description = [[description: const Rect& rect]],
            args = '(const Rect& rect)',
            returns = "bool ",
            valuetype = "bool",
          },
          unionWithRect = {
            type = "method",
            description = [[description: const Rect & rect]],
            args = '(const Rect & rect)',
            returns = "Rect ",
            valuetype = "media.Rect",
          },
          merge = {
            type = "method",
            description = [[description: const Rect& rect]],
            args = '(const Rect& rect)',
            returns = "void ",
            valuetype = "void",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Rect]],
            valuetype = "media.Rect",
          },
        },
      },
      Mat4 = {
        type = "class",
        childs = {
          m = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )]],
            args = '(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )]],
            args = '(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )
   ( const float* mat )]],
            args = '(const float* mat)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )
   ( const float* mat )]],
            args = '(const float* mat)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )
   ( const float* mat )
   ( const Mat4& copy )]],
            args = '(const Mat4& copy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44 )
   ( const float* mat )
   ( const Mat4& copy )]],
            args = '(const Mat4& copy)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          createLookAt = {
            type = "method",
            description = [[description: const Vec3& eyePosition, const Vec3& targetPosition, const Vec3& up, Mat4* dst]],
            args = '(const Vec3& eyePosition, const Vec3& targetPosition, const Vec3& up, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createLookAt = {
            type = "method",
            description = [[description: 
   const Vec3& eyePosition, const Vec3& targetPosition, const Vec3& up, Mat4* dst
   ( float eyePositionX, float eyePositionY, float eyePositionZ,float targetCenterX, float targetCenterY, float targetCenterZ,float upX, float upY, float upZ, Mat4* dst )]],
            args = '(float eyePositionX, float eyePositionY, float eyePositionZ,float targetCenterX, float targetCenterY, float targetCenterZ,float upX, float upY, float upZ, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createPerspective = {
            type = "method",
            description = [[description: float fieldOfView, float aspectRatio, float zNearPlane, float zFarPlane, Mat4* dst]],
            args = '(float fieldOfView, float aspectRatio, float zNearPlane, float zFarPlane, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createOrthographic = {
            type = "method",
            description = [[description: float width, float height, float zNearPlane, float zFarPlane, Mat4* dst]],
            args = '(float width, float height, float zNearPlane, float zFarPlane, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createOrthographicOffCenter = {
            type = "method",
            description = [[description: float left, float right, float bottom, float top,float zNearPlane, float zFarPlane, Mat4* dst]],
            args = '(float left, float right, float bottom, float top,float zNearPlane, float zFarPlane, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createBillboard = {
            type = "method",
            description = [[description: const Vec3& objectPosition, const Vec3& cameraPosition,const Vec3& cameraUpVector, Mat4* dst]],
            args = '(const Vec3& objectPosition, const Vec3& cameraPosition,const Vec3& cameraUpVector, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createBillboard = {
            type = "method",
            description = [[description: 
   const Vec3& objectPosition, const Vec3& cameraPosition,const Vec3& cameraUpVector, Mat4* dst
   ( const Vec3& objectPosition, const Vec3& cameraPosition,const Vec3& cameraUpVector, const Vec3& cameraForwardVector,Mat4* dst )]],
            args = '(const Vec3& objectPosition, const Vec3& cameraPosition,const Vec3& cameraUpVector, const Vec3& cameraForwardVector,Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createScale = {
            type = "method",
            description = [[description: const Vec3& scale, Mat4* dst]],
            args = '(const Vec3& scale, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createScale = {
            type = "method",
            description = [[description: 
   const Vec3& scale, Mat4* dst
   ( float xScale, float yScale, float zScale, Mat4* dst )]],
            args = '(float xScale, float yScale, float zScale, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createRotation = {
            type = "method",
            description = [[description: const Quaternion& quat, Mat4* dst]],
            args = '(const Quaternion& quat, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createRotation = {
            type = "method",
            description = [[description: 
   const Quaternion& quat, Mat4* dst
   ( const Vec3& axis, float angle, Mat4* dst )]],
            args = '(const Vec3& axis, float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createRotationX = {
            type = "method",
            description = [[description: float angle, Mat4* dst]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createRotationY = {
            type = "method",
            description = [[description: float angle, Mat4* dst]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createRotationZ = {
            type = "method",
            description = [[description: float angle, Mat4* dst]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createTranslation = {
            type = "method",
            description = [[description: const Vec3& translation, Mat4* dst]],
            args = '(const Vec3& translation, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createTranslation = {
            type = "method",
            description = [[description: 
   const Vec3& translation, Mat4* dst
   ( float xTranslation, float yTranslation, float zTranslation, Mat4* dst )]],
            args = '(float xTranslation, float yTranslation, float zTranslation, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: float scalar]],
            args = '(float scalar)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   float scalar
   ( float scalar, Mat4* dst )]],
            args = '(float scalar, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   
   float scalar
   ( float scalar, Mat4* dst )
   ( const Mat4& mat )]],
            args = '(const Mat4& mat)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   
   
   float scalar
   ( float scalar, Mat4* dst )
   ( const Mat4& mat )
   ( const Mat4& m1, const Mat4& m2, Mat4* dst )]],
            args = '(const Mat4& m1, const Mat4& m2, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          decompose = {
            type = "method",
            description = [[description: Vec3* scale, Quaternion* rotation, Vec3* translation]],
            args = '(Vec3* scale, Quaternion* rotation, Vec3* translation)',
            returns = "bool ",
            valuetype = "bool",
          },
          determinant = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getScale = {
            type = "method",
            description = [[description: Vec3* scale]],
            args = '(Vec3* scale)',
            returns = "void ",
            valuetype = "void",
          },
          getRotation = {
            type = "method",
            description = [[description: Quaternion* rotation]],
            args = '(Quaternion* rotation)',
            returns = "bool ",
            valuetype = "bool",
          },
          getTranslation = {
            type = "method",
            description = [[description: Vec3* translation]],
            args = '(Vec3* translation)',
            returns = "void ",
            valuetype = "void",
          },
          getUpVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          getDownVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          getLeftVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          getRightVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          getForwardVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          getBackVector = {
            type = "method",
            description = [[description: Vec3* dst]],
            args = '(Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          inverse = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          getInversed = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Mat4 ",
            valuetype = "media.Mat4",
          },
          isIdentity = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          multiply = {
            type = "method",
            description = [[description: float scalar]],
            args = '(float scalar)',
            returns = "void ",
            valuetype = "void",
          },
          multiply = {
            type = "method",
            description = [[description: 
   float scalar
   ( float scalar, Mat4* dst )]],
            args = '(float scalar, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          multiply = {
            type = "method",
            description = [[description: 
   
   float scalar
   ( float scalar, Mat4* dst )
   ( const Mat4& mat, float scalar, Mat4* dst )]],
            args = '(const Mat4& mat, float scalar, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          multiply = {
            type = "method",
            description = [[description: 
   
   
   float scalar
   ( float scalar, Mat4* dst )
   ( const Mat4& mat, float scalar, Mat4* dst )
   ( const Mat4& mat )]],
            args = '(const Mat4& mat)',
            returns = "void ",
            valuetype = "void",
          },
          multiply = {
            type = "method",
            description = [[description: 
   
   
   
   float scalar
   ( float scalar, Mat4* dst )
   ( const Mat4& mat, float scalar, Mat4* dst )
   ( const Mat4& mat )
   ( const Mat4& m1, const Mat4& m2, Mat4* dst )]],
            args = '(const Mat4& m1, const Mat4& m2, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          negate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getNegated = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Mat4 ",
            valuetype = "media.Mat4",
          },
          rotate = {
            type = "method",
            description = [[description: const Quaternion& q]],
            args = '(const Quaternion& q)',
            returns = "void ",
            valuetype = "void",
          },
          rotate = {
            type = "method",
            description = [[description: 
   const Quaternion& q
   ( const Quaternion& q, Mat4* dst )]],
            args = '(const Quaternion& q, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          rotate = {
            type = "method",
            description = [[description: 
   
   const Quaternion& q
   ( const Quaternion& q, Mat4* dst )
   ( const Vec3& axis, float angle )]],
            args = '(const Vec3& axis, float angle)',
            returns = "void ",
            valuetype = "void",
          },
          rotate = {
            type = "method",
            description = [[description: 
   
   
   const Quaternion& q
   ( const Quaternion& q, Mat4* dst )
   ( const Vec3& axis, float angle )
   ( const Vec3& axis, float angle, Mat4* dst )]],
            args = '(const Vec3& axis, float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          rotateX = {
            type = "method",
            description = [[description: float angle]],
            args = '(float angle)',
            returns = "void ",
            valuetype = "void",
          },
          rotateX = {
            type = "method",
            description = [[description: 
   float angle
   ( float angle, Mat4* dst )]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          rotateY = {
            type = "method",
            description = [[description: float angle]],
            args = '(float angle)',
            returns = "void ",
            valuetype = "void",
          },
          rotateY = {
            type = "method",
            description = [[description: 
   float angle
   ( float angle, Mat4* dst )]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          rotateZ = {
            type = "method",
            description = [[description: float angle]],
            args = '(float angle)',
            returns = "void ",
            valuetype = "void",
          },
          rotateZ = {
            type = "method",
            description = [[description: 
   float angle
   ( float angle, Mat4* dst )]],
            args = '(float angle, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: float value]],
            args = '(float value)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   float value
   ( float value, Mat4* dst )]],
            args = '(float value, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   
   float value
   ( float value, Mat4* dst )
   ( float xScale, float yScale, float zScale )]],
            args = '(float xScale, float yScale, float zScale)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   
   
   float value
   ( float value, Mat4* dst )
   ( float xScale, float yScale, float zScale )
   ( float xScale, float yScale, float zScale, Mat4* dst )]],
            args = '(float xScale, float yScale, float zScale, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   
   
   
   float value
   ( float value, Mat4* dst )
   ( float xScale, float yScale, float zScale )
   ( float xScale, float yScale, float zScale, Mat4* dst )
   ( const Vec3& s )]],
            args = '(const Vec3& s)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   
   
   
   
   float value
   ( float value, Mat4* dst )
   ( float xScale, float yScale, float zScale )
   ( float xScale, float yScale, float zScale, Mat4* dst )
   ( const Vec3& s )
   ( const Vec3& s, Mat4* dst )]],
            args = '(const Vec3& s, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44]],
            args = '(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44
   ( const float* mat )]],
            args = '(const float* mat)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24,float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44
   ( const float* mat )
   ( const Mat4& mat )]],
            args = '(const Mat4& mat)',
            returns = "void ",
            valuetype = "void",
          },
          setIdentity = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          setZero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: const Mat4& mat]],
            args = '(const Mat4& mat)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: 
   const Mat4& mat
   ( const Mat4& m1, const Mat4& m2, Mat4* dst )]],
            args = '(const Mat4& m1, const Mat4& m2, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          transformPoint = {
            type = "method",
            description = [[description: Vec3* point]],
            args = '(Vec3* point)',
            returns = "void ",
            valuetype = "void",
          },
          transformPoint = {
            type = "method",
            description = [[description: 
   Vec3* point
   ( const Vec3& point, Vec3* dst )]],
            args = '(const Vec3& point, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          transformVector = {
            type = "method",
            description = [[description: Vec3* vector]],
            args = '(Vec3* vector)',
            returns = "void ",
            valuetype = "void",
          },
          transformVector = {
            type = "method",
            description = [[description: 
   Vec3* vector
   ( const Vec3& vector, Vec3* dst )]],
            args = '(const Vec3& vector, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          transformVector = {
            type = "method",
            description = [[description: 
   
   Vec3* vector
   ( const Vec3& vector, Vec3* dst )
   ( float x, float y, float z, float w, Vec3* dst )]],
            args = '(float x, float y, float z, float w, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          transformVector = {
            type = "method",
            description = [[description: 
   
   
   Vec3* vector
   ( const Vec3& vector, Vec3* dst )
   ( float x, float y, float z, float w, Vec3* dst )
   ( Vec4* vector )]],
            args = '(Vec4* vector)',
            returns = "void ",
            valuetype = "void",
          },
          transformVector = {
            type = "method",
            description = [[description: 
   
   
   
   Vec3* vector
   ( const Vec3& vector, Vec3* dst )
   ( float x, float y, float z, float w, Vec3* dst )
   ( Vec4* vector )
   ( const Vec4& vector, Vec4* dst )]],
            args = '(const Vec4& vector, Vec4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          translate = {
            type = "method",
            description = [[description: float x, float y, float z]],
            args = '(float x, float y, float z)',
            returns = "void ",
            valuetype = "void",
          },
          translate = {
            type = "method",
            description = [[description: 
   float x, float y, float z
   ( float x, float y, float z, Mat4* dst )]],
            args = '(float x, float y, float z, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          translate = {
            type = "method",
            description = [[description: 
   
   float x, float y, float z
   ( float x, float y, float z, Mat4* dst )
   ( const Vec3& t )]],
            args = '(const Vec3& t)',
            returns = "void ",
            valuetype = "void",
          },
          translate = {
            type = "method",
            description = [[description: 
   
   
   float x, float y, float z
   ( float x, float y, float z, Mat4* dst )
   ( const Vec3& t )
   ( const Vec3& t, Mat4* dst )]],
            args = '(const Vec3& t, Mat4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          transpose = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getTransposed = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Mat4 ",
            valuetype = "media.Mat4",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Mat4]],
            valuetype = "media.Mat4",
          },
          IDENTITY = {
            type = "value",
            description = [[description: var: media.Mat4]],
            valuetype = "media.Mat4",
          },
        },
      },
      MathHelper = {
        type = "class",
        childs = {
          getDirectoryPath = {
            type = "method",
            description = [[description: const std::string& filePath]],
            args = '(const std::string& filePath)',
            returns = "std::string ",
            valuetype = "std::string",
          },
          intToString = {
            type = "method",
            description = [[description: int i]],
            args = '(int i)',
            returns = "std::string ",
            valuetype = "std::string",
          },
          stringToInt = {
            type = "method",
            description = [[description: const std::string& sInt]],
            args = '(const std::string& sInt)',
            returns = "int ",
            valuetype = "int",
          },
          stringToFloat = {
            type = "method",
            description = [[description: const std::string& sFloat]],
            args = '(const std::string& sFloat)',
            returns = "float ",
            valuetype = "float",
          },
          stringToVec2 = {
            type = "method",
            description = [[description: const std::string& sVec]],
            args = '(const std::string& sVec)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          stringToVec4 = {
            type = "method",
            description = [[description: const std::string &sVec]],
            args = '(const std::string &sVec)',
            returns = "Vec4 ",
            valuetype = "media.Vec4",
          },
          stringToVec2String = {
            type = "method",
            description = [[description: const std::string& sVec]],
            args = '(const std::string& sVec)',
            returns = "std::vector<std::string> ",
            valuetype = "std::vector<std::string>",
          },
          stringToVec2ByDelimiter = {
            type = "method",
            description = [[description: const std::string& str, const char* delim]],
            args = '(const std::string& str, const char* delim)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          stringToTwoVec2ByWH = {
            type = "method",
            description = [[description: const std::string& sVec]],
            args = '(const std::string& sVec)',
            returns = "std::vector<Vec2> ",
            valuetype = "std::vector<Vec2>",
          },
          splitString = {
            type = "method",
            description = [[description: const std::string& str, const char* delim]],
            args = '(const std::string& str, const char* delim)',
            returns = "std::vector<std::string> ",
            valuetype = "std::vector<std::string>",
          },
        },
      },
      MathUtil = {
        type = "class",
        childs = {
          smooth = {
            type = "method",
            description = [[description: float* x, float target, float elapsedTime, float responseTime]],
            args = '(float* x, float target, float elapsedTime, float responseTime)',
            returns = "void ",
            valuetype = "void",
          },
          smooth = {
            type = "method",
            description = [[description: 
   float* x, float target, float elapsedTime, float responseTime
   ( float* x, float target, float elapsedTime, float riseTime, float fallTime )]],
            args = '(float* x, float target, float elapsedTime, float riseTime, float fallTime)',
            returns = "void ",
            valuetype = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
        },
      },
      Quaternion = {
        type = "class",
        childs = {
          x = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          y = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          z = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          w = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz, float ww )]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz, float ww )]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )]],
            args = '(float* array)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )]],
            args = '(float* array)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )]],
            args = '(const Mat4& m)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )]],
            args = '(const Mat4& m)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )]],
            args = '(const Vec3& axis, float angle)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )]],
            args = '(const Vec3& axis, float angle)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )
   ( const Quaternion& copy )]],
            args = '(const Quaternion& copy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )
   ( const Quaternion& copy )]],
            args = '(const Quaternion& copy)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          identity = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Quaternion& ",
            valuetype = "media.Quaternion",
          },
          zero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Quaternion& ",
            valuetype = "media.Quaternion",
          },
          isIdentity = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isZero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          createFromRotationMatrix = {
            type = "method",
            description = [[description: const Mat4& m, Quaternion* dst]],
            args = '(const Mat4& m, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
          createFromAxisAngle = {
            type = "method",
            description = [[description: const Vec3& axis, float angle, Quaternion* dst]],
            args = '(const Vec3& axis, float angle, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
          conjugate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getConjugated = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Quaternion ",
            valuetype = "media.Quaternion",
          },
          inverse = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          getInversed = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Quaternion ",
            valuetype = "media.Quaternion",
          },
          multiply = {
            type = "method",
            description = [[description: const Quaternion& q]],
            args = '(const Quaternion& q)',
            returns = "void ",
            valuetype = "void",
          },
          multiply = {
            type = "method",
            description = [[description: 
   const Quaternion& q
   ( const Quaternion& q1, const Quaternion& q2, Quaternion* dst )]],
            args = '(const Quaternion& q1, const Quaternion& q2, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
          normalize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getNormalized = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Quaternion ",
            valuetype = "media.Quaternion",
          },
          set = {
            type = "method",
            description = [[description: float xx, float yy, float zz, float ww]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   float xx, float yy, float zz, float ww
   ( float* array )]],
            args = '(float* array)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   float xx, float yy, float zz, float ww
   ( float* array )
   ( const Mat4& m )]],
            args = '(const Mat4& m)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   
   float xx, float yy, float zz, float ww
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )]],
            args = '(const Vec3& axis, float angle)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   
   
   float xx, float yy, float zz, float ww
   ( float* array )
   ( const Mat4& m )
   ( const Vec3& axis, float angle )
   ( const Quaternion& q )]],
            args = '(const Quaternion& q)',
            returns = "void ",
            valuetype = "void",
          },
          setIdentity = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          toAxisAngle = {
            type = "method",
            description = [[description: Vec3* e]],
            args = '(Vec3* e)',
            returns = "float ",
            valuetype = "float",
          },
          lerp = {
            type = "method",
            description = [[description: const Quaternion& q1, const Quaternion& q2, float t, Quaternion* dst]],
            args = '(const Quaternion& q1, const Quaternion& q2, float t, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
          slerp = {
            type = "method",
            description = [[description: const Quaternion& q1, const Quaternion& q2, float t, Quaternion* dst]],
            args = '(const Quaternion& q1, const Quaternion& q2, float t, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
          squad = {
            type = "method",
            description = [[description: const Quaternion& q1, const Quaternion& q2, const Quaternion& s1, const Quaternion& s2, float t, Quaternion* dst]],
            args = '(const Quaternion& q1, const Quaternion& q2, const Quaternion& s1, const Quaternion& s2, float t, Quaternion* dst)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      clampf = {
        type = "method",
        description = [[description: float value, float min_inclusive, float max_inclusive]],
        args = '(float value, float min_inclusive, float max_inclusive)',
        returns = "float ",
        valuetype = "float",
      },
      Vec2 = {
        type = "class",
        childs = {
          x = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          y = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy )]],
            args = '(float xx, float yy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy )]],
            args = '(float xx, float yy)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy )
   ( const float* array )
   ( const Vec2& p1, const Vec2& p2 )]],
            args = '(const Vec2& p1, const Vec2& p2)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy )
   ( const float* array )
   ( const Vec2& p1, const Vec2& p2 )]],
            args = '(const Vec2& p1, const Vec2& p2)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy )
   ( const float* array )
   ( const Vec2& p1, const Vec2& p2 )
   ( const Vec2& copy )]],
            args = '(const Vec2& copy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy )
   ( const float* array )
   ( const Vec2& p1, const Vec2& p2 )
   ( const Vec2& copy )]],
            args = '(const Vec2& copy)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          isZero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isOne = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          angle = {
            type = "method",
            description = [[description: const Vec2& v1, const Vec2& v2]],
            args = '(const Vec2& v1, const Vec2& v2)',
            returns = "float ",
            valuetype = "float",
          },
          add = {
            type = "method",
            description = [[description: const Vec2& v]],
            args = '(const Vec2& v)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   const Vec2& v
   ( const Vec2& v1, const Vec2& v2, Vec2* dst )]],
            args = '(const Vec2& v1, const Vec2& v2, Vec2* dst)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: const Vec2& min, const Vec2& max]],
            args = '(const Vec2& min, const Vec2& max)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: 
   const Vec2& min, const Vec2& max
   ( const Vec2& v, const Vec2& min, const Vec2& max, Vec2* dst )]],
            args = '(const Vec2& v, const Vec2& min, const Vec2& max, Vec2* dst)',
            returns = "void ",
            valuetype = "void",
          },
          distance = {
            type = "method",
            description = [[description: const Vec2& v]],
            args = '(const Vec2& v)',
            returns = "float ",
            valuetype = "float",
          },
          distanceSquared = {
            type = "method",
            description = [[description: const Vec2& v]],
            args = '(const Vec2& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: const Vec2& v]],
            args = '(const Vec2& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: 
   const Vec2& v
   ( const Vec2& v1, const Vec2& v2 )]],
            args = '(const Vec2& v1, const Vec2& v2)',
            returns = "float ",
            valuetype = "float",
          },
          length = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          lengthSquared = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          negate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          normalize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getNormalized = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          scale = {
            type = "method",
            description = [[description: float scalar]],
            args = '(float scalar)',
            returns = "void ",
            valuetype = "void",
          },
          scale = {
            type = "method",
            description = [[description: 
   float scalar
   ( const Vec2& scale )]],
            args = '(const Vec2& scale)',
            returns = "void ",
            valuetype = "void",
          },
          rotate = {
            type = "method",
            description = [[description: const Vec2& point, float angle]],
            args = '(const Vec2& point, float angle)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: float xx, float yy]],
            args = '(float xx, float yy)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   float xx, float yy
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   float xx, float yy
   ( const float* array )
   ( const Vec2& v )]],
            args = '(const Vec2& v)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   
   float xx, float yy
   ( const float* array )
   ( const Vec2& v )
   ( const Vec2& p1, const Vec2& p2 )]],
            args = '(const Vec2& p1, const Vec2& p2)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: const Vec2& v]],
            args = '(const Vec2& v)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: 
   const Vec2& v
   ( const Vec2& v1, const Vec2& v2, Vec2* dst )]],
            args = '(const Vec2& v1, const Vec2& v2, Vec2* dst)',
            returns = "void ",
            valuetype = "void",
          },
          smooth = {
            type = "method",
            description = [[description: const Vec2& target, float elapsedTime, float responseTime]],
            args = '(const Vec2& target, float elapsedTime, float responseTime)',
            returns = "void ",
            valuetype = "void",
          },
          setPoint = {
            type = "method",
            description = [[description: float xx, float yy]],
            args = '(float xx, float yy)',
            returns = "void ",
            valuetype = "void",
          },
          equals = {
            type = "method",
            description = [[description: const Vec2& target]],
            args = '(const Vec2& target)',
            returns = "bool ",
            valuetype = "bool",
          },
          fuzzyEquals = {
            type = "method",
            description = [[description: const Vec2& target, float variance]],
            args = '(const Vec2& target, float variance)',
            returns = "bool ",
            valuetype = "bool",
          },
          getLength = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getLengthSq = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getDistanceSq = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "float ",
            valuetype = "float",
          },
          getDistance = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "float ",
            valuetype = "float",
          },
          getAngle = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          getAngle = {
            type = "method",
            description = [[description: 
   ( void )
   ( const Vec2& other )]],
            args = '(const Vec2& other)',
            returns = "float ",
            valuetype = "float",
          },
          cross = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "float ",
            valuetype = "float",
          },
          getPerp = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          getMidpoint = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          getClampPoint = {
            type = "method",
            description = [[description: const Vec2& min_inclusive, const Vec2& max_inclusive]],
            args = '(const Vec2& min_inclusive, const Vec2& max_inclusive)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          compOp = {
            type = "method",
            description = [[description: std::function<float(float)> function]],
            args = '(std::function<float(float)> function)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          getRPerp = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          project = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          rotate = {
            type = "method",
            description = [[description: 
   const Vec2& point, float angle
   ( const Vec2& other )]],
            args = '(const Vec2& other)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          unrotate = {
            type = "method",
            description = [[description: const Vec2& other]],
            args = '(const Vec2& other)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          lerp = {
            type = "method",
            description = [[description: const Vec2& other, float alpha]],
            args = '(const Vec2& other, float alpha)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          rotateByAngle = {
            type = "method",
            description = [[description: const Vec2& pivot, float angle]],
            args = '(const Vec2& pivot, float angle)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          forAngle = {
            type = "method",
            description = [[description: const float a]],
            args = '(const float a)',
            returns = "inline Vec2 ",
            valuetype = "inline Vec2",
          },
          isLineIntersect = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D,float* S = nullptr, float* T = nullptr]],
            args = '(const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D,float* S = nullptr, float* T = nullptr)',
            returns = "bool ",
            valuetype = "bool",
          },
          isLineOverlap = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D]],
            args = '(const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D)',
            returns = "bool ",
            valuetype = "bool",
          },
          isLineParallel = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D]],
            args = '(const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D)',
            returns = "bool ",
            valuetype = "bool",
          },
          isSegmentOverlap = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D,Vec2* S = nullptr, Vec2* E = nullptr]],
            args = '(const Vec2& A, const Vec2& B,const Vec2& C, const Vec2& D,Vec2* S = nullptr, Vec2* E = nullptr)',
            returns = "bool ",
            valuetype = "bool",
          },
          isSegmentIntersect = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B, const Vec2& C, const Vec2& D]],
            args = '(const Vec2& A, const Vec2& B, const Vec2& C, const Vec2& D)',
            returns = "bool ",
            valuetype = "bool",
          },
          getIntersectPoint = {
            type = "method",
            description = [[description: const Vec2& A, const Vec2& B, const Vec2& C, const Vec2& D]],
            args = '(const Vec2& A, const Vec2& B, const Vec2& C, const Vec2& D)',
            returns = "Vec2 ",
            valuetype = "media.Vec2",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ONE = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          UNIT_X = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          UNIT_Y = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_MIDDLE = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_BOTTOM_LEFT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_TOP_LEFT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_BOTTOM_RIGHT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_TOP_RIGHT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_MIDDLE_RIGHT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_MIDDLE_LEFT = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_MIDDLE_TOP = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
          ANCHOR_MIDDLE_BOTTOM = {
            type = "value",
            description = [[description: var: media.Vec2]],
            valuetype = "media.Vec2",
          },
        },
      },
      Vec3 = {
        type = "class",
        childs = {
          x = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          y = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          z = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz )]],
            args = '(float xx, float yy, float zz)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz )]],
            args = '(float xx, float yy, float zz)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )
   ( const Vec3& p1, const Vec3& p2 )]],
            args = '(const Vec3& p1, const Vec3& p2)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )
   ( const Vec3& p1, const Vec3& p2 )]],
            args = '(const Vec3& p1, const Vec3& p2)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )
   ( const Vec3& p1, const Vec3& p2 )
   ( const Vec3& copy )]],
            args = '(const Vec3& copy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz )
   ( const float* array )
   ( const Vec3& p1, const Vec3& p2 )
   ( const Vec3& copy )]],
            args = '(const Vec3& copy)',
            returns = "void",
          },
          fromColor = {
            type = "method",
            description = [[description: unsigned int color]],
            args = '(unsigned int color)',
            returns = "Vec3 ",
            valuetype = "media.Vec3",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          isZero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isOne = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          angle = {
            type = "method",
            description = [[description: const Vec3& v1, const Vec3& v2]],
            args = '(const Vec3& v1, const Vec3& v2)',
            returns = "float ",
            valuetype = "float",
          },
          add = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   const Vec3& v
   ( const Vec3& v1, const Vec3& v2, Vec3* dst )]],
            args = '(const Vec3& v1, const Vec3& v2, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: const Vec3& min, const Vec3& max]],
            args = '(const Vec3& min, const Vec3& max)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: 
   const Vec3& min, const Vec3& max
   ( const Vec3& v, const Vec3& min, const Vec3& max, Vec3* dst )]],
            args = '(const Vec3& v, const Vec3& min, const Vec3& max, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          cross = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "void ",
            valuetype = "void",
          },
          cross = {
            type = "method",
            description = [[description: 
   const Vec3& v
   ( const Vec3& v1, const Vec3& v2, Vec3* dst )]],
            args = '(const Vec3& v1, const Vec3& v2, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          distance = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "float ",
            valuetype = "float",
          },
          distanceSquared = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: 
   const Vec3& v
   ( const Vec3& v1, const Vec3& v2 )]],
            args = '(const Vec3& v1, const Vec3& v2)',
            returns = "float ",
            valuetype = "float",
          },
          length = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          lengthSquared = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          negate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          normalize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getNormalized = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec3 ",
            valuetype = "media.Vec3",
          },
          scale = {
            type = "method",
            description = [[description: float scalar]],
            args = '(float scalar)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: float xx, float yy, float zz]],
            args = '(float xx, float yy, float zz)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   float xx, float yy, float zz
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   float xx, float yy, float zz
   ( const float* array )
   ( const Vec3& v )]],
            args = '(const Vec3& v)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   
   float xx, float yy, float zz
   ( const float* array )
   ( const Vec3& v )
   ( const Vec3& p1, const Vec3& p2 )]],
            args = '(const Vec3& p1, const Vec3& p2)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: const Vec3& v]],
            args = '(const Vec3& v)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: 
   const Vec3& v
   ( const Vec3& v1, const Vec3& v2, Vec3* dst )]],
            args = '(const Vec3& v1, const Vec3& v2, Vec3* dst)',
            returns = "void ",
            valuetype = "void",
          },
          smooth = {
            type = "method",
            description = [[description: const Vec3& target, float elapsedTime, float responseTime]],
            args = '(const Vec3& target, float elapsedTime, float responseTime)',
            returns = "void ",
            valuetype = "void",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Vec3]],
            valuetype = "media.Vec3",
          },
          ONE = {
            type = "value",
            description = [[description: var: media.Vec3]],
            valuetype = "media.Vec3",
          },
          UNIT_X = {
            type = "value",
            description = [[description: var: media.Vec3]],
            valuetype = "media.Vec3",
          },
          UNIT_Y = {
            type = "value",
            description = [[description: var: media.Vec3]],
            valuetype = "media.Vec3",
          },
          UNIT_Z = {
            type = "value",
            description = [[description: var: media.Vec3]],
            valuetype = "media.Vec3",
          },
        },
      },
      Vec4 = {
        type = "class",
        childs = {
          x = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          y = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          z = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          w = {
            type = "value",
            description = [[description: var: float]],
            valuetype = "float",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz, float ww )]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   ( void )
   ( float xx, float yy, float zz, float ww )]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )
   ( const Vec4& p1, const Vec4& p2 )]],
            args = '(const Vec4& p1, const Vec4& p2)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )
   ( const Vec4& p1, const Vec4& p2 )]],
            args = '(const Vec4& p1, const Vec4& p2)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )
   ( const Vec4& p1, const Vec4& p2 )
   ( const Vec4& copy )]],
            args = '(const Vec4& copy)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   
   
   
   ( void )
   ( float xx, float yy, float zz, float ww )
   ( const float* array )
   ( const Vec4& p1, const Vec4& p2 )
   ( const Vec4& copy )]],
            args = '(const Vec4& copy)',
            returns = "void",
          },
          fromColor = {
            type = "method",
            description = [[description: unsigned int color]],
            args = '(unsigned int color)',
            returns = "Vec4 ",
            valuetype = "media.Vec4",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          isZero = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          isOne = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
          angle = {
            type = "method",
            description = [[description: const Vec4& v1, const Vec4& v2]],
            args = '(const Vec4& v1, const Vec4& v2)',
            returns = "float ",
            valuetype = "float",
          },
          add = {
            type = "method",
            description = [[description: const Vec4& v]],
            args = '(const Vec4& v)',
            returns = "void ",
            valuetype = "void",
          },
          add = {
            type = "method",
            description = [[description: 
   const Vec4& v
   ( const Vec4& v1, const Vec4& v2, Vec4* dst )]],
            args = '(const Vec4& v1, const Vec4& v2, Vec4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: const Vec4& min, const Vec4& max]],
            args = '(const Vec4& min, const Vec4& max)',
            returns = "void ",
            valuetype = "void",
          },
          clamp = {
            type = "method",
            description = [[description: 
   const Vec4& min, const Vec4& max
   ( const Vec4& v, const Vec4& min, const Vec4& max, Vec4* dst )]],
            args = '(const Vec4& v, const Vec4& min, const Vec4& max, Vec4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          distance = {
            type = "method",
            description = [[description: const Vec4& v]],
            args = '(const Vec4& v)',
            returns = "float ",
            valuetype = "float",
          },
          distanceSquared = {
            type = "method",
            description = [[description: const Vec4& v]],
            args = '(const Vec4& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: const Vec4& v]],
            args = '(const Vec4& v)',
            returns = "float ",
            valuetype = "float",
          },
          dot = {
            type = "method",
            description = [[description: 
   const Vec4& v
   ( const Vec4& v1, const Vec4& v2 )]],
            args = '(const Vec4& v1, const Vec4& v2)',
            returns = "float ",
            valuetype = "float",
          },
          length = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          lengthSquared = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "float ",
            valuetype = "float",
          },
          negate = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          normalize = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          getNormalized = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "Vec4 ",
            valuetype = "media.Vec4",
          },
          scale = {
            type = "method",
            description = [[description: float scalar]],
            args = '(float scalar)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: float xx, float yy, float zz, float ww]],
            args = '(float xx, float yy, float zz, float ww)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   float xx, float yy, float zz, float ww
   ( const float* array )]],
            args = '(const float* array)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   float xx, float yy, float zz, float ww
   ( const float* array )
   ( const Vec4& v )]],
            args = '(const Vec4& v)',
            returns = "void ",
            valuetype = "void",
          },
          set = {
            type = "method",
            description = [[description: 
   
   
   float xx, float yy, float zz, float ww
   ( const float* array )
   ( const Vec4& v )
   ( const Vec4& p1, const Vec4& p2 )]],
            args = '(const Vec4& p1, const Vec4& p2)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: const Vec4& v]],
            args = '(const Vec4& v)',
            returns = "void ",
            valuetype = "void",
          },
          subtract = {
            type = "method",
            description = [[description: 
   const Vec4& v
   ( const Vec4& v1, const Vec4& v2, Vec4* dst )]],
            args = '(const Vec4& v1, const Vec4& v2, Vec4* dst)',
            returns = "void ",
            valuetype = "void",
          },
          ZERO = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
          ONE = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
          UNIT_X = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
          UNIT_Y = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
          UNIT_Z = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
          UNIT_W = {
            type = "value",
            description = [[description: var: media.Vec4]],
            valuetype = "media.Vec4",
          },
        },
      },
      FileHandle = {
        type = "class",
        inherits = "media::Ref",
        childs = {
          new = {
            type = "method",
            description = [[description: const std::string &filename]],
            args = '(const std::string &filename)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: const std::string &filename]],
            args = '(const std::string &filename)',
            returns = "void",
          },
          new = {
            type = "method",
            description = [[description: 
   const std::string &filename
   ( const std::string &filename, FileType type )]],
            args = '(const std::string &filename, FileType type)',
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: 
   const std::string &filename
   ( const std::string &filename, FileType type )]],
            args = '(const std::string &filename, FileType type)',
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          getStringFromFile = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
          getDataFromFile = {
            type = "method",
            description = [[description: bool* imageDataOnly = NULL, NS_MEDIA::Size* size = NULL]],
            args = '(bool* imageDataOnly = NULL, NS_MEDIA::Size* size = NULL)',
            returns = "MTData ",
            valuetype = "media.MTData",
          },
          getFullPathForFile = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
          getPathForFile = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
          setPreprocessFileDataFunc = {
            type = "method",
            description = [[description: const std::function<void(MTData &)> &func]],
            args = '(const std::function<void(MTData &)> &func)',
            returns = "void ",
            valuetype = "void",
          },
        },
      },
      TextFileHandle = {
        type = "class",
        inherits = "media.FileHandle",
        childs = {
          create = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "TextFileHandle* ",
            valuetype = "TextFileHandle",
          },
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          initWithString = {
            type = "method",
            description = [[description: const char *text,  const std::string &fontName, float fontSize, const Size& dimensions = Size::ZERO, TextHAlignment hAlignment, TextVAlignment vAlignment]],
            args = '(const char *text,  const std::string &fontName, float fontSize, const Size& dimensions = Size::ZERO, TextHAlignment hAlignment, TextVAlignment vAlignment)',
            returns = "bool ",
            valuetype = "bool",
          },
          initWithString = {
            type = "method",
            description = [[description: 
   const char *text,  const std::string &fontName, float fontSize, const Size& dimensions = Size::ZERO, TextHAlignment hAlignment, TextVAlignment vAlignment
   ( const char *text, const FontDefinition& textDefinition )]],
            args = '(const char *text, const FontDefinition& textDefinition)',
            returns = "bool ",
            valuetype = "bool",
          },
          getStringFromFile = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
          getDataFromFile = {
            type = "method",
            description = [[description: bool* imageDataOnly = NULL, NS_MEDIA::Size* size = NULL]],
            args = '(bool* imageDataOnly = NULL, NS_MEDIA::Size* size = NULL)',
            returns = "MTData ",
            valuetype = "media.MTData",
          },
          getFullPathForFile = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "std::string ",
            valuetype = "std::string",
          },
        },
      },
    },
  },
  LAYOUT_MONO = {
    type = "value",
  },
  LAYOUT_STEREO = {
    type = "value",
  },
  LAYOUT_2POINT1 = {
    type = "value",
  },
  LAYOUT_2_1 = {
    type = "value",
  },
  LAYOUT_SURROUND = {
    type = "value",
  },
  LAYOUT_3POINT1 = {
    type = "value",
  },
  LAYOUT_4POINT0 = {
    type = "value",
  },
  LAYOUT_4POINT1 = {
    type = "value",
  },
  LAYOUT_2_2 = {
    type = "value",
  },
  LAYOUT_QUAD = {
    type = "value",
  },
  LAYOUT_5POINT0 = {
    type = "value",
  },
  LAYOUT_5POINT1 = {
    type = "value",
  },
  LAYOUT_5POINT0_BACK = {
    type = "value",
  },
  LAYOUT_5POINT1_BACK = {
    type = "value",
  },
  LAYOUT_6POINT0 = {
    type = "value",
  },
  LAYOUT_6POINT0_FRONT = {
    type = "value",
  },
  LAYOUT_HEXAGONAL = {
    type = "value",
  },
  LAYOUT_6POINT1 = {
    type = "value",
  },
  LAYOUT_6POINT1_BACK = {
    type = "value",
  },
  LAYOUT_6POINT1_FRONT = {
    type = "value",
  },
  LAYOUT_7POINT0 = {
    type = "value",
  },
  LAYOUT_7POINT0_FRONT = {
    type = "value",
  },
  LAYOUT_7POINT1 = {
    type = "value",
  },
  LAYOUT_7POINT1_WIDE = {
    type = "value",
  },
  LAYOUT_7POINT1_WIDE_BACK = {
    type = "value",
  },
  LAYOUT_OCTAGONAL = {
    type = "value",
  },
  LAYOUT_STEREO_DOWNMIX = {
    type = "value",
  },
  BEZIER = {
    type = "value",
  },
  LINEAR = {
    type = "value",
  },
  CONSTANT = {
    type = "value",
  },
  MMTOOLS = {
    type = "lib",
    description = [[description: namespace MMTOOLS]],
    childs = {
      MMToolsGlobal = {
        type = "class",
        childs = {
          new = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          new_local = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          delete = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void",
          },
          globalInit = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          globalUninit = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "void ",
            valuetype = "void",
          },
          setLogLevels = {
            type = "method",
            description = [[description: int levels]],
            args = '(int levels)',
            returns = "void ",
            valuetype = "void",
          },
          globalInited = {
            type = "method",
            description = [[description: ( void )]],
            args = "(void)",
            returns = "bool ",
            valuetype = "bool",
          },
        },
      },
    },
  },
  UNKNOW_TRACK = {
    type = "value",
  },
  NORMAL_TRACK = {
    type = "value",
  },
  VIDEO_TRACK = {
    type = "value",
  },
  MUSIC_TRACK = {
    type = "value",
  },
  PICTURE_TRACK = {
    type = "value",
  },
  SUBTITLE_TRACK = {
    type = "value",
  },
  TEXT_TEMPLATE_TRACK = {
    type = "value",
  },
  WATERMARK_TRACK = {
    type = "value",
  },
  VIDEO_MATERIAL_TRACK = {
    type = "value",
  },
  AudioParams = {
    type = "class",
    childs = {
      new = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      new_local = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      delete = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      freq = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      channels = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      channel_layout = {
        type = "value",
        description = [[description: var: int64_t]],
        valuetype = "int64_t",
      },
      fmt = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      frame_size = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      bytes_per_sec = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      mbitRate = {
        type = "value",
        description = [[description: var: long]],
        valuetype = "long",
      },
      mBytesOfPerSample = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
    },
  },
  VFX_LOTTIE_TRACK = {
    type = "value",
  },
  VFX_MAGIC_TRACK = {
    type = "value",
  },
  VFX_FRAMEMAGIC_TRACK = {
    type = "value",
  },
  VFX_PARTICLE_TRACK = {
    type = "value",
  },
  VIDEO_GROUP = {
    type = "value",
  },
  PICTURE_GROUP = {
    type = "value",
  },
  SUBTITLE_GROUP = {
    type = "value",
  },
  TEXT_TEMPLATE_GROUP = {
    type = "value",
  },
  MATERIAL_GROUP = {
    type = "value",
  },
  VIDEO_PICTURE_ZORDER = {
    type = "value",
  },
  VIDEO_MATERIAL_ZORDER = {
    type = "value",
  },
  TRANSITION_ZORDER = {
    type = "value",
  },
  WATERMARK_ZORDER = {
    type = "value",
  },
  TEXT_TEMPLATE_ZORDER = {
    type = "value",
  },
  SUBTITLE_ZORDER = {
    type = "value",
  },
  VFX_LOTTIE_ZORDER = {
    type = "value",
  },
  VFX_FRAMEMAGIC_ZORDER = {
    type = "value",
  },
  VFX_PARTICLE_ZORDER = {
    type = "value",
  },
  AUDIO_RECORDER_STATUS_FINISHED = {
    type = "value",
  },
  AUDIO_RECORDER_STATUS_DO_NOTHING = {
    type = "value",
  },
  AUDIO_RECORDER_STATUS_NORMAL = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_PREPARING = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_ERROR = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_FETCH_NEXT_FRAME_FAILED = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_FINISHED = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_DO_NOTHING = {
    type = "value",
  },
  VIDEO_RECORDER_STATUS_NORMAL = {
    type = "value",
  },
  VIDEO_REFRESH_STATUS_ABORT = {
    type = "value",
  },
  VIDEO_REFRESH_STATUS_ABNORMAL_STATUS = {
    type = "value",
  },
  VIDEO_REFRESH_STATUS_PREPARING = {
    type = "value",
  },
  VIDEO_REFRESH_STATUS_SEEKING = {
    type = "value",
  },
  VIDEO_REFRESH_STATUS_NORMAL = {
    type = "value",
  },
  SEEK_MODE_NORMAL = {
    type = "value",
  },
  SEEK_MODE_SMOOTH = {
    type = "value",
  },
  SEEK_TYPE_SYNC = {
    type = "value",
  },
  SEEK_TYPE_ASYNC = {
    type = "value",
  },
  MTFrame = {
    type = "class",
    childs = {
      new = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      new_local = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      delete = {
        type = "method",
        description = [[description: ( void )]],
        args = "(void)",
        returns = "void",
      },
      format = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      pts = {
        type = "value",
        description = [[description: var: int64_t]],
        valuetype = "int64_t",
      },
      height = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
      width = {
        type = "value",
        description = [[description: var: int]],
        valuetype = "int",
      },
    },
  },
}
