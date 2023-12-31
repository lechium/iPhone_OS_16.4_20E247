//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUMemoryInputStream : NSObject
{
    NSData *mData;	// 8 = 0x8
    const char *mStart;	// 16 = 0x10
    const char *mCurrent;	// 24 = 0x18
    const char *mEnd;	// 32 = 0x20
}

- (id)closeLocalStream;	// IMP=0x0000000000291acd
- (void)close;	// IMP=0x0000000000291ac7
- (void)enableSystemCaching;	// IMP=0x0000000000291ac1
- (void)disableSystemCaching;	// IMP=0x0000000000291abb
- (_Bool)seekWithinBufferToOffset:(long long)arg1;	// IMP=0x0000000000291a89
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000291a6a
- (void)seekToOffset:(long long)arg1;	// IMP=0x0000000000291a48
- (_Bool)canSeek;	// IMP=0x0000000000291a40
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000291a0d
- (long long)offset;	// IMP=0x00000000002919ff
- (void)dealloc;	// IMP=0x00000000002919c4
- (id)initWithData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000002918e4
- (id)initWithData:(id)arg1;	// IMP=0x000000000029189f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

