/**
 * javafs_bindings.h - autogenerated C <-> Java bindings
 */

#include <jni.h>


/**
 * structure with a reference to fuse.FuseGetattr java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseGetattr
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID inode;
      jfieldID nlink;
      jfieldID uid;
      jfieldID gid;
      jfieldID rdev;
      jfieldID size;
      jfieldID blocks;
      jfieldID atime;
      jfieldID mtime;
      jfieldID ctime;
      jfieldID mode;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID set__JIIIIIJJIII;
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseGetattr;

// free structure
void free_jclass_fuse_FuseGetattr(JNIEnv *env, jclass_fuse_FuseGetattr *fuse_FuseGetattr);

// alloc structure
jclass_fuse_FuseGetattr *alloc_jclass_fuse_FuseGetattr(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSDirEnt java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSDirEnt
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID name;
      jfieldID inode;
      jfieldID mode;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseFSDirEnt;

// free structure
void free_jclass_fuse_FuseFSDirEnt(JNIEnv *env, jclass_fuse_FuseFSDirEnt *fuse_FuseFSDirEnt);

// alloc structure
jclass_fuse_FuseFSDirEnt *alloc_jclass_fuse_FuseFSDirEnt(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSDirFiller java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSDirFiller
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID toString;
      jmethodID add__Ljava_lang_String_JI;
      jmethodID setCharset__Ljava_nio_charset_Charset_;
      jmethodID get__I;
      jmethodID add__ILjava_lang_Object_;
      jmethodID add__Ljava_lang_Object_;
      jmethodID indexOf__Ljava_lang_Object_;
      jmethodID clone;
      jmethodID clear;
      jmethodID lastIndexOf__Ljava_lang_Object_;
      jmethodID contains__Ljava_lang_Object_;
      jmethodID addAll__Ljava_util_Collection_;
      jmethodID addAll__ILjava_util_Collection_;
      jmethodID size;
      jmethodID toArray;
      jmethodID toArray___Ljava_lang_Object_;
      jmethodID set__ILjava_lang_Object_;
      jmethodID remove__I;
      jmethodID remove__Ljava_lang_Object_;
      jmethodID isEmpty;
      jmethodID trimToSize;
      jmethodID ensureCapacity__I;
      jmethodID hashCode;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID iterator;
      jmethodID subList__II;
      jmethodID listIterator__I;
      jmethodID listIterator;
      jmethodID containsAll__Ljava_util_Collection_;
      jmethodID removeAll__Ljava_util_Collection_;
      jmethodID retainAll__Ljava_util_Collection_;
      jmethodID getClass;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseFSDirFiller;

// free structure
void free_jclass_fuse_FuseFSDirFiller(JNIEnv *env, jclass_fuse_FuseFSDirFiller *fuse_FuseFSDirFiller);

// alloc structure
jclass_fuse_FuseFSDirFiller *alloc_jclass_fuse_FuseFSDirFiller(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseStatfs java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseStatfs
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID blockSize;
      jfieldID blocks;
      jfieldID blocksFree;
      jfieldID blocksAvail;
      jfieldID files;
      jfieldID filesFree;
      jfieldID namelen;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID set__IIIIIII;
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseStatfs;

// free structure
void free_jclass_fuse_FuseStatfs(JNIEnv *env, jclass_fuse_FuseStatfs *fuse_FuseStatfs);

// alloc structure
jclass_fuse_FuseStatfs *alloc_jclass_fuse_FuseStatfs(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseSize java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseSize
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID size;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID setSize__I;
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseSize;

// free structure
void free_jclass_fuse_FuseSize(JNIEnv *env, jclass_fuse_FuseSize *fuse_FuseSize);

// alloc structure
jclass_fuse_FuseSize *alloc_jclass_fuse_FuseSize(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseOpen java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseOpen
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID fh;
      jfieldID directIO;
      jfieldID keepCache;

   } field;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached instance method IDs
   struct
   {
      jmethodID setFh__Ljava_lang_Object_;
      jmethodID isDirectIO;
      jmethodID setDirectIO__Z;
      jmethodID isKeepCache;
      jmethodID setKeepCache__Z;
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseOpen;

// free structure
void free_jclass_fuse_FuseOpen(JNIEnv *env, jclass_fuse_FuseOpen *fuse_FuseOpen);

// alloc structure
jclass_fuse_FuseOpen *alloc_jclass_fuse_FuseOpen(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseContext java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseContext
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance field IDs
   struct
   {
      jfieldID uid;
      jfieldID gid;
      jfieldID pid;

   } field;

   // cached static method IDs
   struct
   {
      jmethodID get;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID toString;
      jmethodID clone;
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseContext;

// free structure
void free_jclass_fuse_FuseContext(JNIEnv *env, jclass_fuse_FuseContext *fuse_FuseContext);

// alloc structure
jclass_fuse_FuseContext *alloc_jclass_fuse_FuseContext(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFS java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFS
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached instance method IDs
   struct
   {
      jmethodID write__Ljava_nio_ByteBuffer_Ljava_lang_Object_ZLjava_nio_ByteBuffer_J;
      jmethodID flush__Ljava_nio_ByteBuffer_Ljava_lang_Object_;
      jmethodID open__Ljava_nio_ByteBuffer_ILfuse_FuseOpenSetter_;
      jmethodID read__Ljava_nio_ByteBuffer_Ljava_lang_Object_Ljava_nio_ByteBuffer_J;
      jmethodID mkdir__Ljava_nio_ByteBuffer_I;
      jmethodID rename__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID getattr__Ljava_nio_ByteBuffer_Lfuse_FuseGetattrSetter_;
      jmethodID readlink__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID getdir__Ljava_nio_ByteBuffer_Lfuse_FuseFSDirFiller_;
      jmethodID mknod__Ljava_nio_ByteBuffer_II;
      jmethodID unlink__Ljava_nio_ByteBuffer_;
      jmethodID rmdir__Ljava_nio_ByteBuffer_;
      jmethodID symlink__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID link__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID chmod__Ljava_nio_ByteBuffer_I;
      jmethodID chown__Ljava_nio_ByteBuffer_II;
      jmethodID truncate__Ljava_nio_ByteBuffer_J;
      jmethodID utime__Ljava_nio_ByteBuffer_II;
      jmethodID statfs__Lfuse_FuseStatfsSetter_;
      jmethodID release__Ljava_nio_ByteBuffer_Ljava_lang_Object_I;
      jmethodID fsync__Ljava_nio_ByteBuffer_Ljava_lang_Object_Z;
      jmethodID setxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_I;
      jmethodID getxattrsize__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Lfuse_FuseSizeSetter_;
      jmethodID getxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID listxattrsize__Ljava_nio_ByteBuffer_Lfuse_FuseSizeSetter_;
      jmethodID listxattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;
      jmethodID removexattr__Ljava_nio_ByteBuffer_Ljava_nio_ByteBuffer_;

   } method;

} jclass_fuse_FuseFS;

// free structure
void free_jclass_fuse_FuseFS(JNIEnv *env, jclass_fuse_FuseFS *fuse_FuseFS);

// alloc structure
jclass_fuse_FuseFS *alloc_jclass_fuse_FuseFS(JNIEnv *env);


/**
 * structure with a reference to java.nio.ByteBuffer java class and cached field & method IDs
 */
