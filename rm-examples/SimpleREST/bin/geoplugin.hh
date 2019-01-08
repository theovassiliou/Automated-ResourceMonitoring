// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R4C
// for U-LAYTEC\mcleish (mcleish@LT-411-0143) on Mon Jan  7 14:21:57 2019

// Copyright (c) 2000-2018 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef geoplugin_HH
#define geoplugin_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>

#if TTCN3_VERSION != 60402
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef WIN32
#error This file should be compiled on WIN32
#endif

#undef geoplugin_HH
#endif

namespace geoplugin {

/* Forward declarations of classes */

class JSON__PDU;
class JSON__PDU_template;
class Geoplugin__response;
class Geoplugin__response_template;
class Memory__response;
class Memory__response_template;

} /* end of namespace */

#ifndef geoplugin_HH
#define geoplugin_HH

namespace geoplugin {

/* Class definitions */

class JSON__PDU : public Base_Type {
public:
enum union_selection_type { UNBOUND_VALUE = 0, ALT_geoplugin__response = 1, ALT_memory__response = 2 };
private:
union_selection_type union_selection;
union {
Geoplugin__response *field_geoplugin__response;
Memory__response *field_memory__response;
};
void copy_value(const JSON__PDU& other_value);

public:
JSON__PDU();
JSON__PDU(const JSON__PDU& other_value);
~JSON__PDU();
JSON__PDU& operator=(const JSON__PDU& other_value);
boolean operator==(const JSON__PDU& other_value) const;
inline boolean operator!=(const JSON__PDU& other_value) const { return !(*this == other_value); }
Geoplugin__response& geoplugin__response();
const Geoplugin__response& geoplugin__response() const;
Memory__response& memory__response();
const Memory__response& memory__response() const;
inline union_selection_type get_selection() const { return union_selection; }
boolean ischosen(union_selection_type checked_selection) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
inline boolean is_present() const { return is_bound(); }
void log() const;
void set_param(Module_Param& param);
  void set_implicit_omit();
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean, int p_chosen_field = CHOSEN_FIELD_UNSET);
};

