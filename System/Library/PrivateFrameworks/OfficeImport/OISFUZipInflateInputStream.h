//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipInflateInputStream : NSObject
{
    struct z_stream_s mStream;	// 8 = 0x8
    long long mOffset;	// 120 = 0x78
    id <OISFUBufferedInputStream> mInput;	// 128 = 0x80
    char *mOutBuffer;	// 136 = 0x88
    unsigned long long mOutBufferSize;	// 144 = 0x90
    _Bool mReachedEnd;	// 152 = 0x98
    _Bool mIsFromZip;	// 153 = 0x99
    unsigned long long mCalculatedCrc;	// 160 = 0xa0
    unsigned long long mCheckCrc;	// 168 = 0xa8
}

- (long long)totalCompressedBytesConsumed;	// IMP=0x0000000000299d4d
- (id)closeLocalStream;	// IMP=0x0000000000299d40
- (void)close;	// IMP=0x0000000000299d0e
- (void)enableSystemCaching;	// IMP=0x0000000000299cf5
- (void)disableSystemCaching;	// IMP=0x0000000000299cdc
- (long long)offset;	// IMP=0x0000000000299cd2
- (_Bool)canSeek;	// IMP=0x0000000000299cca
- (void)seekToOffset:(long long)arg1;	// IMP=0x0000000000299c33
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000299941
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000002998a3
- (void)dealloc;	// IMP=0x0000000000299850
- (id)initWithInput:(id)arg1;	// IMP=0x000000000029978b
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;	// IMP=0x00000000002996a7
- (void)setupInflateStream;	// IMP=0x0000000000299d57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