typedef struct _jclass_java_nio_ByteBuffer
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached static method IDs
   struct
   {
      jmethodID wrap___B;
      jmethodID wrap___BII;
      jmethodID allocate__I;
      jmethodID allocateDirect__I;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID hashCode;
      jmethodID compareTo__Ljava_lang_Object_;
      jmethodID compareTo__Ljava_nio_ByteBuffer_;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID toString;
      jmethodID get___BII;
      jmethodID get;
      jmethodID get__I;
      jmethodID get___B;
      jmethodID getShort;
      jmethodID getShort__I;
      jmethodID getChar;
      jmethodID getChar__I;
      jmethodID getInt;
      jmethodID getInt__I;
      jmethodID getLong;
      jmethodID getLong__I;
      jmethodID getFloat__I;
      jmethodID getFloat;
      jmethodID getDouble;
      jmethodID getDouble__I;
      jmethodID putShort__S;
      jmethodID putShort__IS;
      jmethodID putChar__C;
      jmethodID putChar__IC;
      jmethodID putInt__I;
      jmethodID putInt__II;
      jmethodID putLong__J;
      jmethodID putLong__IJ;
      jmethodID putFloat__F;
      jmethodID putFloat__IF;
      jmethodID putDouble__ID;
      jmethodID putDouble__D;
      jmethodID put__Ljava_nio_ByteBuffer_;
      jmethodID put___B;
      jmethodID put___BII;
      jmethodID put__IB;
      jmethodID put__B;
      jmethodID isDirect;
      jmethodID hasArray;
      jmethodID array;
      jmethodID arrayOffset;
      jmethodID duplicate;
      jmethodID slice;
      jmethodID asReadOnlyBuffer;
      jmethodID compact;
      jmethodID order;
      jmethodID order__Ljava_nio_ByteOrder_;
      jmethodID asCharBuffer;
      jmethodID asShortBuffer;
      jmethodID asIntBuffer;
      jmethodID asLongBuffer;
      jmethodID asFloatBuffer;
      jmethodID asDoubleBuffer;
      jmethodID limit;
      jmethodID limit__I;
      jmethodID clear;
      jmethodID remaining;
      jmethodID position__I;
      jmethodID position;
      jmethodID capacity;
      jmethodID mark;
      jmethodID reset;
      jmethodID flip;
      jmethodID rewind;
      jmethodID hasRemaining;
      jmethodID isReadOnly;
      jmethodID getClass;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_java_nio_ByteBuffer;

// free structure
void free_jclass_java_nio_ByteBuffer(JNIEnv *env, jclass_java_nio_ByteBuffer *java_nio_ByteBuffer);

// alloc structure
jclass_java_nio_ByteBuffer *alloc_jclass_java_nio_ByteBuffer(JNIEnv *env);


/**
 * structure with a reference to fuse.FuseFSFactory java class and cached field & method IDs
 */
typedef struct _jclass_fuse_FuseFSFactory
{
   // a pointer to globaly referenced Java class
   jclass class;

   // cached constructor IDs
   struct
   {
      jmethodID new;

   } constructor;

   // cached static method IDs
   struct
   {
      jmethodID adapt__Lfuse_compat_Filesystem1_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Lfuse_compat_Filesystem2_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Lfuse_Filesystem3_Lorg_apache_commons_logging_Log_;
      jmethodID adapt__Ljava_lang_Object_;
      jmethodID adapt__Ljava_lang_Object_Lorg_apache_commons_logging_Log_;

   } static_method;

   // cached instance method IDs
   struct
   {
      jmethodID hashCode;
      jmethodID getClass;
      jmethodID equals__Ljava_lang_Object_;
      jmethodID toString;
      jmethodID wait__JI;
      jmethodID wait__J;
      jmethodID wait;
      jmethodID notify;
      jmethodID notifyAll;

   } method;

} jclass_fuse_FuseFSFactory;

// free structure
void free_jclass_fuse_FuseFSFactory(JNIEnv *env, jclass_fuse_FuseFSFactory *fuse_FuseFSFactory);

// alloc structure
jclass_fuse_FuseFSFactory *alloc_jclass_fuse_FuseFSFactory(JNIEnv *env);

