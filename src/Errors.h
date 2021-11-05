#ifndef CC_ERRORS_H
#define CC_ERRORS_H
/* Contains list of internal ClassiCube errors.
   Copyright 2014-2021 ClassiCube | Licensed under BSD-3
*/

/* NOTE: When adding errors, remember to keep Logger.c up to date! */
enum CC_ERRORS {
	ERROR_BASE           = 0xCCDED000UL,
	ERR_END_OF_STREAM    = 0xCCDED001UL, /* Attempted to read more data than the stream provided */
	ERR_NOT_SUPPORTED    = 0xCCDED002UL, /* Operation is not supported in current state or at all */
	ERR_INVALID_ARGUMENT = 0xCCDED003UL, /* Invalid argument provided to a function */
	ERR_OUT_OF_MEMORY    = 0xCCDED004UL, /* Insufficient memory left to perform the requested allocation */

	OGG_ERR_INVALID_SIG  = 0xCCDED005UL, /* Bytes #1-#4 aren't "OggS" */
	OGG_ERR_VERSION      = 0xCCDED006UL, /* Byte #5 isn't 0 */
						 
	WAV_ERR_STREAM_HDR   = 0xCCDED007UL, /* Bytes #1-#4  aren't "RIFF" */
	WAV_ERR_STREAM_TYPE  = 0xCCDED008UL, /* Bytes #9-#12 aren't "WAV " */
	WAV_ERR_DATA_TYPE    = 0xCCDED009UL, /* Audio data type isn't 1 (PCM) */
	/*WAV_ERR_NO_DATA    = 0xCCDED00AUL, no longer used */
	WAV_ERR_SAMPLE_BITS  = 0xCCDED00BUL, /* Bits per sample isn't 16 */

	/*VORBIS_ERR_HEADER         = 0xCCDED00CUL, no longer used */
	VORBIS_ERR_WRONG_HEADER     = 0xCCDED00DUL, /* Packet header doesn't match expected type */
	VORBIS_ERR_FRAMING          = 0xCCDED00EUL, /* Framing flag doesn't match expected value */
	VORBIS_ERR_VERSION          = 0xCCDED00FUL, /* Vorbis version isn't 0 */
	VORBIS_ERR_BLOCKSIZE        = 0xCCDED010UL, /* Invalid blocksize in identifier packet */
	VORBIS_ERR_CHANS            = 0xCCDED011UL, /* Either 0 or too many audio channels */
	VORBIS_ERR_TIME_TYPE        = 0xCCDED012UL, /* Time object has invalid type */
	VORBIS_ERR_FLOOR_TYPE       = 0xCCDED013UL, /* Floor object has invalid type */
	VORBIS_ERR_RESIDUE_TYPE     = 0xCCDED014UL, /* Residue object has invalid type */
	VORBIS_ERR_MAPPING_TYPE     = 0xCCDED015UL, /* Mapping object has invalid type */
	VORBIS_ERR_MODE_TYPE        = 0xCCDED016UL, /* Mode object has invalid type */
	VORBIS_ERR_CODEBOOK_SYNC    = 0xCCDED017UL, /* Codebook sync value doesn't match 0x564342 */
	VORBIS_ERR_CODEBOOK_ENTRY   = 0xCCDED018UL, /* Codebook specifies an entry outside its size */
	VORBIS_ERR_CODEBOOK_LOOKUP  = 0xCCDED019UL, /* Codebook has invalid entry lookup method */
	VORBIS_ERR_MODE_WINDOW      = 0xCCDED01AUL, /* Mode object has invalid windowing method */
	VORBIS_ERR_MODE_TRANSFORM   = 0xCCDED01BUL, /* Mode object has invalid transform method */
	VORBIS_ERR_MAPPING_CHANS    = 0xCCDED01CUL, /* Mapping object has invalid magnitude/angle combination */
	VORBIS_ERR_MAPPING_RESERVED = 0xCCDED01DUL, /* Mapping object has invalid reserved value */
	VORBIS_ERR_FRAME_TYPE       = 0xCCDED01EUL, /* Audio packet frametype isn't 0 */

	PNG_ERR_INVALID_SIG      = 0xCCDED01FUL, /* Stream doesn't start with PNG signature */
	PNG_ERR_INVALID_HDR_SIZE = 0xCCDED020UL, /* Header chunk has invalid size */
	PNG_ERR_TOO_WIDE         = 0xCCDED021UL, /* Image is over 32,768 pixels wide */
	PNG_ERR_TOO_TALL         = 0xCCDED022UL, /* Image is over 32,768 pixels tall */
	PNG_ERR_INVALID_COL_BPP  = 0xCCDED023UL, /* Invalid colorspace and bits per sample combination */
	PNG_ERR_COMP_METHOD      = 0xCCDED024UL, /* Image uses unsupported compression method */
	PNG_ERR_FILTER           = 0xCCDED025UL, /* Image uses unsupported filter method */
	PNG_ERR_INTERLACED       = 0xCCDED026UL, /* Image uses interlacing, which is unimplemented */
	PNG_ERR_PAL_SIZE         = 0xCCDED027UL, /* Palette chunk has invalid size */
	PNG_ERR_TRANS_COUNT      = 0xCCDED028UL, /* Translucent chunk has invalid size */
	PNG_ERR_TRANS_INVALID    = 0xCCDED029UL, /* Colorspace doesn't support translucent chunk */
	PNG_ERR_REACHED_IEND     = 0xCCDED02AUL, /* Image only has partial data */
	PNG_ERR_NO_DATA          = 0xCCDED02BUL, /* Image is missing all data */
	PNG_ERR_INVALID_SCANLINE = 0xCCDED02CUL, /* Image row has invalid type */

