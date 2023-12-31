//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABOle : NSObject
{
}

+ (id)readFromStream:(struct SsrwOOStream *)arg1 size:(unsigned int)arg2 cancel:(id)arg3;	// IMP=0x008000000023ef80
+ (id)readCompressedFromStream:(struct SsrwOOStream *)arg1 compressedSize:(unsigned int)arg2 uncompressedSize:(unsigned int)arg3 cancel:(id)arg4;	// IMP=0x00800000001ce7af
+ (id)readFromData:(id)arg1 cancel:(id)arg2;	// IMP=0x00800000000df908
+ (id)readFromParentStorage:(struct SsrwOOStorage *)arg1 storageName:(id)arg2 cancel:(id)arg3;	// IMP=0x00800000000dc86b
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2;	// IMP=0x00800000002fe61b
+ (_Bool)readSharedInfoFor:(id)arg1 fromStorage:(struct SsrwOOStorage *)arg2;	// IMP=0x00800000001e0751
+ (id)readUnicodeStringFromStream:(struct SsrwOOStream *)arg1;	// IMP=0x00800000001e118b
+ (_Bool)isChart:(id)arg1;	// IMP=0x00800000001e0f61
+ (_Bool)isBiffCLSID:(id)arg1;	// IMP=0x00800000001e0fe7
+ (id)readCLSIDFromStream:(struct SsrwOOStream *)arg1;	// IMP=0x00800000001e0ddc
+ (id)stringForCLSID:(struct _SsrwOO_GUID)arg1;	// IMP=0x00800000001e0ea0
+ (id)readAnsiStringFromStream:(struct SsrwOOStream *)arg1;	// IMP=0x00800000001e10a1
+ (id)read4ByteFromStream:(struct SsrwOOStream *)arg1;	// IMP=0x008000000023f060

@end

