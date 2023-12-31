//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSString;

__attribute__((visibility("hidden")))
@interface STKBaseSound : NSObject
{
    BSTimer *_timer;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    _Bool _playsOnce;	// 24 = 0x18
    _Bool _isPlaying;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000000138c2
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) _Bool playsOnce; // @synthesize playsOnce=_playsOnce;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)_sync_stopSound;	// IMP=0x00000000000137d0
- (void)_sync_playSound;	// IMP=0x00000000000134b1
- (void)_reallyStopSound;	// IMP=0x00000000000134ab
- (void)_reallyPlaySound;	// IMP=0x00000000000134a5
- (void)stopSound;	// IMP=0x0000000000013455
- (void)playSound;	// IMP=0x0000000000013405
- (void)dealloc;	// IMP=0x0000000000013349
- (id)initWithDuration:(double)arg1;	// IMP=0x0000000000013253

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

