//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayerController, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerVolumeController : NSObject
{
    _Bool _prefersSystemVolumeHUDHidden;	// 8 = 0x8
    _Bool _changingVolume;	// 9 = 0x9
    AVPlayerController *_playerController;	// 16 = 0x10
    AVObservationController *_keyValueObservationController;	// 24 = 0x18
}

+ (id)volumeController;	// IMP=0x001000000008dcf6
- (void).cxx_destruct;	// IMP=0x000000000008dc51
@property(retain, nonatomic) AVObservationController *keyValueObservationController; // @synthesize keyValueObservationController=_keyValueObservationController;
@property(nonatomic, getter=isChangingVolume) _Bool changingVolume; // @synthesize changingVolume=_changingVolume;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) _Bool prefersSystemVolumeHUDHidden; // @synthesize prefersSystemVolumeHUDHidden=_prefersSystemVolumeHUDHidden;
- (void)endChangingVolume;	// IMP=0x000000000008dbe3
- (void)beginChangingVolume;	// IMP=0x000000000008dbcc
- (void)setClientWithIdentifier:(id)arg1 forWindowSceneSessionWithIdentifier:(id)arg2;	// IMP=0x000000000008dbc6
@property(readonly, nonatomic) _Bool currentRouteHasVolumeControl;
- (void)setTargetVolume:(float)arg1;	// IMP=0x000000000008db21
@property(readonly, nonatomic) float volume;
- (void)dealloc;	// IMP=0x000000000008da8b
- (id)init;	// IMP=0x000000000008d9f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