class JSON__PDU_template : public Base_Template {
union {
struct {
JSON__PDU::union_selection_type union_selection;
union {
Geoplugin__response_template *field_geoplugin__response;
Memory__response_template *field_memory__response;
};
} single_value;
struct {
unsigned int n_values;
JSON__PDU_template *list_value;
} value_list;
};
void copy_value(const JSON__PDU& other_value);

void copy_template(const JSON__PDU_template& other_value);

public:
JSON__PDU_template();
JSON__PDU_template(template_sel other_value);
JSON__PDU_template(const JSON__PDU& other_value);
JSON__PDU_template(const OPTIONAL<JSON__PDU>& other_value);
JSON__PDU_template(const JSON__PDU_template& other_value);
~JSON__PDU_template();
void clean_up();
JSON__PDU_template& operator=(template_sel other_value);
JSON__PDU_template& operator=(const JSON__PDU& other_value);
JSON__PDU_template& operator=(const OPTIONAL<JSON__PDU>& other_value);
JSON__PDU_template& operator=(const JSON__PDU_template& other_value);
boolean match(const JSON__PDU& other_value, boolean legacy = FALSE) const;
boolean is_value() const;JSON__PDU valueof() const;
JSON__PDU_template& list_item(unsigned int list_index) const;
void set_type(template_sel template_type, unsigned int list_length);
Geoplugin__response_template& geoplugin__response();
const Geoplugin__response_template& geoplugin__response() const;
Memory__response_template& memory__response();
const Memory__response_template& memory__response() const;
boolean ischosen(JSON__PDU::union_selection_type checked_selection) const;
void log() const;
void log_match(const JSON__PDU& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
void set_param(Module_Param& param);
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
};

class Geoplugin__response : public Base_Type {
  CHARSTRING field_geoplugin__request;
  INTEGER field_geoplugin__status;
  CHARSTRING field_geoplugin__credit;
  CHARSTRING field_geoplugin__city;
  CHARSTRING field_geoplugin__region;
  CHARSTRING field_geoplugin__areaCode;
  CHARSTRING field_geoplugin__dmaCode;
  CHARSTRING field_geoplugin__countryCode;
  CHARSTRING field_geoplugin__countryName;
  CHARSTRING field_geoplugin__continentCode;
  CHARSTRING field_geoplugin__latitude;
  CHARSTRING field_geoplugin__longitude;
  CHARSTRING field_geoplugin__regionCode;
  CHARSTRING field_geoplugin__regionName;
  CHARSTRING field_geoplugin__currencyCode;
  CHARSTRING field_geoplugin__currencySymbol;
  CHARSTRING field_geoplugin__currencySymbol__UTF8;
  FLOAT field_geoplugin__currencyConverter;
public:
  Geoplugin__response();
  Geoplugin__response(const CHARSTRING& par_geoplugin__request,
    const INTEGER& par_geoplugin__status,
    const CHARSTRING& par_geoplugin__credit,
    const CHARSTRING& par_geoplugin__city,
    const CHARSTRING& par_geoplugin__region,
    const CHARSTRING& par_geoplugin__areaCode,
    const CHARSTRING& par_geoplugin__dmaCode,
    const CHARSTRING& par_geoplugin__countryCode,
    const CHARSTRING& par_geoplugin__countryName,
    const CHARSTRING& par_geoplugin__continentCode,
    const CHARSTRING& par_geoplugin__latitude,
    const CHARSTRING& par_geoplugin__longitude,
    const CHARSTRING& par_geoplugin__regionCode,
    const CHARSTRING& par_geoplugin__regionName,
    const CHARSTRING& par_geoplugin__currencyCode,
    const CHARSTRING& par_geoplugin__currencySymbol,
    const CHARSTRING& par_geoplugin__currencySymbol__UTF8,
    const FLOAT& par_geoplugin__currencyConverter);
  Geoplugin__response(const Geoplugin__response& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
const TTCN_Typedescriptor_t* get_descriptor() const;
  Geoplugin__response& operator=(const Geoplugin__response& other_value);
  boolean operator==(const Geoplugin__response& other_value) const;
  inline boolean operator!=(const Geoplugin__response& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline CHARSTRING& geoplugin__request()
    {return field_geoplugin__request;}
  inline const CHARSTRING& geoplugin__request() const
    {return field_geoplugin__request;}
  inline INTEGER& geoplugin__status()
    {return field_geoplugin__status;}
  inline const INTEGER& geoplugin__status() const
    {return field_geoplugin__status;}
  inline CHARSTRING& geoplugin__credit()
    {return field_geoplugin__credit;}
  inline const CHARSTRING& geoplugin__credit() const
    {return field_geoplugin__credit;}
  inline CHARSTRING& geoplugin__city()
    {return field_geoplugin__city;}
  inline const CHARSTRING& geoplugin__city() const
    {return field_geoplugin__city;}
  inline CHARSTRING& geoplugin__region()
    {return field_geoplugin__region;}
  inline const CHARSTRING& geoplugin__region() const
    {return field_geoplugin__region;}
  inline CHARSTRING& geoplugin__areaCode()
    {return field_geoplugin__areaCode;}
  inline const CHARSTRING& geoplugin__areaCode() const
    {return field_geoplugin__areaCode;}
  inline CHARSTRING& geoplugin__dmaCode()
    {return field_geoplugin__dmaCode;}
  inline const CHARSTRING& geoplugin__dmaCode() const
    {return field_geoplugin__dmaCode;}
  inline CHARSTRING& geoplugin__countryCode()
    {return field_geoplugin__countryCode;}
  inline const CHARSTRING& geoplugin__countryCode() const
    {return field_geoplugin__countryCode;}
  inline CHARSTRING& geoplugin__countryName()
    {return field_geoplugin__countryName;}
  inline const CHARSTRING& geoplugin__countryName() const
    {return field_geoplugin__countryName;}
  inline CHARSTRING& geoplugin__continentCode()
    {return field_geoplugin__continentCode;}
  inline const CHARSTRING& geoplugin__continentCode() const
    {return field_geoplugin__continentCode;}
  inline CHARSTRING& geoplugin__latitude()
    {return field_geoplugin__latitude;}
  inline const CHARSTRING& geoplugin__latitude() const
    {return field_geoplugin__latitude;}
  inline CHARSTRING& geoplugin__longitude()
    {return field_geoplugin__longitude;}
  inline const CHARSTRING& geoplugin__longitude() const
    {return field_geoplugin__longitude;}
  inline CHARSTRING& geoplugin__regionCode()
    {return field_geoplugin__regionCode;}
  inline const CHARSTRING& geoplugin__regionCode() const
    {return field_geoplugin__regionCode;}
  inline CHARSTRING& geoplugin__regionName()
    {return field_geoplugin__regionName;}
  inline const CHARSTRING& geoplugin__regionName() const
    {return field_geoplugin__regionName;}
  inline CHARSTRING& geoplugin__currencyCode()
    {return field_geoplugin__currencyCode;}
  inline const CHARSTRING& geoplugin__currencyCode() const
    {return field_geoplugin__currencyCode;}
  inline CHARSTRING& geoplugin__currencySymbol()
    {return field_geoplugin__currencySymbol;}
  inline const CHARSTRING& geoplugin__currencySymbol() const
    {return field_geoplugin__currencySymbol;}
  inline CHARSTRING& geoplugin__currencySymbol__UTF8()
    {return field_geoplugin__currencySymbol__UTF8;}
  inline const CHARSTRING& geoplugin__currencySymbol__UTF8() const
    {return field_geoplugin__currencySymbol__UTF8;}
  inline FLOAT& geoplugin__currencyConverter()
    {return field_geoplugin__currencyConverter;}
  inline const FLOAT& geoplugin__currencyConverter() const
    {return field_geoplugin__currencyConverter;}
  inline int size_of() const
    {return 18;}
  void log() const;
  void set_param(Module_Param& param);
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean, int p_chosen_field = CHOSEN_FIELD_UNSET);
};

class Geoplugin__response_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
Geoplugin__response_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const Geoplugin__response& other_value);
void copy_template(const Geoplugin__response_template& other_value);

public:
Geoplugin__response_template();
Geoplugin__response_template(template_sel other_value);
Geoplugin__response_template(const Geoplugin__response& other_value);
Geoplugin__response_template(const OPTIONAL<Geoplugin__response>& other_value);
Geoplugin__response_template(const Geoplugin__response_template& other_value);
~Geoplugin__response_template();
Geoplugin__response_template& operator=(template_sel other_value);
Geoplugin__response_template& operator=(const Geoplugin__response& other_value);
Geoplugin__response_template& operator=(const OPTIONAL<Geoplugin__response>& other_value);
Geoplugin__response_template& operator=(const Geoplugin__response_template& other_value);
boolean match(const Geoplugin__response& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
Geoplugin__response valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
Geoplugin__response_template& list_item(unsigned int list_index) const;
CHARSTRING_template& geoplugin__request();
const CHARSTRING_template& geoplugin__request() const;
INTEGER_template& geoplugin__status();
const INTEGER_template& geoplugin__status() const;
CHARSTRING_template& geoplugin__credit();
const CHARSTRING_template& geoplugin__credit() const;
CHARSTRING_template& geoplugin__city();
const CHARSTRING_template& geoplugin__city() const;
CHARSTRING_template& geoplugin__region();
const CHARSTRING_template& geoplugin__region() const;
CHARSTRING_template& geoplugin__areaCode();
const CHARSTRING_template& geoplugin__areaCode() const;
CHARSTRING_template& geoplugin__dmaCode();
const CHARSTRING_template& geoplugin__dmaCode() const;
CHARSTRING_template& geoplugin__countryCode();
const CHARSTRING_template& geoplugin__countryCode() const;
CHARSTRING_template& geoplugin__countryName();
const CHARSTRING_template& geoplugin__countryName() const;
CHARSTRING_template& geoplugin__continentCode();
const CHARSTRING_template& geoplugin__continentCode() const;
CHARSTRING_template& geoplugin__latitude();
const CHARSTRING_template& geoplugin__latitude() const;
CHARSTRING_template& geoplugin__longitude();
const CHARSTRING_template& geoplugin__longitude() const;
CHARSTRING_template& geoplugin__regionCode();
const CHARSTRING_template& geoplugin__regionCode() const;
CHARSTRING_template& geoplugin__regionName();
const CHARSTRING_template& geoplugin__regionName() const;
CHARSTRING_template& geoplugin__currencyCode();
const CHARSTRING_template& geoplugin__currencyCode() const;
CHARSTRING_template& geoplugin__currencySymbol();
const CHARSTRING_template& geoplugin__currencySymbol() const;
CHARSTRING_template& geoplugin__currencySymbol__UTF8();
const CHARSTRING_template& geoplugin__currencySymbol__UTF8() const;
FLOAT_template& geoplugin__currencyConverter();
const FLOAT_template& geoplugin__currencyConverter() const;
int size_of() const;
void log() const;
void log_match(const Geoplugin__response& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};

class Memory__response : public Base_Type {
  INTEGER field_memoryValueAvailable;
  INTEGER field_memoryValueSwapTotal;
  INTEGER field_memoryValueSwapUsed;
public:
  Memory__response();
  Memory__response(const INTEGER& par_memoryValueAvailable,
    const INTEGER& par_memoryValueSwapTotal,
    const INTEGER& par_memoryValueSwapUsed);
  Memory__response(const Memory__response& other_value);
  inline boolean is_component() { return FALSE; }
  void clean_up();
const TTCN_Typedescriptor_t* get_descriptor() const;
  Memory__response& operator=(const Memory__response& other_value);
  boolean operator==(const Memory__response& other_value) const;
  inline boolean operator!=(const Memory__response& other_value) const
    { return !(*this == other_value); }

  boolean is_bound() const;

inline boolean is_present() const { return is_bound(); }
  boolean is_value() const;

  inline INTEGER& memoryValueAvailable()
    {return field_memoryValueAvailable;}
  inline const INTEGER& memoryValueAvailable() const
    {return field_memoryValueAvailable;}
  inline INTEGER& memoryValueSwapTotal()
    {return field_memoryValueSwapTotal;}
  inline const INTEGER& memoryValueSwapTotal() const
    {return field_memoryValueSwapTotal;}
  inline INTEGER& memoryValueSwapUsed()
    {return field_memoryValueSwapUsed;}
  inline const INTEGER& memoryValueSwapUsed() const
    {return field_memoryValueSwapUsed;}
  inline int size_of() const
    {return 3;}
  void log() const;
  void set_param(Module_Param& param);
  void set_implicit_omit();
  void encode_text(Text_Buf& text_buf) const;
  void decode_text(Text_Buf& text_buf);
void encode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...) const;
void decode(const TTCN_Typedescriptor_t&, TTCN_Buffer&, TTCN_EncDec::coding_t, ...);
int JSON_encode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&) const;
int JSON_decode(const TTCN_Typedescriptor_t&, JSON_Tokenizer&, boolean, int p_chosen_field = CHOSEN_FIELD_UNSET);
};

