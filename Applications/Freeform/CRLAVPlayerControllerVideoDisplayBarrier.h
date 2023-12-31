//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer;

@interface CRLAVPlayerControllerVideoDisplayBarrier : NSObject
{
    AVPlayer *_player;	// 8 = 0x8
    _Bool _allVideoFramesDisplayed;	// 16 = 0x10
    struct OpaqueCMTimebase *_timebase;	// 24 = 0x18
    CDStruct_1b6d18a9 _lastItemTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003a8406
@property(nonatomic) CDStruct_1b6d18a9 lastItemTime; // @synthesize lastItemTime=_lastItemTime;
@property(nonatomic) _Bool allVideoFramesDisplayed; // @synthesize allVideoFramesDisplayed=_allVideoFramesDisplayed;
@property(retain, nonatomic) struct OpaqueCMTimebase *timebase; // @synthesize timebase=_timebase;
- (void)p_outputForDisplayLink:(id)arg1;	// IMP=0x00100000003a8306
- (_Bool)p_allVideoFramesDisplayedAtHostTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00100000003a807c
- (void)waitUntilAllVideoFramesAreDisplayed;	// IMP=0x00100000003a757a
- (void)dealloc;	// IMP=0x00100000003a753b
- (id)initWithPlayer:(id)arg1;	// IMP=0x00100000003a7304

@end

