//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUBufferedInputStream : NSObject
{
    id <SFUInputStream> mStream;	// 8 = 0x8
    char *mBuffer;	// 16 = 0x10
    unsigned long long mBufferSize;	// 24 = 0x18
    long long mBufferOffset;	// 32 = 0x20
    long long mBufferStart;	// 40 = 0x28
    long long mBufferEnd;	// 48 = 0x30
}

- (id)closeLocalStream;	// IMP=0x000000000028ddad
- (void)close;	// IMP=0x000000000028dd97
- (void)enableSystemCaching;	// IMP=0x000000000028dd81
- (void)disableSystemCaching;	// IMP=0x000000000028dd6b
- (void)seekToOffset:(long long)arg1;	// IMP=0x000000000028dcf6
- (_Bool)canSeek;	// IMP=0x000000000028dce0
- (_Bool)seekWithinBufferToOffset:(long long)arg1;	// IMP=0x000000000028dcbe
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000028d95f
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000028d918
- (long long)offset;	// IMP=0x000000000028d90a
- (void)dealloc;	// IMP=0x000000000028d8c6
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;	// IMP=0x000000000028d8a8
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2;	// IMP=0x000000000028d7da
- (id)initWithStream:(id)arg1;	// IMP=0x000000000028d7c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

