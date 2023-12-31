//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECPackedDataUtils : NSObject
{
}

+ (id)dumpDataToHexadecimalString:(char *)arg1 start:(unsigned int)arg2 stop:(unsigned int)arg3 nicelyFormatted:(_Bool)arg4;	// IMP=0x00800000003b9f8d
+ (void)writeString:(id)arg1 toPackedData:(struct __CFData *)arg2 packedDataSize:(unsigned int)arg3 atIndex:(unsigned int)arg4 withPreviousLength:(unsigned short)arg5 outLength:(unsigned short *)arg6;	// IMP=0x00800000001f4dfa
+ (id)readStringFromData:(char *)arg1 atOffset:(unsigned int)arg2 withLength:(unsigned int)arg3;	// IMP=0x008000000020c2d4
+ (char *)prepareForDataOfLength:(unsigned int)arg1 atIndex:(unsigned int)arg2 withPreviousLength:(unsigned int)arg3 inPackedData:(struct __CFData *)arg4 packedDataSize:(unsigned int)arg5;	// IMP=0x00800000001f4eca
+ (_Bool)setData:(char *)arg1 ofLength:(unsigned int)arg2 atIndex:(unsigned int)arg3 withPreviousLength:(unsigned int)arg4 inPackedData:(struct __CFData *)arg5 packedDataSize:(unsigned int)arg6;	// IMP=0x00800000003b9f43

@end