class Memory__response_template : public Base_Template {
struct single_value_struct;
union {
single_value_struct *single_value;
struct {
unsigned int n_values;
Memory__response_template *list_value;
} value_list;
};

void set_specific();
void copy_value(const Memory__response& other_value);
void copy_template(const Memory__response_template& other_value);

public:
Memory__response_template();
Memory__response_template(template_sel other_value);
Memory__response_template(const Memory__response& other_value);
Memory__response_template(const OPTIONAL<Memory__response>& other_value);
Memory__response_template(const Memory__response_template& other_value);
~Memory__response_template();
Memory__response_template& operator=(template_sel other_value);
Memory__response_template& operator=(const Memory__response& other_value);
Memory__response_template& operator=(const OPTIONAL<Memory__response>& other_value);
Memory__response_template& operator=(const Memory__response_template& other_value);
boolean match(const Memory__response& other_value, boolean legacy = FALSE) const;
boolean is_bound() const;
boolean is_value() const;
void clean_up();
Memory__response valueof() const;
void set_type(template_sel template_type, unsigned int list_length);
Memory__response_template& list_item(unsigned int list_index) const;
INTEGER_template& memoryValueAvailable();
const INTEGER_template& memoryValueAvailable() const;
INTEGER_template& memoryValueSwapTotal();
const INTEGER_template& memoryValueSwapTotal() const;
INTEGER_template& memoryValueSwapUsed();
const INTEGER_template& memoryValueSwapUsed() const;
int size_of() const;
void log() const;
void log_match(const Memory__response& match_value, boolean legacy = FALSE) const;
void encode_text(Text_Buf& text_buf) const;
void decode_text(Text_Buf& text_buf);
void set_param(Module_Param& param);
void check_restriction(template_res t_res, const char* t_name=NULL, boolean legacy = FALSE) const;
boolean is_present(boolean legacy = FALSE) const;
boolean match_omit(boolean legacy = FALSE) const;
};


