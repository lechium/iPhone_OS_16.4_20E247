//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUOffsetOutputStream : NSObject
{
    id <SFUOutputStream> mOutputStream;	// 8 = 0x8
    long long mInitialOffset;	// 16 = 0x10
}

- (id)closeLocalStream;	// IMP=0x000000000029265f
- (void)close;	// IMP=0x0000000000292649
- (id)inputStream;	// IMP=0x00000000002925d4
- (_Bool)canCreateInputStream;	// IMP=0x00000000002925be
- (long long)offset;	// IMP=0x00000000002924f1
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;	// IMP=0x00000000002924d3
- (_Bool)canSeek;	// IMP=0x00000000002924bd
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000002924a7
- (void)dealloc;	// IMP=0x000000000029246c
- (id)initWithOutputStream:(id)arg1;	// IMP=0x0000000000292424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