	ZIP_ERR_TOO_MANY_ENTRIES        = 0xCCDED02DUL, /* ZIP archive has too many entries */
	ZIP_ERR_SEEK_END_OF_CENTRAL_DIR = 0xCCDED02EUL, /* Failed to seek to end of central directory record */
	ZIP_ERR_NO_END_OF_CENTRAL_DIR   = 0xCCDED02FUL, /* Failed to find end of central directory record */
	ZIP_ERR_SEEK_CENTRAL_DIR        = 0xCCDED030UL, /* Failed to seek to central directory records */
	ZIP_ERR_INVALID_CENTRAL_DIR     = 0xCCDED031UL, /* Central directory record has invalid signature */
	ZIP_ERR_SEEK_LOCAL_DIR          = 0xCCDED032UL, /* Failed to seek to a local directory record */
	ZIP_ERR_INVALID_LOCAL_DIR       = 0xCCDED033UL, /* Local directory record has invalid signature */
	ZIP_ERR_FILENAME_LEN            = 0xCCDED034UL, /* ZIP entry filename is too long */

	GZIP_ERR_HEADER1   = 0xCCDED035UL, /* GZIP stream byte #1 isn't 0x1F */
	GZIP_ERR_HEADER2   = 0xCCDED036UL, /* GZIP stream byte #2 isn't 0x8B */
	GZIP_ERR_METHOD    = 0xCCDED037UL, /* GZIP stream uses unsupported compression method */
	GZIP_ERR_FLAGS     = 0xCCDED038UL, /* GZIP stream uses unsupported flags */

	ZLIB_ERR_METHOD    = 0xCCDED039UL, /* ZLIB stream uses unsupported compression method */
	ZLIB_ERR_FLAGS     = 0xCCDED03AUL, /* ZLIB stream uses unsupported flags */

	FCM_ERR_IDENTIFIER = 0xCCDED03BUL, /* FCM stream bytes #1-#4 aren't 0x0FC2AF40 */
	FCM_ERR_REVISION   = 0xCCDED03CUL, /* FCM stream byte #5 isn't 13 */

	LVL_ERR_VERSION    = 0xCCDED03DUL, /* LVL stream byte #1-#2 aren't 1874 */

	DAT_ERR_IDENTIFIER        = 0xCCDED03EUL, /* DAT stream bytes #1-#4 aren't 0x271BB788 */
	DAT_ERR_VERSION           = 0xCCDED03FUL, /* DAT stream byte #5 isn't 2 */
	DAT_ERR_JIDENTIFIER       = 0xCCDED040UL, /* DAT stream bytes #6-#7 aren't 0xACED */
	DAT_ERR_JVERSION          = 0xCCDED041UL, /* DAT stream bytes #8-#9 aren't 0x0005 */
	DAT_ERR_ROOT_TYPE         = 0xCCDED042UL, /* Java root element type isn't Object */
	DAT_ERR_JSTRING_LEN       = 0xCCDED043UL, /* Java string is too long */
	DAT_ERR_JFIELD_CLASS_NAME = 0xCCDED044UL, /* Java field classname type is invalid */
	DAT_ERR_JCLASS_TYPE       = 0xCCDED045UL, /* Java class classdesc type is invalid */
	DAT_ERR_JCLASS_FIELDS     = 0xCCDED046UL, /* Java class classdesc has too many fields */
	DAT_ERR_JCLASS_ANNOTATION = 0xCCDED047UL, /* Java classdesc uses unsupported annotations */
	DAT_ERR_JOBJECT_TYPE      = 0xCCDED048UL, /* Java object field data type is invalid */
	DAT_ERR_JARRAY_TYPE       = 0xCCDED049UL, /* Java array field data type is invalid */
	DAT_ERR_JARRAY_CONTENT    = 0xCCDED04AUL, /* Java array field isn't a byte array */

	NBT_ERR_UNKNOWN   = 0xCCDED04BUL, /* NBT tag has an unknown type */
	CW_ERR_ROOT_TAG   = 0xCCDED04CUL, /* NBT root tag isn't a Compound tag */
	CW_ERR_STRING_LEN = 0xCCDED04DUL, /* NBT string is too long */
	CW_ERR_UUID_LEN   = 0xCCDED04EUL, /* Map UUID byte array length is not 16 */

	AL_ERR_INIT_DEVICE   = 0xCCDED04FUL, /* Unknown error occurred creating OpenAL device */
	AL_ERR_INIT_CONTEXT  = 0xCCDED050UL, /* Unknown error occurred creating OpenAL context */

	INF_ERR_BLOCKTYPE    = 0xCCDED051UL, /* Block has invalid block type */
	INF_ERR_LEN_VERIFY   = 0xCCDED052UL, /* Block length checksum failed */
	INF_ERR_REPEAT_BEG   = 0xCCDED053UL, /* Attempted to repeat codewords before first code */
	INF_ERR_REPEAT_END   = 0xCCDED054UL, /* Attempted to repeat codewords after last code */
	INF_ERR_INVALID_CODE = 0xCCDED055UL, /* Attempted to decode unknown codeword */
	INF_ERR_NUM_CODES    = 0xCCDED056UL, /* Too many codewords specified for bit length */

	ERR_DOWNLOAD_INVALID = 0xCCDED057UL, /* Unspecified error occurred downloading data */
	ERR_NO_AUDIO_OUTPUT  = 0xCCDED058UL  /* No audio output devices are connected */
};
#endif
