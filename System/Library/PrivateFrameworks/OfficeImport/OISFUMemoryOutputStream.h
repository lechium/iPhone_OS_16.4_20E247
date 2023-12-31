//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUMemoryOutputStream : NSObject
{
    NSMutableData *mData;	// 8 = 0x8
}

- (id)closeLocalStream;	// IMP=0x0000000000291c25
- (void)close;	// IMP=0x0000000000291c1f
- (id)inputStream;	// IMP=0x0000000000291c17
- (_Bool)canCreateInputStream;	// IMP=0x0000000000291c0f
- (long long)offset;	// IMP=0x0000000000291bf9
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;	// IMP=0x0000000000291b62
- (_Bool)canSeek;	// IMP=0x0000000000291b5a
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000291b44
- (void)dealloc;	// IMP=0x0000000000291b09
- (id)initWithData:(id)arg1;	// IMP=0x0000000000291ad5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