/* Function prototypes */

extern OCTETSTRING enc__JSON(const JSON__PDU& msg);
extern JSON__PDU dec__JSON(const OCTETSTRING& p__stream);
extern void Geoplugin__response_geoplugin__request_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__request_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__status_encoder(const INTEGER& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__status_decoder(OCTETSTRING& input_stream, INTEGER& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__credit_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__credit_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__city_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__city_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__region_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__region_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__areaCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__areaCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__dmaCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__dmaCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__countryCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__countryCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__countryName_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__countryName_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__continentCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__continentCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__latitude_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__latitude_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__longitude_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__longitude_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__regionCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__regionCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__regionName_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__regionName_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__currencyCode_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__currencyCode_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__currencySymbol_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__currencySymbol_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__currencySymbol__UTF8_encoder(const CHARSTRING& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__currencySymbol__UTF8_decoder(OCTETSTRING& input_stream, CHARSTRING& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_geoplugin__currencyConverter_encoder(const FLOAT& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_geoplugin__currencyConverter_decoder(OCTETSTRING& input_stream, FLOAT& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Geoplugin__response_encoder(const Geoplugin__response& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Geoplugin__response_decoder(OCTETSTRING& input_stream, Geoplugin__response& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Memory__response_memoryValueAvailable_encoder(const INTEGER& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Memory__response_memoryValueAvailable_decoder(OCTETSTRING& input_stream, INTEGER& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Memory__response_memoryValueSwapTotal_encoder(const INTEGER& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Memory__response_memoryValueSwapTotal_decoder(OCTETSTRING& input_stream, INTEGER& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Memory__response_memoryValueSwapUsed_encoder(const INTEGER& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Memory__response_memoryValueSwapUsed_decoder(OCTETSTRING& input_stream, INTEGER& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void Memory__response_encoder(const Memory__response& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER Memory__response_decoder(OCTETSTRING& input_stream, Memory__response& output_value, const UNIVERSAL_CHARSTRING& coding_name);
extern void JSON__PDU_encoder(const JSON__PDU& input_value, OCTETSTRING& output_stream, const UNIVERSAL_CHARSTRING& coding_name);
extern INTEGER JSON__PDU_decoder(OCTETSTRING& input_stream, JSON__PDU& output_value, const UNIVERSAL_CHARSTRING& coding_name);

/* Global variable declarations */

extern const TTCN_JSONdescriptor_t JSON__PDU_json_;
extern const TTCN_Typedescriptor_t JSON__PDU_descr_;
extern const XERdescriptor_t Geoplugin__response_geoplugin__request_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__request_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__request_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__status_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__status_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__status_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__credit_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__credit_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__credit_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__city_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__city_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__city_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__region_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__region_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__region_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__areaCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__areaCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__areaCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__dmaCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__dmaCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__dmaCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__countryCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__countryCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__countryCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__countryName_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__countryName_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__countryName_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__continentCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__continentCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__continentCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__latitude_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__latitude_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__latitude_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__longitude_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__longitude_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__longitude_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__regionCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__regionCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__regionCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__regionName_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__regionName_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__regionName_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__currencyCode_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__currencyCode_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__currencyCode_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__currencySymbol_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__currencySymbol_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__currencySymbol_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__currencySymbol__UTF8_xer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__currencySymbol__UTF8_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__currencySymbol__UTF8_default_coding;
extern const XERdescriptor_t Geoplugin__response_geoplugin__currencyConverter_xer_;
extern const TTCN_OERdescriptor_t Geoplugin__response_geoplugin__currencyConverter_oer_;
extern const TTCN_Typedescriptor_t Geoplugin__response_geoplugin__currencyConverter_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_geoplugin__currencyConverter_default_coding;
extern const TTCN_JSONdescriptor_t Geoplugin__response_json_;
extern const TTCN_Typedescriptor_t Geoplugin__response_descr_;
extern UNIVERSAL_CHARSTRING Geoplugin__response_default_coding;
extern const TTCN_Typedescriptor_t JSON__PDU_geoplugin__response_descr_;
extern UNIVERSAL_CHARSTRING JSON__PDU_geoplugin__response_default_coding;
extern const XERdescriptor_t Memory__response_memoryValueAvailable_xer_;
extern const TTCN_Typedescriptor_t Memory__response_memoryValueAvailable_descr_;
extern UNIVERSAL_CHARSTRING Memory__response_memoryValueAvailable_default_coding;
extern const XERdescriptor_t Memory__response_memoryValueSwapTotal_xer_;
extern const TTCN_Typedescriptor_t Memory__response_memoryValueSwapTotal_descr_;
extern UNIVERSAL_CHARSTRING Memory__response_memoryValueSwapTotal_default_coding;
extern const XERdescriptor_t Memory__response_memoryValueSwapUsed_xer_;
extern const TTCN_Typedescriptor_t Memory__response_memoryValueSwapUsed_descr_;
extern UNIVERSAL_CHARSTRING Memory__response_memoryValueSwapUsed_default_coding;
extern const TTCN_JSONdescriptor_t Memory__response_json_;
extern const TTCN_Typedescriptor_t Memory__response_descr_;
extern UNIVERSAL_CHARSTRING Memory__response_default_coding;
extern const TTCN_Typedescriptor_t JSON__PDU_memory__response_descr_;
extern UNIVERSAL_CHARSTRING JSON__PDU_memory__response_default_coding;
extern UNIVERSAL_CHARSTRING JSON__PDU_default_coding;
extern TTCN_Module module_object;

} /* end of namespace */

#endif